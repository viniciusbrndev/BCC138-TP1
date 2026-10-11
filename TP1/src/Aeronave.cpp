#include "Unidade.hpp"
#include "Aeronave.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

namespace Jogo{

Aeronave::Aeronave():Unidade(){
    std::srand(std::time(0));

    this->poderAtaque = std::rand() % (90-50) + 50;
    this->manobrabilidade = std::rand() % (70-30) + 30;
    this->alcance = std::rand() % (50-20) + 20;
}
Aeronave::~Aeronave(){}
//Metodos da classe
void Aeronave::print(){
        std::cout<<"Poder de ataque: "<<this->poderAtaque<<"Destruições: "<<this->destruicoes<<"Manobrabilidade: "<<this->manobrabilidade<<"Alcance: "<<this->alcance<<std::endl;
}
int Aeronave::getPoderAtaque(){
    return ((poderAtaque *5) + (manobrabilidade*3) + (alcance*2))/10;
}



}