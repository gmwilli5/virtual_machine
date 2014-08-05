#ifndef MEMORY_CONTROLLER_H_INCLUDED
#define MEMORY_CONTROLLER_H_INCLUDED
class memory_controller{
    public:
        unsigned char stack[100];
        unsigned char memory[8192];
        //unsigned char rom[4096];
    public:
        memory_controller();
        unsigned char load(unsigned char address);
};
#endif // MEMORY_CONTROLLER_H_INCLUDED
