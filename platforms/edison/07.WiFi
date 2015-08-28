Make sure there are no soft blocks
    ~# rfkill list
Make sure wlan0 is loaded and see IP
    ~# ifconfig
Load the wlan0 device driver
    ~# wpa_supplicant -B -Dnl80211 -iwlan0 -c/etc/wpa_supplicant/wpa_supplicant.conf
Get DHCP and DNS
    ~# busybox udhcpc -i wlan0
Move usb0 to a different non-conflicting subnet
    ~# vi /etc/system/system/basic.target.wants/network-gadget-init.service
Disable usb0 device from loading
    ~# systemctl disable network-gadget-init.service
Ensure there is a wpa_supplicant network{} definition and remove unneeded networks
    ~# vi /etc/wpa_supplicant/wpa_supplicant.conf
Enable first network definition
    ~# wpa_cli
         > enable_network 0
         > select_network 0
         > save
         > quit
 
 
Example WEP key wpa_supplicant.conf
ctrl_interface=/var/run/wpa_supplicant
ctrl_interface_group=0
update_config=1
network={
     ssid="YOURSSID"
     scan_ssid=1
     key_mgmt=NONE
     auth_alg=OPEN
     wep_key0=f0039faded348299992344be23
}
Remove soft block on wlan0
    ~# rfkill unblock wlan
Enable wifi on boot once config is confirmed correct
    ~# systemctl enable wa_supplicant
