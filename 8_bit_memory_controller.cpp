#include "memory_controller.h"
memory_controller::memory_controller()
{
    for(int iii=0;iii<100;iii++){
        stack[iii]=0;
    }
    for(int iii=0;iii<8192;iii++){
        memory[iii]=0;
    }
}
unsigned char memory_controller::load(unsigned char address)
{
    return memory[address];
}
