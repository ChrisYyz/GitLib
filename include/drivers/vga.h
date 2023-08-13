#ifndef __MYOS__DRIVERS__VGA_H
#define __MYOS__DRIVERS__VGA_H

#include <common/types.h>
#include <hardwarecomu/port.h>
#include <drivers/driver.h>

namespace myos{
    namespace drivers{
        class VideoGraphicsArray{
        protected:
            myos::hardwarecomu::Port8Bit miscPort;
            myos::hardwarecomu::Port8Bit crtcIndexPort;
            myos::hardwarecomu::Port8Bit crtcDataPort;
            myos::hardwarecomu::Port8Bit sequencerIndexPort;
            myos::hardwarecomu::Port8Bit sequencerDataPort;
            myos::hardwarecomu::Port8Bit graphicsControllerIndexPort;
            myos::hardwarecomu::Port8Bit graphicsControllerDataPort;
            myos::hardwarecomu::Port8Bit attributeControllerIndexPort;
            myos::hardwarecomu::Port8Bit attributeControllerReadPort;
            myos::hardwarecomu::Port8Bit attributeControllerWritePort;
            myos::hardwarecomu::Port8Bit attributeControllerResetPort;

            void WriteRegisters(myos::common::uint8_t* registers);
            myos::common::uint8_t* GetFrameBufferSegment();

            virtual myos::common::uint8_t GetColorIndex(myos::common::uint8_t r, myos::common::uint8_t g, myos::common::uint8_t b);

        public:
            VideoGraphicsArray();
            ~VideoGraphicsArray();

            virtual bool SetMode(myos::common::uint32_t width, myos::common::uint32_t height, myos::common::uint32_t colordepth);
            virtual bool SupportsMode(myos::common::uint32_t width, myos::common::uint32_t height, myos::common::uint32_t colordepth);
            virtual void PutPixel(myos::common::int32_t x, myos::common::int32_t y, myos::common::uint8_t r, myos::common::uint8_t g, myos::common::uint8_t b);
            virtual void PutPixel(myos::common::int32_t x, myos::common::int32_t y, myos::common::uint8_t colorIndex);
            virtual void FillRectangle(myos::common::uint32_t x, myos::common::uint32_t y, myos::common::uint32_t w, myos::common::uint32_t h, myos::common::uint8_t r,myos::common::uint8_t g, myos::common::uint8_t b);
        };

    }
}



#endif