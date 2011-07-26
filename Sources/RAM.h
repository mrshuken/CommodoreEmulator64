#ifndef RAM_H
#define RAM_H

#include "StaticVector.h"

namespace Commodore64
{

   namespace Hardware
   {

      const std::size_t RamSize = 65536; // 64 Kb

      enum RamLocation{ };
      
      class Ram
      {
          typedef unsigned char byte;

      public:

         byte* byteAt( const RamLocation location )
         {
            return ( memory_ + location );
         }

      private:

         Utils::StaticVector< byte, RamSize > memory_;
         
      };

   }
   
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
}

#endif /*RAM_H*/