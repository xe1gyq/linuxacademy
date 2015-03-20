#!/bin/sh

set -x

test -d bin || mkdir bin
javac -d bin src/com/marakana/jniexamples/Hello.java
javah -jni -classpath bin -d jni com.marakana.jniexamples.Hello
test -d libs || mkdir libs
gcc -o libs/libhello.so -lc -shared -fPIC -I$JAVA_HOME/include jni/com_marakana_jniexamples_Hello.c
java -Djava.library.path=libs -classpath bin com.marakana.jniexamples.Hello Student 5
