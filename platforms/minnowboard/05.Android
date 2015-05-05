Android Open Source Project @ Minnowboard

https://01.org/android-ia/guides/android-5.0-lollipop-os-build-guide

ToDo! Review VM and Minnowboard .config and compare
ToDo! Build custom kernel
ToDo! Reference for minimal kernel
ToDo! device/intel/gmin-kernel/x86_64/modules/3.14.33-quilt-5152b223, see what modules are loaded

# Kernel Modules Order

kernel/fs/isofs/isofs.ko
kernel/fs/udf/udf.ko
kernel/crypto/michael_mic.ko
kernel/drivers/video/backlight/lcd.ko
kernel/drivers/video/backlight/platform_lcd.ko
kernel/drivers/video/backlight/bd6107.ko
kernel/drivers/video/backlight/generic_bl.ko
kernel/drivers/video/backlight/gpio_backlight.ko
kernel/drivers/video/backlight/lm3630a_bl.ko
kernel/drivers/video/backlight/lv5207lp.ko
kernel/drivers/tty/serial/8250/8250_dw.ko
kernel/drivers/char/hw_random/tpm-rng.ko
kernel/drivers/char/i8k.ko
kernel/drivers/char/tpm/tpm.ko
kernel/drivers/char/tpm/tpm_tis.ko
kernel/drivers/char/tpm/tpm_i2c_atmel.ko
kernel/drivers/char/tpm/tpm_i2c_infineon.ko
kernel/drivers/char/tpm/tpm_i2c_nuvoton.ko
kernel/drivers/char/tpm/tpm_nsc.ko
kernel/drivers/char/tpm/tpm_atmel.ko
kernel/drivers/char/tpm/tpm_infineon.ko
kernel/drivers/misc/eeprom/eeprom_93cx6.ko
kernel/drivers/misc/lis3lv02d/lis3lv02d.ko
kernel/drivers/misc/intel_ld/lnp_ldisc.ko
kernel/drivers/net/phy/mdio-bitbang.ko
kernel/drivers/net/ethernet/intel/i40e/i40e.ko
kernel/drivers/net/ethernet/realtek/8139cp.ko
kernel/drivers/net/ethernet/rdc/r6040.ko
kernel/drivers/net/ethernet/smsc/smsc911x.ko
kernel/drivers/net/ethernet/renesas/sh_eth.ko
kernel/drivers/net/wireless/rtl818x/rtl8180/rtl8180.ko
kernel/drivers/net/wireless/rtl818x/rtl8187/rtl8187.ko
kernel/drivers/net/wireless/rtlwifi/rtlwifi.ko
kernel/drivers/net/wireless/rtlwifi/rtl_pci.ko
kernel/drivers/net/wireless/rtlwifi/rtl_usb.ko
kernel/drivers/net/wireless/rtlwifi/rtl8192c/rtl8192c-common.ko
kernel/drivers/net/wireless/rtlwifi/rtl8192ce/rtl8192ce.ko
kernel/drivers/net/wireless/rtlwifi/rtl8192cu/rtl8192cu.ko
kernel/drivers/net/wireless/rtlwifi/rtl8192se/rtl8192se.ko
kernel/drivers/net/wireless/rtlwifi/rtl8192de/rtl8192de.ko
kernel/drivers/net/wireless/rtlwifi/rtl8723ae/rtl8723ae.ko
kernel/drivers/net/wireless/rtlwifi/rtl8188ee/rtl8188ee.ko
kernel/drivers/net/wireless/libertas_tf/libertas_tf.ko
kernel/drivers/net/wireless/libertas_tf/libertas_tf_usb.ko
kernel/drivers/net/wireless/mwl8k.ko
kernel/drivers/net/wireless/ath/ath9k/ath9k.ko
kernel/drivers/net/wireless/ath/ath9k/ath9k_hw.ko
kernel/drivers/net/wireless/ath/ath9k/ath9k_common.ko
kernel/drivers/net/wireless/ath/ath6kl/ath6kl_core.ko
kernel/drivers/net/wireless/ath/ath6kl/ath6kl_sdio.ko
kernel/drivers/net/wireless/ath/ath6kl/ath6kl_usb.ko
kernel/drivers/net/wireless/ath/ath10k/ath10k_core.ko
kernel/drivers/net/wireless/ath/ath10k/ath10k_pci.ko
kernel/drivers/net/wireless/ath/wcn36xx/wcn36xx.ko
kernel/drivers/net/wireless/ath/ath.ko
kernel/drivers/net/wireless/mwifiex/mwifiex.ko
kernel/drivers/net/wireless/mwifiex/mwifiex_sdio.ko
kernel/drivers/net/wireless/mwifiex/mwifiex_pcie.ko
kernel/drivers/net/wireless/mwifiex/mwifiex_usb.ko
kernel/drivers/net/wireless/bcmdhd/bcmdhd.ko
kernel/drivers/net/wireless/cw1200/cw1200_core.ko
kernel/drivers/net/wireless/cw1200/cw1200_wlan_sdio.ko
kernel/drivers/net/wireless/cw1200/cw1200_wlan_spi.ko
kernel/drivers/net/usb/sr9700.ko
kernel/drivers/net/usb/huawei_cdc_ncm.ko
kernel/drivers/net/nlmon.ko
kernel/drivers/usb/host/fusbh200-hcd.ko
kernel/drivers/usb/host/fotg210-hcd.ko
kernel/drivers/usb/class/usblp.ko
kernel/drivers/usb/class/cdc-wdm.ko
kernel/drivers/input/tablet/wacom.ko
kernel/drivers/input/touchscreen/atmel_mxt_ts.ko
kernel/drivers/input/touchscreen/cyttsp4_core.ko
kernel/drivers/input/touchscreen/cyttsp4_i2c.ko
kernel/drivers/input/touchscreen/cyttsp_i2c_common.ko
kernel/drivers/input/touchscreen/cyttsp4_spi.ko
kernel/drivers/input/touchscreen/sur40.ko
kernel/drivers/input/touchscreen/zforce_ts.ko
kernel/drivers/media/i2c/atomisp/ov5648.ko
kernel/drivers/media/i2c/atomisp/ov2680.ko
kernel/drivers/media/i2c/atomisp/gc2155.ko
kernel/drivers/media/i2c/atomisp/gc0310.ko
kernel/drivers/media/i2c/atomisp/dw9714.ko
kernel/drivers/media/v4l2-core/videobuf-core.ko
kernel/drivers/media/v4l2-core/videobuf-vmalloc.ko
kernel/drivers/media/usb/gspca/gspca_main.ko
kernel/drivers/media/usb/gspca/gspca_stk1135.ko
kernel/drivers/media/usb/usbtv/usbtv.ko
kernel/drivers/power/generic-adc-battery.ko
kernel/drivers/power/isp1704_charger.ko
kernel/drivers/hwmon/htu21.ko
kernel/drivers/hwmon/sch56xx-common.ko
kernel/drivers/hwmon/sch5627.ko
kernel/drivers/hwmon/sch5636.ko
kernel/drivers/md/bcache/bcache.ko
kernel/drivers/mmc/host/wbsd.ko
kernel/drivers/mmc/host/vub300.ko
kernel/drivers/mmc/host/ushc.ko
kernel/drivers/hid/hid-elo.ko
kernel/drivers/hid/hid-huion.ko
kernel/drivers/hid/hid-magicmouse.ko
kernel/drivers/hid/hid-ntrig.ko
kernel/drivers/hid/hid-xinmo.ko
kernel/drivers/hid/i2c-hid/i2c-hid.ko
kernel/drivers/staging/rtl8187se/r8187se.ko
kernel/drivers/staging/rtl8192u/r8192u_usb.ko
kernel/drivers/staging/rtl8192e/rtllib.ko
kernel/drivers/staging/rtl8192e/rtllib_crypt_ccmp.ko
kernel/drivers/staging/rtl8192e/rtllib_crypt_tkip.ko
kernel/drivers/staging/rtl8192e/rtllib_crypt_wep.ko
kernel/drivers/staging/rtl8192e/rtl8192e/r8192e_pci.ko
kernel/drivers/staging/rtl8712/r8712u.ko
kernel/drivers/staging/rtl8188eu/r8188eu.ko
kernel/drivers/staging/gdm724x/gdmulte.ko
kernel/drivers/staging/gdm724x/gdmtty.ko
kernel/drivers/staging/pn544/pn544_nfc.ko
kernel/drivers/staging/fdp/fdp_nfc.ko
kernel/drivers/platform/x86/asus-laptop.ko
kernel/drivers/platform/x86/asus-wmi.ko
kernel/drivers/platform/x86/asus-nb-wmi.ko
kernel/drivers/platform/x86/eeepc-laptop.ko
kernel/drivers/platform/x86/eeepc-wmi.ko
kernel/drivers/platform/x86/classmate-laptop.ko
kernel/drivers/platform/x86/compal-laptop.ko
kernel/drivers/platform/x86/dell-wmi.ko
kernel/drivers/platform/x86/acerhdf.ko
kernel/drivers/platform/x86/hp_accel.ko
kernel/drivers/platform/x86/sony-laptop.ko
kernel/drivers/platform/x86/thinkpad_acpi.ko
kernel/drivers/platform/x86/hdaps.ko
kernel/drivers/platform/x86/fujitsu-laptop.ko
kernel/drivers/platform/x86/fujitsu-tablet.ko
kernel/drivers/platform/x86/panasonic-laptop.ko
kernel/drivers/platform/x86/wmi.ko
kernel/drivers/platform/x86/topstar-laptop.ko
kernel/drivers/platform/x86/toshiba_acpi.ko
kernel/drivers/platform/x86/toshiba_bluetooth.ko
kernel/drivers/platform/x86/intel_ips.ko
kernel/drivers/platform/x86/samsung-laptop.ko
kernel/drivers/platform/x86/mxm-wmi.ko
kernel/drivers/platform/x86/samsung-q10.ko
kernel/drivers/platform/x86/apple-gmux.ko
kernel/drivers/platform/x86/intel-smartconnect.ko
kernel/drivers/iio/accel/bma180.ko
kernel/drivers/iio/accel/bmc150-accel.ko
kernel/drivers/iio/accel/kxcjk-1013.ko
kernel/drivers/iio/adc/mcp320x.ko
kernel/drivers/iio/adc/nau7802.ko
kernel/drivers/iio/gyro/bmg160.ko
kernel/drivers/iio/imu/inv_mpu6050/inv-mpu6050.ko
kernel/drivers/iio/light/cm32181.ko
kernel/drivers/iio/light/cm3232.ko
kernel/drivers/iio/light/cm36651.ko
kernel/drivers/iio/light/jsa1212.ko
kernel/drivers/iio/light/jsa1127.ko
kernel/drivers/iio/magnetometer/ak8975.ko
kernel/drivers/iio/magnetometer/ak09911.ko
kernel/drivers/iio/magnetometer/bmm050.ko
kernel/drivers/iio/temperature/tmp006.ko
kernel/drivers/external_drivers/camera/drivers/media/pci/atomisp2/css2400b0_v21_build/atomisp-css2400b0_v21.ko
kernel/drivers/external_drivers/camera/drivers/media/pci/atomisp2/css2401a0_v21_build/atomisp-css2401a0_v21.ko
kernel/drivers/external_drivers/camera/drivers/media/i2c/imx/imx1x5.ko
kernel/drivers/external_drivers/camera/drivers/media/i2c/ov5693-ecs/ov5693.ko
kernel/drivers/external_drivers/camera/drivers/media/i2c/mt9m114.ko
kernel/drivers/external_drivers/camera/drivers/media/i2c/gc2235.ko
kernel/drivers/external_drivers/camera/drivers/media/i2c/ov2722.ko
kernel/drivers/external_drivers/camera/drivers/media/i2c/libmsrlisthelper.ko
kernel/drivers/external_drivers/camera/drivers/media/i2c/lm3554.ko
kernel/drivers/bluetooth/hci_uart.ko
kernel/drivers/bluetooth/btusb.ko
kernel/drivers/bluetooth/ath3k.ko
kernel/drivers/bcma/bcma.ko
kernel/sound/core/oss/snd-mixer-oss.ko
kernel/sound/core/oss/snd-pcm-oss.ko
kernel/sound/core/seq/snd-seq.ko
kernel/sound/core/seq/snd-seq-device.ko
kernel/sound/core/seq/snd-seq-midi.ko
kernel/sound/core/seq/snd-seq-midi-event.ko
kernel/sound/drivers/snd-dummy.ko
kernel/sound/usb/hiface/snd-usb-hiface.ko
kernel/sound/soc/generic/snd-soc-simple-card.ko
kernel/net/netfilter/xt_AUDIT.ko
kernel/net/ipv4/netfilter/iptable_raw.ko
kernel/net/ipv6/netfilter/ip6table_raw.ko
kernel/net/wireless/cfg80211.ko
kernel/net/wireless/lib80211.ko
kernel/net/rfkill/rfkill-gpio.ko
kernel/net/ieee802154/6lowpan_iphc.ko
kernel/net/bluetooth/bluetooth.ko
kernel/net/bluetooth/rfcomm/rfcomm.ko
kernel/net/bluetooth/bnep/bnep.ko
kernel/net/bluetooth/hidp/hidp.ko
kernel/net/mac80211/mac80211.ko
kernel/lib/crc8.ko
kernel/lib/cordic.ko

