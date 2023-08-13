#ifndef __MYOS__SYSCALLS_H
#define __MYOS__SYSCALLS_H

#include <common/types.h>
#include <hardwarecomu/interrupts.h>
#include <multitasking.h>

namespace myos
{
    class SyscallHandler : public hardwarecomu::InterruptHandler
    {
    public:
        SyscallHandler(hardwarecomu::InterruptManager* interruptManager, common::uint8_t interruptNumber);
        ~SyscallHandler();

        virtual common::uint32_t HandleInterrupt(common::uint32_t esp);
    };
}

#endif