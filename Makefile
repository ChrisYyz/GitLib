GPPPARAMS = -m32 -Iinclude -fno-use-cxa-atexit -nostdlib -fno-builtin -fno-rtti -fno-exceptions -fno-leading-underscore -Wno-write-strings -fno-pie
ASPARAMS = --32
LDPARAMS = -melf_i386 -no-pie

objects = obj/loader.o \
		  obj/gdt.o \
		  obj/memorymanagement.o \
		  obj/drivers/driver.o \
		  obj/hardwarecomu/port.o \
		  obj/hardwarecomu/interruptstubs.o \
		  obj/hardwarecomu/interrupts.o \
		  obj/syscalls.o \
		  obj/drivers/amd_am79c973.o \
		  obj/hardwarecomu/pci.o \
		  obj/drivers/keyboard.o \
		  obj/drivers/mouse.o \
		  obj/drivers/vga.o \
		  obj/drivers/ata.o \
		  obj/gui/widget.o \
		  obj/gui/window.o \
		  obj/gui/desktop.o \
		  obj/multitasking.o \
		  obj/net/etherframe.o \
		  obj/net/arp.o \
		  obj/net/ipv4.o \
		  obj/net/icmp.o \
		  obj/net/udp.o \
		  obj/net/tcp.o \
		  obj/kernel.o 

run: mykernel.iso
	(killall virtualboxvm && sleep 1) || true
	virtualboxvm --startvm 'My Operating System'&

obj/%.o: src/%.cpp
	mkdir -p $(@D)
	g++ $(GPPPARAMS) -o $@ -c $<

obj/%.o: src/%.s
	mkdir -p $(@D)
	as $(ASPARAMS) -o $@ $<

mykernel.bin: linker.ld $(objects)
	ld $(LDPARAMS) -T $< -o $@ $(objects)

mykernel.iso: mykernel.bin
	mkdir iso
	mkdir iso/boot
	mkdir iso/boot/grub
	cp $< iso/boot/
	echo 'set timeout=0' 						 > iso/boot/grub/grub.cfg
	echo 'set default=0' 						>> iso/boot/grub/grub.cfg
	echo '' 									>> iso/boot/grub/grub.cfg
	echo 'menuentry "My Operating System" { ' 	>> iso/boot/grub/grub.cfg
	echo '	multiboot /boot/mykernel.bin' 		>> iso/boot/grub/grub.cfg
	echo '	boot' 								>> iso/boot/grub/grub.cfg
	echo '}' 									>> iso/boot/grub/grub.cfg
	grub-mkrescue --output=$@ iso
	rm -rf iso

install:mykernel.bin
	sudo cp $< /boot/mykernel.bin

.PHONY: clean
clean:
	rm -rf obj mykernel.bin mykernel.iso

