#ifndef RAM_H
#define RAM_H

#include "StaticVector.h"

namespace Commodore64
{

   namespace Hardware
   {

      const std::size_t RamSize = 65536; // 64 Kb

      
      class Ram
      {
          typedef unsigned char byte;

      public:
         // this enum should be moved elsewhere
         enum RamLocation
         {
            DataDirection = 0,
            Port = 1,
            ReservedMemory = 2,
            ScreenMemory = 1024,
            Animations = 2040,
            UserProgramMemory = 2048,
            BasicInterpreter = 40960,
            VicIIregs = 53248,
            ColorRam = 55296,
            IOregs = 56320,
            OsKernel = 57344
         };

         byte* at( unsigned short location )
         {
            assert( location >= 0 && location < RamSize );
            return ( memory_ + location );
         }

      private:

         Utils::StaticVector< byte, RamSize > memory_;
         
      };

   
      
   }
}

#endif /*RAM_H*/