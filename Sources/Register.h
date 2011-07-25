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

         const byte getBitN( int n ) const
         {
             assert(n >= 0 && n <= 7, "Index out of range");
             return (data_ >> n) & 1;
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