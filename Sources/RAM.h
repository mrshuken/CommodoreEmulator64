#ifndef COMMODOREEMULATOR64_RAM_H
#define COMMODOREEMULATOR64_RAM_H

#include "StaticVector.h"

namespace Commodore64
{

   typedef unsigned char byte;

   namespace Hardware
   {

      const std::size_t RamSize = 65536; // 64 Kb

      class Ram
      {

      public:

         byte &DataDirection()
         {
            return memory_[ 0 ];
         }

         byte DataDirection() const
         {
            return memory_[ 0 ];
         }

         byte &Port()
         {
            return memory_[ 1 ];
         }

         byte Port() const
         {
            return memory_[ 1 ];
         }

         byte *RegsFrom6510()
         {
            return memory_.begin(); // return the vector's starting address
         }

         byte *OsReservedMemory()
         {
            return ( memory_ + 2 );
         }

         byte *ScreenMemory()
         {
            return ( memory_ + 1024 );
         }

         byte *Animations()
         {
            return ( memory_ + 2040 );
         }

         byte *UserProgramMemory()
         {
            return ( memory_ + 2048 );
         }

         byte *BasicInterpreter()
         {
            return ( memory_ + 40960 );
         }

         byte *VicIIregs()
         {
            return ( memory_ + 53248 );
         }

         byte *ColorRam()
         {
            return ( memory_ + 55296 );
         }

         byte *IOregs()
         {
            return ( memory_ + 56320 );
         }

         byte *OsKernel()
         {
            return ( memory_ + 57344 );
         }

         byte at( std::size_t offset )
         {
            return memory_[ offset ];
         }

      private:

         Utils::StaticVector< byte, RamSize > memory_;

      };

   }

}

#endif /*COMMODOREEMULATOR64_RAM_H*/