# Yocto Default Image

    root@edison:~# dmesg | grep -i blue
    [    0.235619] Bluetooth: Core ver 2.16
    [    0.235722] Bluetooth: HCI device and connection manager initialized
    [    0.235752] Bluetooth: HCI socket layer initialized
    [    0.235778] Bluetooth: L2CAP socket layer initialized
    [    0.235876] Bluetooth: SCO socket layer initialized
    [    0.922994] Bluetooth: HCI UART driver ver 2.2
    [    0.923015] Bluetooth: HCI H4 protocol initialized
    [    1.588016] Bluetooth: RFCOMM TTY layer initialized
    [    1.588081] Bluetooth: RFCOMM socket layer initialized
    [    1.588100] Bluetooth: RFCOMM ver 1.11
    [    1.588116] Bluetooth: BNEP (Ethernet Emulation) ver 1.3
    [    1.588130] Bluetooth: BNEP filters: protocol multicast
    [    1.588160] Bluetooth: BNEP socket layer initialized
    [    1.588175] Bluetooth: HIDP (Human Interface Emulation) ver 1.2
    [    1.588202] Bluetooth: HIDP socket layer initialized
    root@edison:~# systemctl status bluetooth.service
    root@edison:~# systemctl stop bluetooth
    root@edison:~# systemctl start bluetooth

= Links =

http://alextgalileo.altervista.org/blog/install-kernel-from-repo-onto-edison-official-image/
https://software.intel.com/en-us/articles/intel-edison-board-getting-started-with-bluetooth
