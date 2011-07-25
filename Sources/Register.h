#ifndef REGISTER_H
#define REGISTER_H

#include <assert.h>

namespace Commodore64
{

   namespace Hardware
   {
   
      // TODO
      typedef unsigned char byte;   
   
      class Register
      {

      public:

         const byte getBitN( int n )
         {
             assert(n > 7, "Index too large");
             return data_ << (8-n) >> 8;
         }

         const byte data() const 
         {
            return data_;
         }

         void data( byte val )
         { 
            data_ = val;
         }

      private:

         byte data_;

      };

   }

}

#endif /*REGISTER_H*/