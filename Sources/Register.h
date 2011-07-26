#ifndef REGISTER_H
#define REGISTER_H

#include <assert.h>

namespace Commodore64
{

   namespace Hardware
   {
   
      // TODO
         
   
      class Register
      {
          typedef unsigned char byte;
          
      public:

         const byte getBitN( int n ) const
         {
             assert(n >= 0 && n <= 7);
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