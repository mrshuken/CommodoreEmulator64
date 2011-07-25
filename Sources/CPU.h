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

         const Register &regA() const
         {
            return registers[ 0 ];
         }

         const Register &regX() const
         {
            return registers[ 1 ];
         }

        const  Register &regY() const
         {
            return registers[ 2 ];
         }

         const Register &regFlags() const
         {
            return registers[ 3 ];
         }

         const Register &regPC() const
         {
            return registers[ 4 ];
         }

         const Register &regSP() const
         {
            return registers[ 5 ];
         }

      private:

         Register registers[ 6 ];

      };

   }

}

#endif /*CPU_H*/