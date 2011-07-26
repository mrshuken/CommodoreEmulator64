#include <iostream>
#include "CPU.h"
#include "Opcodes.h"
#include "RAM.h"
#include "Register.h"
#include "StaticVector.h"


using namespace std;
using namespace Commodore64;
using namespace Hardware;

typedef unsigned char byte;

int main( int argc, char *argv[] )
{
    Ram ram;
    byte* ptr = ram.at( Ram::DataDirection );
    
    Cpu cpu;
    Register& reg = cpu.getReg( Cpu::RegA );
    
    cout << ptr;
    return 0;
}