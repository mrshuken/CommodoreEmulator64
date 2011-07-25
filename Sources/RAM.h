#ifndef RAM_H
#define RAM_H

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

         const byte &DataDirection() const
         {
            return memory_[ 0 ];
         }

         const byte DataDirection() const
         {
            return memory_[ 0 ];
         }

         const byte &Port() const
         {
            return memory_[ 1 ];
         }

         const byte Port() const
         {
            return memory_[ 1 ];
         }

         const byte *RegsFrom6510() const
         {
            return memory_.begin(); // return the vector's starting address
         }

         const byte *OsReservedMemory() const
         {
            return ( memory_ + 2 );
         }

         const byte *ScreenMemory() const
         {
            return ( memory_ + 1024 );
         }

         const byte *Animations() const
         {
            return ( memory_ + 2040 );
         }

         const byte *UserProgramMemory() const
         {
            return ( memory_ + 2048 );
         }

         const  byte *BasicInterpreter() const
         {
            return ( memory_ + 40960 );
         }

         const byte *VicIIregs() const
         {
            return ( memory_ + 53248 );
         }

         const byte *ColorRam() const
         {
            return ( memory_ + 55296 );
         }

         const byte *IOregs() const
         {
            return ( memory_ + 56320 );
         }

         const byte *OsKernel() const
         {
            return ( memory_ + 57344 );
         }

         const byte at( std::size_t offset ) const
         {
            return memory_[ offset ];
         }

      private:

         Utils::StaticVector< byte, RamSize > memory_;

      };

   }

}

#endif /*RAM_H*/