# Kernel Modules BuiltIn

kernel/arch/x86/crypto/glue_helper.ko
kernel/arch/x86/crypto/aes-x86_64.ko
kernel/arch/x86/crypto/blowfish-x86_64.ko
kernel/arch/x86/crypto/twofish-x86_64.ko
kernel/arch/x86/crypto/twofish-x86_64-3way.ko
kernel/arch/x86/crypto/aesni-intel.ko
kernel/arch/x86/crypto/crc32c-intel.ko
kernel/arch/x86/crypto/sha1-ssse3.ko
kernel/arch/x86/crypto/crct10dif-pclmul.ko
kernel/arch/x86/crypto/twofish-avx-x86_64.ko
kernel/arch/x86/kernel/cpuid.ko
kernel/arch/x86/kernel/iosf_mbi.ko
kernel/arch/x86/kernel/cpu/microcode/microcode.ko
kernel/arch/x86/platform/intel-mid/device_libs/platform_byt_audio.ko
kernel/arch/x86/platform/intel-mid/device_libs/platform_vlv2_plat_clk.ko
kernel/arch/x86/platform/intel-mid/device_libs/platform_sdio_regulator.ko
kernel/fs/binfmt_misc.ko
kernel/fs/binfmt_script.ko
kernel/fs/mbcache.ko
kernel/fs/btrfs/btrfs.ko
kernel/fs/cifs/cifs.ko
kernel/fs/configfs/configfs.ko
kernel/fs/efivarfs/efivarfs.ko
kernel/fs/ext3/ext3.ko
kernel/fs/ext4/ext4.ko
kernel/fs/fat/fat.ko
kernel/fs/fat/vfat.ko
kernel/fs/fat/msdos.ko
kernel/fs/fuse/fuse.ko
kernel/fs/jbd/jbd.ko
kernel/fs/jbd2/jbd2.ko
kernel/fs/nls/nls_base.ko
kernel/fs/nls/nls_cp437.ko
kernel/fs/nls/nls_ascii.ko
kernel/fs/nls/nls_iso8859-1.ko
kernel/fs/nls/nls_utf8.ko
kernel/fs/quota/quota_v2.ko
kernel/fs/quota/quota_tree.ko
kernel/fs/squashfs/squashfs.ko
kernel/crypto/crypto.ko
kernel/crypto/crypto_wq.ko
kernel/crypto/crypto_algapi.ko
kernel/crypto/aead.ko
kernel/crypto/crypto_blkcipher.ko
kernel/crypto/chainiv.ko
kernel/crypto/eseqiv.ko
kernel/crypto/seqiv.ko
kernel/crypto/crypto_hash.ko
kernel/crypto/pcompress.ko
kernel/crypto/cryptomgr.ko
kernel/crypto/cmac.ko
kernel/crypto/hmac.ko
kernel/crypto/md4.ko
kernel/crypto/md5.ko
kernel/crypto/sha1_generic.ko
kernel/crypto/sha256_generic.ko
kernel/crypto/sha512_generic.ko
kernel/crypto/gf128mul.ko
kernel/crypto/ecb.ko
kernel/crypto/cbc.ko
kernel/crypto/lrw.ko
kernel/crypto/xts.ko
kernel/crypto/ctr.ko
kernel/crypto/ccm.ko
kernel/crypto/cryptd.ko
kernel/crypto/des_generic.ko
kernel/crypto/blowfish_generic.ko
kernel/crypto/blowfish_common.ko
kernel/crypto/twofish_generic.ko
kernel/crypto/twofish_common.ko
kernel/crypto/aes_generic.ko
kernel/crypto/arc4.ko
kernel/crypto/deflate.ko
kernel/crypto/zlib.ko
kernel/crypto/crc32c.ko
kernel/crypto/crct10dif_common.ko
kernel/crypto/crct10dif_generic.ko
kernel/crypto/authenc.ko
kernel/crypto/authencesn.ko
kernel/crypto/lzo.ko
kernel/crypto/lz4.ko
kernel/crypto/lz4hc.ko
kernel/crypto/rng.ko
kernel/crypto/krng.ko
kernel/crypto/xor.ko
kernel/crypto/ablk_helper.ko
kernel/crypto/asymmetric_keys/asymmetric_keys.ko
kernel/crypto/asymmetric_keys/public_key.ko
kernel/crypto/asymmetric_keys/rsa.ko
kernel/crypto/asymmetric_keys/x509_key_parser.ko
kernel/block/deadline-iosched.ko
kernel/block/cfq-iosched.ko
kernel/drivers/acpi/ac.ko
kernel/drivers/acpi/button.ko
kernel/drivers/acpi/fan.ko
kernel/drivers/acpi/video.ko
kernel/drivers/acpi/processor.ko
kernel/drivers/acpi/thermal.ko
kernel/drivers/acpi/battery.ko
kernel/drivers/acpi/acpi_thermal_rel.ko
kernel/drivers/ata/libata.ko
kernel/drivers/ata/ahci.ko
kernel/drivers/ata/libahci.ko
kernel/drivers/ata/ata_piix.ko
kernel/drivers/ata/pata_amd.ko
kernel/drivers/ata/pata_oldpiix.ko
kernel/drivers/ata/pata_sch.ko
kernel/drivers/ata/pata_mpiix.ko
kernel/drivers/ata/ata_generic.ko
kernel/drivers/base/firmware_class.ko
kernel/drivers/base/regmap/regmap-i2c.ko
kernel/drivers/base/regmap/regmap-spi.ko
kernel/drivers/block/brd.ko
kernel/drivers/block/loop.ko
kernel/drivers/block/zram/zram.ko
kernel/drivers/cdrom/cdrom.ko
kernel/drivers/char/nvram.ko
kernel/drivers/char/agp/agpgart.ko
kernel/drivers/char/agp/intel-agp.ko
kernel/drivers/char/agp/intel-gtt.ko
kernel/drivers/char/hw_random/rng-core.ko
kernel/drivers/char/hw_random/intel-rng.ko
kernel/drivers/connector/cn.ko
kernel/drivers/cpufreq/cpufreq_stats.ko
kernel/drivers/cpufreq/cpufreq_performance.ko
kernel/drivers/cpufreq/cpufreq_powersave.ko
kernel/drivers/cpufreq/cpufreq_ondemand.ko
kernel/drivers/cpufreq/cpufreq_interactive.ko
kernel/drivers/cpufreq/acpi-cpufreq.ko
kernel/drivers/cpufreq/pcc-cpufreq.ko
kernel/drivers/dma/intel_mid_dma.ko
kernel/drivers/dma/intel_mid_dma_acpi.ko
kernel/drivers/dma/dw/dw_dmac_core.ko
kernel/drivers/dma/dw/dw_dmac.ko
kernel/drivers/extcon/extcon-class.ko
kernel/drivers/extcon/extcon-gpio.ko
kernel/drivers/extcon/extcon-tsu6111.ko
kernel/drivers/extcon/extcon-3gpio_otg.ko
kernel/drivers/firmware/dmi-sysfs.ko
kernel/drivers/firmware/edd.ko
kernel/drivers/firmware/dell_rbu.ko
kernel/drivers/firmware/dcdbas.ko
kernel/drivers/firmware/efi/efivars.ko
kernel/drivers/firmware/efi/efi-pstore.ko
kernel/drivers/gpio/gpio-lynxpoint.ko
kernel/drivers/gpio/gpio-virtual.ko
kernel/drivers/gpu/drm/drm_kms_helper.ko
kernel/drivers/gpu/drm/drm.ko
kernel/drivers/gpu/drm/bochs/bochs-drm.ko
kernel/drivers/gpu/drm/i915/i915.ko
kernel/drivers/gpu/drm/ttm/ttm.ko
kernel/drivers/hid/hid.ko
kernel/drivers/hid/uhid.ko
kernel/drivers/hid/hid-generic.ko
kernel/drivers/hid/hid-a4tech.ko
kernel/drivers/hid/hid-apple.ko
kernel/drivers/hid/hid-belkin.ko
kernel/drivers/hid/hid-cherry.ko
kernel/drivers/hid/hid-chicony.ko
kernel/drivers/hid/hid-cypress.ko
kernel/drivers/hid/hid-ezkey.ko
kernel/drivers/hid/hid-kensington.ko
kernel/drivers/hid/hid-logitech.ko
kernel/drivers/hid/hid-microsoft.ko
kernel/drivers/hid/hid-monterey.ko
kernel/drivers/hid/hid-multitouch.ko
kernel/drivers/hid/hid-sensor-hub.ko
kernel/drivers/hid/usbhid/usbhid.ko
kernel/drivers/hwmon/hwmon.ko
kernel/drivers/hwmon/coretemp.ko
kernel/drivers/hwmon/iio_hwmon.ko
kernel/drivers/i2c/i2c-core.ko
kernel/drivers/i2c/i2c-smbus.ko
kernel/drivers/i2c/i2c-dev.ko
kernel/drivers/i2c/i2c-mux.ko
kernel/drivers/i2c/algos/i2c-algo-bit.ko
kernel/drivers/i2c/busses/i2c-scmi.ko
kernel/drivers/i2c/busses/i2c-i801.ko
kernel/drivers/i2c/busses/i2c-isch.ko
kernel/drivers/i2c/busses/i2c-designware-core.ko
kernel/drivers/i2c/busses/i2c-designware-platform.ko
kernel/drivers/i2c/busses/i2c-designware-pci.ko
kernel/drivers/iio/industrialio.ko
kernel/drivers/iio/industrialio-triggered-buffer.ko
kernel/drivers/iio/kfifo_buf.ko
kernel/drivers/iio/accel/hid-sensor-accel-3d.ko
kernel/drivers/iio/accel/st_accel.ko
kernel/drivers/iio/accel/st_accel_i2c.ko
kernel/drivers/iio/accel/st_accel_spi.ko
kernel/drivers/iio/common/hid-sensors/hid-sensor-iio-common.ko
kernel/drivers/iio/common/hid-sensors/hid-sensor-trigger.ko
kernel/drivers/iio/common/st_sensors/st_sensors_i2c.ko
kernel/drivers/iio/common/st_sensors/st_sensors_spi.ko
kernel/drivers/iio/common/st_sensors/st_sensors.ko
kernel/drivers/iio/gyro/hid-sensor-gyro-3d.ko
kernel/drivers/iio/gyro/st_gyro.ko
kernel/drivers/iio/gyro/st_gyro_i2c.ko
kernel/drivers/iio/gyro/st_gyro_spi.ko
kernel/drivers/iio/light/acpi-als.ko
kernel/drivers/iio/light/hid-sensor-als.ko
kernel/drivers/iio/magnetometer/hid-sensor-magn-3d.ko
kernel/drivers/iio/magnetometer/st_magn.ko
kernel/drivers/iio/magnetometer/st_magn_i2c.ko
kernel/drivers/iio/magnetometer/st_magn_spi.ko
kernel/drivers/iio/orientation/hid-sensor-incl-3d.ko
kernel/drivers/iio/pressure/st_pressure.ko
kernel/drivers/iio/pressure/st_pressure_i2c.ko
kernel/drivers/iio/pressure/st_pressure_spi.ko
kernel/drivers/iio/trigger/iio-trig-interrupt.ko
kernel/drivers/iio/trigger/iio-trig-sysfs.ko
kernel/drivers/input/input-core.ko
kernel/drivers/input/ff-memless.ko
kernel/drivers/input/input-polldev.ko
kernel/drivers/input/sparse-keymap.ko
kernel/drivers/input/mousedev.ko
kernel/drivers/input/evdev.ko
kernel/drivers/input/keycombo.ko
kernel/drivers/input/keyboard/gpio_keys.ko
kernel/drivers/input/keyboard/acpi-gpiobtn.ko
kernel/drivers/input/keyboard/cypress-keyboard.ko
kernel/drivers/input/misc/keychord.ko
kernel/drivers/input/misc/uinput.ko
kernel/drivers/input/misc/soc_button_array.ko
kernel/drivers/input/misc/intel-mid-vibra.ko
kernel/drivers/input/touchscreen/gt9xx.ko
kernel/drivers/input/touchscreen/ft5x06_ts.ko
kernel/drivers/input/touchscreen/synaptics_dsx/synaptics.ko
kernel/drivers/input/serio/serio.ko
kernel/drivers/input/serio/serport.ko
kernel/drivers/input/serio/libps2.ko
kernel/drivers/leds/led-class.ko
kernel/drivers/md/dm-mod.ko
kernel/drivers/md/dm-bufio.ko
kernel/drivers/md/dm-crypt.ko
kernel/drivers/md/dm-snapshot.ko
kernel/drivers/md/dm-mirror.ko
kernel/drivers/md/dm-log.ko
kernel/drivers/md/dm-region-hash.ko
kernel/drivers/md/dm-zero.ko
kernel/drivers/md/dm-verity.ko
kernel/drivers/media/media.ko
kernel/drivers/media/usb/uvc/uvcvideo.ko
kernel/drivers/media/v4l2-core/videodev.ko
kernel/drivers/media/v4l2-core/v4l2-common.ko
kernel/drivers/media/v4l2-core/v4l2-dv-timings.ko
kernel/drivers/media/v4l2-core/videobuf2-core.ko
kernel/drivers/media/v4l2-core/videobuf2-memops.ko
kernel/drivers/media/v4l2-core/videobuf2-vmalloc.ko
kernel/drivers/mfd/mfd-core.ko
kernel/drivers/mfd/lpc_sch.ko
kernel/drivers/mfd/lpc_ich.ko
kernel/drivers/misc/vlv2_plat_clock.ko
kernel/drivers/misc/monza_x.ko
kernel/drivers/misc/mei/mei.ko
kernel/drivers/misc/mei/mei-me.ko
kernel/drivers/misc/mei/mei-txe.ko
kernel/drivers/misc/pwm/pwm_byt_core.ko
kernel/drivers/misc/pwm/pwm_byt_pci.ko
kernel/drivers/misc/pwm/pwm_byt_platdrv.ko
kernel/drivers/mmc/card/mmc_block.ko
kernel/drivers/mmc/core/mmc_core.ko
kernel/drivers/mmc/host/sdhci.ko
kernel/drivers/mmc/host/sdhci-pci.ko
kernel/drivers/mmc/host/sdhci-pci-data.ko
kernel/drivers/mmc/host/sdhci-pci-o2micro.ko
kernel/drivers/mmc/host/sdhci-acpi.ko
kernel/drivers/net/mii.ko
kernel/drivers/net/netconsole.ko
kernel/drivers/net/tun.ko
kernel/drivers/net/ethernet/8390/ne2k-pci.ko
kernel/drivers/net/ethernet/8390/8390.ko
kernel/drivers/net/ethernet/intel/e100.ko
kernel/drivers/net/ethernet/intel/e1000/e1000.ko
kernel/drivers/net/ethernet/intel/e1000e/e1000e.ko
kernel/drivers/net/ethernet/intel/igb/igb.ko
kernel/drivers/net/ethernet/intel/igbvf/igbvf.ko
kernel/drivers/net/ethernet/intel/ixgbevf/ixgbevf.ko
kernel/drivers/net/ethernet/nvidia/forcedeth.ko
kernel/drivers/net/ethernet/realtek/8139too.ko
kernel/drivers/net/ethernet/realtek/r8169.ko
kernel/drivers/net/phy/libphy.ko
kernel/drivers/net/ppp/ppp_generic.ko
kernel/drivers/net/ppp/bsd_comp.ko
kernel/drivers/net/ppp/ppp_deflate.ko
kernel/drivers/net/ppp/ppp_mppe.ko
kernel/drivers/net/ppp/pppox.ko
kernel/drivers/net/ppp/pppoe.ko
kernel/drivers/net/ppp/pppolac.ko
kernel/drivers/net/ppp/pppopns.ko
kernel/drivers/net/slip/slhc.ko
kernel/drivers/net/usb/catc.ko
kernel/drivers/net/usb/kaweth.ko
kernel/drivers/net/usb/pegasus.ko
kernel/drivers/net/usb/rtl8150.ko
kernel/drivers/net/usb/asix.ko
kernel/drivers/net/usb/ax88179_178a.ko
kernel/drivers/net/usb/cdc_ether.ko
kernel/drivers/net/usb/cdc_eem.ko
kernel/drivers/net/usb/dm9601.ko
kernel/drivers/net/usb/smsc75xx.ko
kernel/drivers/net/usb/smsc95xx.ko
kernel/drivers/net/usb/net1080.ko
kernel/drivers/net/usb/cdc_subset.ko
kernel/drivers/net/usb/zaurus.ko
kernel/drivers/net/usb/mcs7830.ko
kernel/drivers/net/usb/usbnet.ko
kernel/drivers/net/usb/ipheth.ko
kernel/drivers/net/usb/sierra_net.ko
kernel/drivers/net/usb/cdc_ncm.ko
kernel/drivers/platform/x86/intel-rst.ko
kernel/drivers/platform/x86/intel-gpio-hsic.ko
kernel/drivers/power/max17042_battery.ko
kernel/drivers/power/smb347-charger.ko
kernel/drivers/power/bq24192_charger.ko
kernel/drivers/powercap/intel_rapl.ko
kernel/drivers/pps/pps_core.ko
kernel/drivers/ptp/ptp.ko
kernel/drivers/pwm/pwm-lpss.ko
kernel/drivers/regulator/fixed.ko
kernel/drivers/regulator/gpio-regulator.ko
kernel/drivers/rtc/rtc-cmos.ko
kernel/drivers/scsi/scsi_mod.ko
kernel/drivers/scsi/scsi_transport_spi.ko
kernel/drivers/scsi/sd_mod.ko
kernel/drivers/scsi/sr_mod.ko
kernel/drivers/scsi/sg.ko
kernel/drivers/spi/spi-pxa2xx-platform.ko
kernel/drivers/spi/spi-pxa2xx-pci.ko
kernel/drivers/staging/android/logger.ko
kernel/drivers/staging/android/timed_gpio.ko
kernel/drivers/staging/android/efibc.ko
kernel/drivers/staging/modem_control/modem_control.ko
kernel/drivers/thermal/thermal_sys.ko
kernel/drivers/thermal/intel_powerclamp.ko
kernel/drivers/thermal/x86_pkg_temp_thermal.ko
kernel/drivers/thermal/intel_byt_dts_thermal.ko
kernel/drivers/tty/n_gsm.ko
kernel/drivers/tty/serial/serial_core.ko
kernel/drivers/tty/serial/8250/8250.ko
kernel/drivers/tty/serial/8250/8250_pci.ko
kernel/drivers/usb/usb-common.ko
kernel/drivers/usb/c67x00/c67x00.ko
kernel/drivers/usb/class/cdc-acm.ko
kernel/drivers/usb/core/usbcore.ko
kernel/drivers/usb/dwc3/dwc3.ko
kernel/drivers/usb/dwc3/dwc3-omap.ko
kernel/drivers/usb/dwc3/dwc3-pci.ko
kernel/drivers/usb/gadget/udc-core.ko
kernel/drivers/usb/gadget/libcomposite.ko
kernel/drivers/usb/gadget/usb_f_acm.ko
kernel/drivers/usb/gadget/u_serial.ko
kernel/drivers/usb/gadget/usb_f_mass_storage.ko
kernel/drivers/usb/gadget/usb_f_fs.ko
kernel/drivers/usb/host/ehci-hcd.ko
kernel/drivers/usb/host/ehci-pci.ko
kernel/drivers/usb/host/oxu210hp-hcd.ko
kernel/drivers/usb/host/isp116x-hcd.ko
kernel/drivers/usb/host/isp1362-hcd.ko
kernel/drivers/usb/host/ohci-hcd.ko
kernel/drivers/usb/host/uhci-hcd.ko
kernel/drivers/usb/host/xhci-hcd.ko
kernel/drivers/usb/host/sl811-hcd.ko
kernel/drivers/usb/host/r8a66597-hcd.ko
kernel/drivers/usb/host/isp1760.ko
kernel/drivers/usb/misc/ezusb.ko
kernel/drivers/usb/misc/ehset.ko
kernel/drivers/usb/mon/usbmon.ko
kernel/drivers/usb/phy/phy-fsm-usb.ko
kernel/drivers/usb/phy/phy-generic.ko
kernel/drivers/usb/serial/usbserial.ko
kernel/drivers/usb/serial/ark3116.ko
kernel/drivers/usb/serial/belkin_sa.ko
kernel/drivers/usb/serial/ch341.ko
kernel/drivers/usb/serial/cp210x.ko
kernel/drivers/usb/serial/digi_acceleport.ko
kernel/drivers/usb/serial/f81232.ko
kernel/drivers/usb/serial/ftdi_sio.ko
kernel/drivers/usb/serial/mct_u232.ko
kernel/drivers/usb/serial/mos7720.ko
kernel/drivers/usb/serial/mos7840.ko
kernel/drivers/usb/serial/option.ko
kernel/drivers/usb/serial/oti6858.ko
kernel/drivers/usb/serial/pl2303.ko
kernel/drivers/usb/serial/spcp8x5.ko
kernel/drivers/usb/serial/ssu100.ko
kernel/drivers/usb/serial/usb_wwan.ko
kernel/drivers/usb/serial/ti_usb_3410_5052.ko
kernel/drivers/usb/serial/whiteheat.ko
kernel/drivers/usb/serial/keyspan_pda.ko
kernel/drivers/usb/storage/usb-storage.ko
kernel/drivers/usb/storage/ums-realtek.ko
kernel/drivers/video/output.ko
kernel/drivers/video/adf/adf.ko
kernel/drivers/video/adf/adf_client.ko
kernel/drivers/video/adf/adf_fops.ko
kernel/drivers/video/adf/adf_format.ko
kernel/drivers/video/adf/adf_sysfs.ko
kernel/drivers/video/adf/adf_fbdev.ko
kernel/drivers/video/adf/adf_memblock.ko
kernel/drivers/video/backlight/backlight.ko
kernel/drivers/video/fbdev/core/fb.ko
kernel/drivers/video/fbdev/core/cfbfillrect.ko
kernel/drivers/video/fbdev/core/cfbcopyarea.ko
kernel/drivers/video/fbdev/core/cfbimgblt.ko
kernel/drivers/video/fbdev/core/sysfillrect.ko
kernel/drivers/video/fbdev/core/syscopyarea.ko
kernel/drivers/video/fbdev/core/sysimgblt.ko
kernel/drivers/watchdog/iTCO_wdt.ko
kernel/sound/soundcore.ko
kernel/sound/core/snd.ko
kernel/sound/core/snd-hwdep.ko
kernel/sound/core/snd-timer.ko
kernel/sound/core/snd-hrtimer.ko
kernel/sound/core/snd-pcm.ko
kernel/sound/core/snd-rawmidi.ko
kernel/sound/core/snd-compress.ko
kernel/sound/pci/hda/snd-hda-codec.ko
kernel/sound/pci/hda/snd-hda-codec-generic.ko
kernel/sound/pci/hda/snd-hda-codec-realtek.ko
kernel/sound/pci/hda/snd-hda-codec-cmedia.ko
kernel/sound/pci/hda/snd-hda-codec-analog.ko
kernel/sound/pci/hda/snd-hda-codec-idt.ko
kernel/sound/pci/hda/snd-hda-codec-si3054.ko
kernel/sound/pci/hda/snd-hda-codec-cirrus.ko
kernel/sound/pci/hda/snd-hda-codec-ca0110.ko
kernel/sound/pci/hda/snd-hda-codec-ca0132.ko
kernel/sound/pci/hda/snd-hda-codec-conexant.ko
kernel/sound/pci/hda/snd-hda-codec-via.ko
kernel/sound/pci/hda/snd-hda-codec-hdmi.ko
kernel/sound/pci/hda/snd-hda-intel.ko
kernel/sound/soc/snd-soc-core.ko
kernel/sound/soc/codecs/snd-soc-rt56xx.ko
kernel/sound/soc/codecs/snd-soc-rt5640.ko
kernel/sound/soc/codecs/snd-soc-rt5651.ko
kernel/sound/soc/codecs/snd-soc-rt5672.ko
kernel/sound/soc/dwc/designware_i2s.ko
kernel/sound/soc/intel/snd-soc-sst-platform.ko
kernel/sound/soc/intel/board/snd-byt-cr-dpcm-rt5640.ko
kernel/sound/soc/intel/board/byt_cr_board_configs.ko
kernel/sound/soc/intel/board/snd-byt-cr-dpcm-rt5651.ko
kernel/sound/soc/intel/board/snd-cht-dpcm-rt5672.ko
kernel/sound/soc/intel/sst/snd-intel-sst.ko
kernel/sound/usb/snd-usb-audio.ko
kernel/sound/usb/snd-usbmidi-lib.ko
kernel/arch/x86/video/fbdev.ko
kernel/net/dns_resolver/dns_resolver.ko
kernel/net/ipv4/ip_tunnel.ko
kernel/net/ipv4/esp4.ko
kernel/net/ipv4/inet_lro.ko
kernel/net/ipv4/tunnel4.ko
kernel/net/ipv4/xfrm4_mode_transport.ko
kernel/net/ipv4/tcp_cubic.ko
kernel/net/ipv4/netfilter/nf_conntrack_ipv4.ko
kernel/net/ipv4/netfilter/nf_nat_ipv4.ko
kernel/net/ipv4/netfilter/nf_defrag_ipv4.ko
kernel/net/ipv4/netfilter/nf_nat_pptp.ko
kernel/net/ipv4/netfilter/nf_nat_proto_gre.ko
kernel/net/ipv4/netfilter/ip_tables.ko
kernel/net/ipv4/netfilter/iptable_filter.ko
kernel/net/ipv4/netfilter/iptable_mangle.ko
kernel/net/ipv4/netfilter/iptable_nat.ko
kernel/net/ipv4/netfilter/ipt_MASQUERADE.ko
kernel/net/ipv4/netfilter/ipt_REJECT.ko
kernel/net/ipv4/netfilter/ipt_ULOG.ko
kernel/net/ipv6/ipv6.ko
kernel/net/ipv6/ah6.ko
kernel/net/ipv6/esp6.ko
kernel/net/ipv6/xfrm6_mode_transport.ko
kernel/net/ipv6/xfrm6_mode_tunnel.ko
kernel/net/ipv6/xfrm6_mode_beet.ko
kernel/net/ipv6/sit.ko
kernel/net/ipv6/inet6_hashtables.ko
kernel/net/ipv6/netfilter/ip6_tables.ko
kernel/net/ipv6/netfilter/ip6table_filter.ko
kernel/net/ipv6/netfilter/ip6table_mangle.ko
kernel/net/ipv6/netfilter/ip6table_nat.ko
kernel/net/ipv6/netfilter/nf_conntrack_ipv6.ko
kernel/net/ipv6/netfilter/nf_nat_ipv6.ko
kernel/net/ipv6/netfilter/nf_defrag_ipv6.ko
kernel/net/ipv6/netfilter/ip6t_ipv6header.ko
kernel/net/ipv6/netfilter/ip6t_MASQUERADE.ko
kernel/net/ipv6/netfilter/ip6t_REJECT.ko
kernel/net/key/af_key.ko
kernel/net/l2tp/l2tp_core.ko
kernel/net/l2tp/l2tp_ppp.ko
kernel/net/netfilter/nfnetlink.ko
kernel/net/netfilter/nfnetlink_log.ko
kernel/net/netfilter/nf_conntrack.ko
kernel/net/netfilter/nf_conntrack_proto_gre.ko
kernel/net/netfilter/nf_conntrack_netlink.ko
kernel/net/netfilter/nf_conntrack_ftp.ko
kernel/net/netfilter/nf_conntrack_irc.ko
kernel/net/netfilter/nf_conntrack_pptp.ko
kernel/net/netfilter/nf_conntrack_sip.ko
kernel/net/netfilter/nf_nat.ko
kernel/net/netfilter/nf_nat_ftp.ko
kernel/net/netfilter/nf_nat_irc.ko
kernel/net/netfilter/nf_nat_sip.ko
kernel/net/netfilter/x_tables.ko
kernel/net/netfilter/xt_tcpudp.ko
kernel/net/netfilter/xt_mark.ko
kernel/net/netfilter/xt_nat.ko
kernel/net/netfilter/xt_CONNSECMARK.ko
kernel/net/netfilter/xt_NFLOG.ko
kernel/net/netfilter/xt_SECMARK.ko
kernel/net/netfilter/xt_TCPMSS.ko
kernel/net/netfilter/xt_IDLETIMER.ko
kernel/net/netfilter/xt_conntrack.ko
kernel/net/netfilter/xt_l2tp.ko
kernel/net/netfilter/xt_policy.ko
kernel/net/netfilter/xt_quota2.ko
kernel/net/netfilter/xt_socket.ko
kernel/net/netfilter/xt_state.ko
kernel/net/packet/af_packet.ko
kernel/net/rfkill/rfkill.ko
kernel/net/sched/sch_fq.ko
kernel/net/unix/unix.ko
kernel/net/xfrm/xfrm_algo.ko
kernel/net/xfrm/xfrm_user.ko
kernel/lib/bitrev.ko
kernel/lib/crc-ccitt.ko
kernel/lib/crc16.ko
kernel/lib/crc-t10dif.ko
kernel/lib/crc-itu-t.ko
kernel/lib/crc32.ko
kernel/lib/libcrc32c.ko
kernel/lib/asn1_decoder.ko
kernel/lib/oid_registry.ko
kernel/lib/ucs2_string.ko
kernel/lib/fonts/font.ko
kernel/lib/lz4/lz4_compress.ko
kernel/lib/lz4/lz4hc_compress.ko
kernel/lib/lz4/lz4_decompress.ko
kernel/lib/lzo/lzo_compress.ko
kernel/lib/lzo/lzo_decompress.ko
kernel/lib/mpi/mpi.ko
kernel/lib/raid6/raid6_pq.ko
kernel/lib/xz/xz_dec.ko
kernel/lib/zlib_deflate/zlib_deflate.ko
kernel/lib/zlib_inflate/zlib_inflate.ko

