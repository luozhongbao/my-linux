cmd_drivers/char/built-in.o :=  arm-linux-gnueabihf-ld -EL    -r -o drivers/char/built-in.o drivers/char/mem.o drivers/char/random.o drivers/char/misc.o drivers/char/hw_random/built-in.o drivers/char/agp/built-in.o drivers/char/imx_amp/built-in.o 
