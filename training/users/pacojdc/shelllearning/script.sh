#!/bin/bash
##############FUNCTIONS###################

#Create folder if doesnt exist this function deosnt overwrite any folder
create_folder () {
	TEMP_DIR=$1
	if [ -d $TEMP_DIR ]
	then
		echo "Directory $TEMP_DIR already exists!"	
	else
		echo "Creating $TEMP_DIR directory"
		mkdir $TEMP_DIR
	fi
}

#Create file if doesnt exist this function deosnt overwrite it
create_file () {
	TEMP_FILE=$1
	if [ -e $TEMP_FILE ]
	then
		echo "File $TEMP_FILE already exists!"	
	else
		echo "Creating $TEMP_FILE file"
		touch $TEMP_FILE
	fi
}









##############MAIN CODE###################
echo "Script to Learn Linux" 
echo ""
#Checking Parameters:  1 file location, 2 kernel version, 3 file type
echo "Checking parameters"
if [ $# -ne 3 ] 
then
	echo "ERROR: Parameters are wrong!"
	exit 1
fi
#Show parametest
echo "Parameters: $#"
echo "File location: $1"
echo "Kernel version: $2"
echo "File Type: $3"

echo ""
#Making Directories: 
echo "Making Directories"
HOME=$PWD
#Create Directory : kernelimages
create_folder $HOME/kernelimages

#Create Directory : preworkspace
create_folder $HOME/preworkspace

#Create Directory : postworkspace
create_folder $HOME/postworkspace

#Create File : stats.pre
create_file $HOME/stats.pre

#Create File : stats.post
create_file $HOME/stats.post

#Create File : intel.contributors
create_file $HOME/intel.contributors


#Download/Set source o start process
echo ""
URL_PATH="http://www.kernel.org/pub/linux/kernel/v3.x"

if [ $3 == "gz" ] || [ $3 == "xz" ]
then
	echo "Downloading $3 file"
else
	echo "Parameter for extension on file is not valid: $3"
	exit 2
fi
LOCAL_PATH="$HOME/kernelimages/linux-$2.tar.$3"
URL_VER="$URL_PATH/linux-$2.tar.$3"

if [ $1 = "internet" ]
then	
	if [ -e $LOCAL_PATH]
	then
		echo "Removing Existing file"
		rm $LOCAL_PATH
	fi
	echo "Downloading Kernel from $URL_VER"
	wget --spider -nv $URL_VER
	if [ $? -ne 0 ]
	then
		echo "This URL Path does not exit! Check the Version"
		exit 2
	fi
	cd kernelimages 
	wget -nv $URL_VER
	cd ..
elif [ $1 = "local" ]
then
	echo "Looking for kernel $2 locally..."
	if [ -e $LOCAL_PATH]
	then
		echo "File exists"
	else
		echo "This File doesn't exist locally, please use internet option to download it"
		exit 2
	fi
else
	echo "Parameter not recognized: $1"
	exit 2
fi

#Uncompress the file into preworkspace directory
UNZIP_PATH="$HOME/preworkspace/"
cp $LOCAL_PATH $UNZIP_PATH
cd preworkspace
tar xf "linux-$2.tar.$3"
rm "linux-$2.tar.$3"
cd ..

###########PRE-processing#################3







echo "Script finished sucessfully"
exit 0