# Modules ls


3.14.33-quilt-5152b223
6lowpan_iphc.ko
8139cp.ko
8250_dw.ko
8723bs.ko
acerhdf.ko
ak09911.ko
ak8975.ko
apple-gmux.ko
asus-laptop.ko
asus-nb-wmi.ko
asus-wmi.ko
ath10k_core.ko
ath10k_pci.ko
ath3k.ko
ath6kl_core.ko
ath6kl_sdio.ko
ath6kl_usb.ko
ath9k_common.ko
ath9k_hw.ko
ath9k.ko
ath.ko
atmel_mxt_ts.ko
atomisp-css2400b0_v21.ko
atomisp-css2401a0_v21.ko
bcache.ko
bcma.ko
bcmdhd.ko
bcmdhd_pcie.ko
bd6107.ko
bluetooth.ko
bma180.ko
bmc150-accel.ko
bmg160.ko
bmm050.ko
bnep.ko
btusb.ko
cdc-wdm.ko
cfg80211.ko
classmate-laptop.ko
cm32181.ko
cm3232.ko
cm36651.ko
compal-laptop.ko
compat.ko
cordic.ko
crc8.ko
cw1200_core.ko
cw1200_wlan_sdio.ko
cw1200_wlan_spi.ko
cyttsp4_core.ko
cyttsp4_i2c.ko
cyttsp4_spi.ko
cyttsp_i2c_common.ko
dell-wmi.ko
dw9714.ko
eeepc-laptop.ko
eeepc-wmi.ko
eeprom_93cx6.ko
fdp_nfc.ko
fotg210-hcd.ko
fujitsu-laptop.ko
fujitsu-tablet.ko
fusbh200-hcd.ko
gc0310.ko
gc2155.ko
gc2235.ko
gdmtty.ko
gdmulte.ko
generic-adc-battery.ko
generic_bl.ko
gpio_backlight.ko
gspca_main.ko
gspca_stk1135.ko
hci_uart.ko
hdaps.ko
hid-elo.ko
hid-huion.ko
hid-magicmouse.ko
hid-ntrig.ko
hidp.ko
hid-xinmo.ko
hp_accel.ko
htu21.ko
huawei_cdc_ncm.ko
i2c-hid.ko
i40e.ko
i8k.ko
imx1x5.ko
intel_ips.ko
intel-smartconnect.ko
inv-mpu6050.ko
ip6table_raw.ko
iptable_raw.ko
isofs.ko
isp1704_charger.ko
iwl-cfg80211.ko
iwl-mac80211.ko
iwlmvm.ko
iwlwifi.ko
iwlxvt.ko
jsa1127.ko
jsa1212.ko
kxcjk-1013.ko
lcd.ko
lib80211.ko
libertas_tf.ko
libertas_tf_usb.ko
libmsrlisthelper.ko
lis3lv02d.ko
lm3554.ko
lm3630a_bl.ko
lnp_ldisc.ko
lv5207lp.ko
mac80211.ko
mcp320x.ko
mdio-bitbang.ko
michael_mic.ko
modules.alias
modules.alias.bin
modules.builtin
modules.builtin.bin
modules.dep
modules.dep.bin
modules.devname
modules.order
modules.softdep
modules.symbols
modules.symbols.bin
mt9m114.ko
mwifiex.ko
mwifiex_pcie.ko
mwifiex_sdio.ko
mwifiex_usb.ko
mwl8k.ko
mxm-wmi.ko
nau7802.ko
nlmon.ko
ov2680.ko
ov2722.ko
ov5648.ko
ov5693.ko
panasonic-laptop.ko
pax.ko
platform_lcd.ko
pn544_nfc.ko
r6040.ko
r8187se.ko
r8188eu.ko
r8192e_pci.ko
r8192u_usb.ko
r8712u.ko
rfcomm.ko
rfkill-gpio.ko
rtl8180.ko
rtl8187.ko
rtl8188ee.ko
rtl8192c-common.ko
rtl8192ce.ko
rtl8192cu.ko
rtl8192de.ko
rtl8192se.ko
rtl8723ae.ko
rtllib_crypt_ccmp.ko
rtllib_crypt_tkip.ko
rtllib_crypt_wep.ko
rtllib.ko
rtl_pci.ko
rtl_usb.ko
rtlwifi.ko
samsung-laptop.ko
samsung-q10.ko
sch5627.ko
sch5636.ko
sch56xx-common.ko
sep3_16.ko
sh_eth.ko
smsc911x.ko
snd-dummy.ko
snd-mixer-oss.ko
snd-pcm-oss.ko
snd-seq-device.ko
snd-seq.ko
snd-seq-midi-event.ko
snd-seq-midi.ko
snd-soc-simple-card.ko
snd-usb-hiface.ko
socperf1_2.ko
SOCWATCH1_5.ko
sony-laptop.ko
sr9700.ko
sur40.ko
thinkpad_acpi.ko
tmp006.ko
topstar-laptop.ko
toshiba_acpi.ko
toshiba_bluetooth.ko
tpm_atmel.ko
tpm_i2c_atmel.ko
tpm_i2c_infineon.ko
tpm_i2c_nuvoton.ko
tpm_infineon.ko
tpm.ko
tpm_nsc.ko
tpm-rng.ko
tpm_tis.ko
udf.ko
usblp.ko
usbtv.ko
ushc.ko
videobuf-core.ko
videobuf-vmalloc.ko
vub300.ko
wacom.ko
wbsd.ko
wcn36xx.ko
wmi.ko
xt_AUDIT.ko
zforce_ts.ko

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
snd                    57344  11 snd_usb_audio,snd_hwdep,snd_timer,snd_hda_codec_hdmi,snd_pcm,snd_seq,snd_rawmidi,snd_usbmidi_lib,snd_hda_codec,snd_hda_intel,snd_seq_device
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

