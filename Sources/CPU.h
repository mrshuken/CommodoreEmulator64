#include "Register.h"

namespace Commodore64
{

   namespace Hardware
   {

      class Cpu
      {

      public:

         Register &regA()
         {
            return registers[ 0 ];
         }

         Register &regX()
         {
            return registers[ 1 ];
         }

         Register &regY()
         {
            return registers[ 2 ];
         }

         Register &regFlags()
         {
            return registers[ 3 ];
         }

         Register &regPC()
         {
            return registers[ 4 ];
         }

         Register &regSP()
         {
            return registers[ 5 ];
         }

      private:

         Register registers[ 6 ];

      };

   }

}