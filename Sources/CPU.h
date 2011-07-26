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
         
         static const int registersNum = 6;
         
      public:

         enum CpuRegisters
         { 
            RegA,
            RegX,
            RegY,
            RegFlag,
            RegSP,
            RegPC
         };

         const Register &getReg( CpuRegisters reg ) const
         {
            assert( reg >= 0 && reg < registersNum );
            return registers[ reg ];
         }
         
         Register &getReg( CpuRegisters reg )
         {
            assert( reg >= 0 && reg < registersNum );
            return registers[ reg ];
         }

      private:

         Register registers[ registersNum ];

      };

      

   }

}

#endif /*CPU_H*/