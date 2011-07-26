#ifndef OPCODES_H
#define OPCODES_h

namespace Commodore64
{
   namespace Opcodes
   {
      class OpCode
      {
      public:
          virtual void Exec() { }
      };
      
      class OpCodeADC : public OpCode
      {
      public:
          virtual void Exec()
          {
              //ToImplement
          }
      };
      
      
      class OpCodeBRK : public OpCode
      {
      public:
          virtual void Exec()
          {
              //ToImplement
          }
      };
      
      
      
   }
}

#endif /*OPCODES_H*/