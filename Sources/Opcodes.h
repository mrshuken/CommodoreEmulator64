#ifndef OPCODES_H
#define OPCODES_h


// MA VOGLIAMO MORIRE ?
// chiamare ciclicamente una cosa del genere � da pazzi sfrenati . By Franciman ( ora manvbnet si arrabbier� )

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