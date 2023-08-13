#ifndef __MYOS__DRIVERS__ATA_H
#define __MYOS__DRIVERS__ATA_H

#include <common/types.h>
#include <hardwarecomu/port.h>
#include <hardwarecomu/interrupts.h>


namespace myos
{
    namespace drivers
    {
        class AdvancedTechnologyAttachment
        {
        protected:
            hardwarecomu::Port16Bit dataPort;
            hardwarecomu::Port16Bit errorPort;
            hardwarecomu::Port16Bit sectorCountPort;
            hardwarecomu::Port16Bit lbaLowPort;
            hardwarecomu::Port16Bit lbaMidPort;
            hardwarecomu::Port16Bit lbaHiPort;
            hardwarecomu::Port16Bit devicePort;
            hardwarecomu::Port16Bit commandPort;
            hardwarecomu::Port16Bit controlPort;
            bool master;
            common::uint16_t bytesPerSector;
        public:
            AdvancedTechnologyAttachment(common::uint16_t portBase, bool master);
            ~AdvancedTechnologyAttachment();

            void Identify();
            void Read28(common::uint32_t sector, common::uint8_t* data, int count);
            void Write28(common::uint32_t sector, common::uint8_t* data, int count);
            void Flush();
        };
    }
}








#endif