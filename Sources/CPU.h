#ifndef CPU_H
#define CPU_H

#include "Register.h"

namespace Commodore64
{

   enum CpuRegisters{ };
   
   namespace Hardware
   {

      class Cpu
      {

      public:

         void Init() { /*todo*/ }
          
         const Register &regA( enum CpuRegisters reg ) const
         {
            return registers[ reg ];
         }
         
      private:

         Register registers[ 6 ];

      };
      
      enum CpuRegisters
      {
          X = 1,
          Y = 2,
          Flags = 3,
          PC = 4,
          SP = 5
      };

   }

}

#endif /*CPU_H*/