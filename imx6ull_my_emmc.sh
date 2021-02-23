#! /bin/sh

#make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- distclean
make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- imx_my_emmc_defconfig
make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- -j12

