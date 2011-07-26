#ifndef CPU_H
#define CPU_H

#include "Register.h"

namespace Commodore64
{

   
   namespace Hardware
   {

      class Cpu
      {

      public:

         enum CpuRegisters;

         const Register &getReg( CpuRegisters reg ) const
         {
            return registers[ reg ];
         }
         
         Register &getReg( CpuRegisters reg )
         {
            return registers[ reg ];
         }

      private:

         Register registers[ 6 ];

      };

      enum Cpu::CpuRegisters
      { 
         RegA,
         RegX,
         RegY,
         RegFlag
         RegSP,
         RegPC,
      };

   }

}

#endif /*CPU_H*/