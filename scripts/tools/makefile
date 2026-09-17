KERNEL_SRC = $(wildcard kernel/**/*.c)
LD = x86_64-elf-ld
CFLAGS = -ffreestanding -O2 -Wall -Wextra
LDFLAGS = -T linker.ld

KERNEL_SRC = $(wildcard kernel/**/*.c)
KERNEL_OBJ = $(KERNEL_SRC:.c=.o)

all: build/kernel.bin

build/kernel.bin: $(KERNEL_OBJ)
    mkdir -p build
    $(LD) $(LDFLAGS) -o build/kernel.bin $(KERNEL_OBJ)

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -rf build
    find kernel -name "*.o" -delete

run: all
    qemu-system-x86_64 -kernel build/kernel.bin
