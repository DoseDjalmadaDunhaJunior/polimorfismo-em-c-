//
// Created by djalma cunha on 05/05/2018.
//

#ifndef POLIMORFISMO_EM_C_ANIMAL_H
#define POLIMORFISMO_EM_C_ANIMAL_H
#include <iostream>
using namespace std;

class Animal {
public:
    // sem o metodo virtual sempre seria subscrito o que esta aqui
    virtual void move();

    //o metodo virtual puro forca as subclasses serem chamadas
    //virtual void move() = 0;
    //virtual ~ Animal();
};


#endif //POLIMORFISMO_EM_C_ANIMAL_H
