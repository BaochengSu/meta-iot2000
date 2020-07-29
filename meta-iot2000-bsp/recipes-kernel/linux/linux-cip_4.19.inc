LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"

FILESEXTRAPATHS_prepend := "${THISDIR}/configs:${THISDIR}/patches:"

LINUX_VERSION = "4.19.134-cip31"
SRC_URI = " \
    https://git.kernel.org/pub/scm/linux/kernel/git/cip/linux-cip.git/snapshot/linux-cip-${LINUX_VERSION}.tar.gz \
    file://defconfig \
    ${KERNEL_PATCHES}"
SRC_URI[sha256sum] = "9cac1f097680ee405e3964239bc4deb7e8b9977aec3150dbd94de073e01750d8"

KERNEL_PATCHES = " \
    file://0001-serial-8250_exar-Adjust-IOT2000-matching.patch \
    file://0002-mfd-intel_quark_i2c_gpio-Adjust-IOT2000-matching.patch \
    file://0003-gpio-sch-Add-interrupt-support.patch \
    file://0004-iot2000-hack-Work-around-DSDT-mistake.patch \
    file://0005-iot2000-hack-Adjust-pca9685-gpio-base-for-legacy-com.patch \
    file://0006-iot2000-hack-gpio-pca953x-provide-GPIO-base-based-on.patch \
    file://0007-iot2000-hack-gpio-pca953x-add-drive-property.patch \
    file://0008-iot2000-hack-pwm-pca-9685-Provide-chip-level-pwm_per.patch \
    file://0009-random-only-read-from-dev-random-after-its-pool-has-.patch \
    file://0010-random-fix-soft-lockup-when-trying-to-read-from-an-u.patch"

S = "${WORKDIR}/linux-cip-${LINUX_VERSION}"
