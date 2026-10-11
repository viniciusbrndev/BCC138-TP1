#include "Unidade.hpp"
#include "Infantaria.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>


namespace Jogo{
Infantaria::Infantaria():Unidade(){
    std::srand(std::time(0));

    this->poderAtaque = std::rand() % (60 -30) +30;
    this->forca = std::rand() % (50 -20) +20;
    this->velocidade = std::rand() % (40 -10) +10;
}
Infantaria::~Infantaria(){}

int Infantaria::getPoderAtaque() {
    return ((poderAtaque*5) + (forca*3) + 
(velocidade*2))/10;
}
void Infantaria::print(){
    std::cout<<"Poder de ataque: "<<this->poderAtaque<<"Força: : "<<this->forca<<"Velocidade: "<<this->velocidade<<std::endl;
}




}