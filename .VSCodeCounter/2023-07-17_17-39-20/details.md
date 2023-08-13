# Details

Date : 2023-07-17 17:39:20

Directory d:\\STUDY\\MyOS\\FileFromVM\\MILESTONE_FINAL\\MyOS

Total : 48 files,  3858 codes, 67 comments, 841 blanks, all 4766 lines

[Summary](results.md) / Details / [Diff Summary](diff.md) / [Diff Details](diff-details.md)

## Files
| filename | language | code | comment | blank | total |
| :--- | :--- | ---: | ---: | ---: | ---: |
| [Makefile](/Makefile) | Makefile | 58 | 0 | 10 | 68 |
| [include/common/graphicscontext.h](/include/common/graphicscontext.h) | C++ | 9 | 0 | 2 | 11 |
| [include/common/types.h](/include/common/types.h) | C++ | 17 | 0 | 4 | 21 |
| [include/drivers/amd_am79c973.h](/include/drivers/amd_am79c973.h) | C++ | 77 | 0 | 20 | 97 |
| [include/drivers/ata.h](/include/drivers/ata.h) | C++ | 34 | 0 | 12 | 46 |
| [include/drivers/driver.h](/include/drivers/driver.h) | C++ | 25 | 0 | 5 | 30 |
| [include/drivers/keyboard.h](/include/drivers/keyboard.h) | C++ | 29 | 0 | 6 | 35 |
| [include/drivers/mouse.h](/include/drivers/mouse.h) | C++ | 34 | 0 | 5 | 39 |
| [include/drivers/vga.h](/include/drivers/vga.h) | C++ | 35 | 0 | 10 | 45 |
| [include/gdt.h](/include/gdt.h) | C++ | 35 | 0 | 11 | 46 |
| [include/gui/desktop.h](/include/gui/desktop.h) | C++ | 21 | 0 | 5 | 26 |
| [include/gui/widget.h](/include/gui/widget.h) | C++ | 53 | 0 | 17 | 70 |
| [include/gui/window.h](/include/gui/window.h) | C++ | 22 | 0 | 4 | 26 |
| [include/hardwarecomu/interrupts.h](/include/hardwarecomu/interrupts.h) | C++ | 101 | 0 | 20 | 121 |
| [include/hardwarecomu/pci.h](/include/hardwarecomu/pci.h) | C++ | 59 | 1 | 18 | 78 |
| [include/hardwarecomu/port.h](/include/hardwarecomu/port.h) | C++ | 41 | 0 | 6 | 47 |
| [include/memorymanagement.h](/include/memorymanagement.h) | C++ | 31 | 1 | 11 | 43 |
| [include/multitasking.h](/include/multitasking.h) | C++ | 46 | 6 | 8 | 60 |
| [include/net/arp.h](/include/net/arp.h) | C++ | 37 | 0 | 10 | 47 |
| [include/net/etherframe.h](/include/net/etherframe.h) | C++ | 45 | 0 | 12 | 57 |
| [include/net/icmp.h](/include/net/icmp.h) | C++ | 27 | 0 | 8 | 35 |
| [include/net/ipv4.h](/include/net/ipv4.h) | C++ | 55 | 0 | 14 | 69 |
| [include/net/tcp.h](/include/net/tcp.h) | C++ | 104 | 1 | 26 | 131 |
| [include/net/udp.h](/include/net/udp.h) | C++ | 63 | 0 | 13 | 76 |
| [include/syscalls.h](/include/syscalls.h) | C++ | 16 | 0 | 4 | 20 |
| [src/drivers/amd_am79c973.cpp](/src/drivers/amd_am79c973.cpp) | C++ | 207 | 5 | 40 | 252 |
| [src/drivers/ata.cpp](/src/drivers/ata.cpp) | C++ | 158 | 0 | 27 | 185 |
| [src/drivers/driver.cpp](/src/drivers/driver.cpp) | C++ | 27 | 0 | 10 | 37 |
| [src/drivers/keyboard.cpp](/src/drivers/keyboard.cpp) | C++ | 312 | 0 | 15 | 327 |
| [src/drivers/mouse.cpp](/src/drivers/mouse.cpp) | C++ | 63 | 0 | 22 | 85 |
| [src/drivers/vga.cpp](/src/drivers/vga.cpp) | C++ | 123 | 10 | 20 | 153 |
| [src/gdt.cpp](/src/gdt.cpp) | C++ | 73 | 4 | 18 | 95 |
| [src/gui/desktop.cpp](/src/gui/desktop.cpp) | C++ | 39 | 2 | 12 | 53 |
| [src/gui/widget.cpp](/src/gui/widget.cpp) | C++ | 127 | 0 | 23 | 150 |
| [src/gui/window.cpp](/src/gui/window.cpp) | C++ | 30 | 0 | 3 | 33 |
| [src/hardwarecomu/interrupts.cpp](/src/hardwarecomu/interrupts.cpp) | C++ | 151 | 0 | 36 | 187 |
| [src/hardwarecomu/pci.cpp](/src/hardwarecomu/pci.cpp) | C++ | 163 | 0 | 60 | 223 |
| [src/hardwarecomu/port.cpp](/src/hardwarecomu/port.cpp) | C++ | 51 | 0 | 16 | 67 |
| [src/kernel.cpp](/src/kernel.cpp) | C++ | 249 | 26 | 60 | 335 |
| [src/memorymanagement.cpp](/src/memorymanagement.cpp) | C++ | 121 | 0 | 29 | 150 |
| [src/multitasking.cpp](/src/multitasking.cpp) | C++ | 53 | 9 | 14 | 76 |
| [src/net/arp.cpp](/src/net/arp.cpp) | C++ | 106 | 0 | 17 | 123 |
| [src/net/etherframe.cpp](/src/net/etherframe.cpp) | C++ | 88 | 0 | 20 | 108 |
| [src/net/icmp.cpp](/src/net/icmp.cpp) | C++ | 50 | 0 | 8 | 58 |
| [src/net/ipv4.cpp](/src/net/ipv4.cpp) | C++ | 120 | 0 | 27 | 147 |
| [src/net/tcp.cpp](/src/net/tcp.cpp) | C++ | 295 | 2 | 61 | 358 |
| [src/net/udp.cpp](/src/net/udp.cpp) | C++ | 149 | 0 | 33 | 182 |
| [src/syscalls.cpp](/src/syscalls.cpp) | C++ | 29 | 0 | 9 | 38 |

[Summary](results.md) / Details / [Diff Summary](diff.md) / [Diff Details](diff-details.md)