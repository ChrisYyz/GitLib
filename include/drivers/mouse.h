#ifndef __MYOS__DRIVERS__MOUSE_H
#define __MYOS__DRIVERS__MOUSE_H

#include <common/types.h>
#include <hardwarecomu/interrupts.h>
#include <hardwarecomu/port.h>
#include <drivers/driver.h>

namespace myos
{
    namespace drivers
    {
        class MouseEventHandler{
        public:
            MouseEventHandler();
            virtual void OnActivate();
            virtual void OnMouseDown(myos::common::uint8_t button);
            virtual void OnMouseUp(myos::common::uint8_t button);
            virtual void OnMouseMove(int x, int y);
        };

        class MouseDriver : public myos::hardwarecomu::InterruptHandler,public Driver{
            myos::hardwarecomu::Port8Bit dataport;
            myos::hardwarecomu::Port8Bit commandport;

            myos::common::uint8_t buffer[3];
            myos::common::uint8_t offset;
            myos::common::uint8_t buttons;

            MouseEventHandler* handler;
        public:
            MouseDriver(myos::hardwarecomu::InterruptManager* manager, MouseEventHandler* handler);
            ~MouseDriver();
            virtual myos::common::uint32_t HandleInterrupt(myos::common::uint32_t esp);
            virtual void Activate();
        };
    }
}
#endif