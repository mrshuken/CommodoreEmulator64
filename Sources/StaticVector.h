#ifndef STATICVECTOR_H
#define STATICVECTOR_H

#include <cstring> // for std::size_t 

namespace Commodore64
{

   namespace Utils
   {

      template< class T, std::size_t size >

      class StaticVector
      {

      public:

         typedef T *iterator;

         typedef const T *const_iterator;

         StaticVector() { }

         StaticVector( const StaticVector &other )
         {
            std::memcpy( data_, other.data_, size );
         }

         StaticVector &operator=( const StaticVector &other )
         {
            if( this != &other )
               std::memcpy( data_, other.data_, size );
            return *this;
         }

         T *operator+( std::size_t offset )
         {
            return ( data_ + offset );
         }

         const T *operator+( std::size_t offset ) const
         {
            return ( data_ + offset );
         }

         const T &operator[]( std::size_t offset ) const
         {
            return data_[ offset ];
         }

         T &operator[] ( std::size_t offset )
         {
            return data_[ offset ];
         }

         iterator begin()
         {
            return data_;
         }

         iterator end()
         {
            return ( data_ + size );
         }

         const_iterator begin() const
         {
            return data_;
         }

         const_iterator end() const
         {
            return ( data_ + size );
         }

      private:

         T data_[ size ];

      };

   }

}

#endif /*STATICVECTOR_H*/