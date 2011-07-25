#ifndef REGISTER_H
#define REGISTER_H

namespace Commodore64
{

   namespace Hardware
   {

      // TODO

      class Register
      {

      public:

         unsigned char getBitN( unsigned char n )
         {
            // Implementa , serve per ottenere l' n-esimo bit , utile per i flag 
         }

         unsigned char data() const 
         {
            return data_;
         }

         void data( unsigned char val )
         { 
            data_ = val;
         }

      private:

         unsigned char data_;

      };

   }

}

#endif // REGISTER_H