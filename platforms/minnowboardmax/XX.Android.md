# Android Open Source Project @ Minnowboard

[Intel Open Source Android Build Guide](https://01.org/android-ia/guides/android-5.0-lollipop-os-build-guide)

* ToDo! Review VM and Minnowboard .config and compare
* ToDo! Build custom kernel
* ToDo! Reference for minimal kernel
* ToDo! device/intel/gmin-kernel/x86_64/modules/3.14.33-quilt-5152b223, see what modules are loaded

# Modules @ Minnowboard lsmod

    Module                  Size  Used by
    fuse                   73728  1 
    btrfs                 741376  0 
    xor                    20480  1 btrfs
    raid6_pq               98304  1 btrfs
    ufs                    61440  0 
    qnx4                   16384  0 
    hfsplus                81920  0 
    hfs                    49152  0 
    minix                  28672  0 
    ntfs                  167936  0 
    msdos                  20480  0 
    jfs                   139264  0 
    xfs                   659456  0 
    libcrc32c              16384  1 xfs
    reiserfs              196608  0 
    ext3                  151552  0 
    jbd                    53248  1 ext3
    ext2                   61440  0 
    dm_mod                 77824  0 
    rfcomm                 36864  0 
    bnep                   20480  2 
    bluetooth             249856  10 bnep,rfcomm
    rfkill                 20480  2 bluetooth
    nfsd                  204800  2 
    auth_rpcgss            40960  1 nfsd
    oid_registry           16384  1 auth_rpcgss
    nfs_acl                16384  1 nfsd
    nfs                   155648  0 
    lockd                  57344  2 nfs,nfsd
    grace                  16384  2 nfsd,lockd
    fscache                45056  1 nfs
    sunrpc                192512  6 nfs,nfsd,auth_rpcgss,lockd,nfs_acl
    nls_utf8               16384  1 
    nls_cp437              20480  1 
    vfat                   20480  1 
    fat                    53248  2 vfat,msdos
    loop                   24576  0 
    coretemp               16384  0 
    kvm_intel             135168  0 
    iTCO_wdt               16384  0 
    kvm                   339968  1 kvm_intel
    iTCO_vendor_support    16384  1 iTCO_wdt
    snd_hda_codec_hdmi     40960  1 
    snd_usb_audio         118784  0 
    snd_hda_intel          28672  0 
    ghash_clmulni_intel    16384  0 
    snd_usbmidi_lib        24576  1 snd_usb_audio
    snd_hda_controller     24576  1 snd_hda_intel
    snd_seq_midi           16384  0 
    snd_seq_midi_event     16384  1 snd_seq_midi
    snd_hda_codec          90112  3 snd_hda_codec_hdmi,snd_hda_intel,snd_hda_controller
    snd_rawmidi            24576  2 snd_usbmidi_lib,snd_seq_midi
    snd_hwdep              16384  2 snd_usb_audio,snd_hda_codec
    aesni_intel           167936  0 
    aes_x86_64             20480  1 aesni_intel
    snd_pcm                81920  5 snd_usb_audio,snd_hda_codec_hdmi,snd_hda_codec,snd_hda_intel,snd_hda_controller
    ablk_helper            16384  1 aesni_intel
    cryptd                 16384  3 ghash_clmulni_intel,aesni_intel,ablk_helper
    lrw                    16384  1 aesni_intel
    snd_seq                49152  2 snd_seq_midi_event,snd_seq_midi
    gf128mul               16384  1 lrw
    glue_helper            16384  1 aesni_intel
    microcode              32768  0 
    snd_timer              24576  2 snd_pcm,snd_seq
    snd_seq_device         16384  3 snd_seq,snd_rawmidi,snd_seq_midi
    efivars                16384  0 
    pcspkr                 16384  0 
    uvcvideo               69632  0 
    snd                    57344  11 snd_usb_audio,snd_hwdep,snd_timer,snd_hda_codec_hdmi,
    snd_pcm,snd_seq,snd_rawmidi,snd_usbmidi_lib,snd_hda_codec,snd_hda_intel,snd_seq_device
    videobuf2_vmalloc      16384  1 uvcvideo
    videobuf2_memops       16384  1 videobuf2_vmalloc
    lpc_ich                24576  0 
    i2c_i801               20480  0 
    videobuf2_core         36864  1 uvcvideo
    mfd_core               16384  1 lpc_ich
    v4l2_common            16384  1 videobuf2_core
    videodev              114688  3 uvcvideo,v4l2_common,videobuf2_core
    joydev                 20480  0 
    soundcore              16384  2 snd,snd_hda_codec
    dw_dmac                16384  0 
    dw_dmac_core           24576  1 dw_dmac
    i2c_designware_platform    16384  0 
    i2c_designware_core    16384  1 i2c_designware_platform
    spi_pxa2xx_platform    20480  0 
    evdev                  20480  16 
    processor              28672  0 
    ext4                  401408  1 
    crc16                  16384  2 ext4,bluetooth
    jbd2                   77824  1 ext4
    mbcache                16384  3 ext2,ext3,ext4
    hid_generic            16384  0 
    usbhid                 40960  0 
    hid                    94208  2 hid_generic,usbhid
    crc32c_intel           24576  2 
    sd_mod                 32768  4 
    thermal                20480  0 

# End of File
