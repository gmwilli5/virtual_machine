#ifndef CORE_H_INCLUDED
#define CORE_H_INCLUDED
#include "memory_controller.h"
///8-bit
class core{
    public:
        unsigned char registers[8];
        unsigned char pc;
        unsigned char sp;
        unsigned char opcode;
        memory_controller* mcu;
    public:
        core();
        ~core();
        void execute_opcode();
};
#endif // CORE_H_INCLUDED
