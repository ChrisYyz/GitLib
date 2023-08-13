#include <syscalls.h>

using namespace myos;
using namespace myos::common;
using namespace myos::hardwarecomu;

SyscallHandler::SyscallHandler(InterruptManager* interruptManager, uint8_t interruptNumber)
: InterruptHandler(interruptManager, interruptNumber+ interruptManager->HardwareInterruptOffset())
{

}
SyscallHandler::~SyscallHandler()
{

}

void printf(char*);

uint32_t SyscallHandler::HandleInterrupt(uint32_t esp)
{
    CPUState* cpu = (CPUState*)esp;

    switch(cpu->eax)
    {
        case 4:
        {
            printf((char*)cpu->ebx);
            break;
        }

        default:
        {
            break;
        }
    }

    return esp;
}