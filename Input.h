#include<iostream>
#include "ClassDefinitions.h"
using namespace std;

class Input
{
private:
    // A reference to the base program; Through this we can access any class instances we need, like Output
    Program* referenceToProgram;
public:
    Input(Program* program)
    {
        // Establish our reference to the main program
        referenceToProgram = program;
    }
}