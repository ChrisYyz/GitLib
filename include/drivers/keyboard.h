#ifndef __MYOS__DRIVERS__KEYBOARD_H
#define __MYOS__DRIVERS__KEYBOARD_H

#include <common/types.h>
#include <hardwarecomu/interrupts.h>
#include <hardwarecomu/port.h>
#include <drivers/driver.h>
namespace myos
{    
    namespace drivers
    {
        class KeyboardEventHandler{
        public:
            KeyboardEventHandler();

            virtual void OnKeyDown(char);
            virtual void OnKeyUp(char);
        };


        class KeyboardDriver : public myos::hardwarecomu::InterruptHandler, public Driver{
            myos::hardwarecomu::Port8Bit dataport;
            myos::hardwarecomu::Port8Bit commandport;

            KeyboardEventHandler* handler;
        public:
            KeyboardDriver(myos::hardwarecomu::InterruptManager* manager, KeyboardEventHandler* handler);
            ~KeyboardDriver();
            virtual myos::common::uint32_t HandleInterrupt(myos::common::uint32_t esp);
            virtual void Activate();
        };
    }
}

#endif