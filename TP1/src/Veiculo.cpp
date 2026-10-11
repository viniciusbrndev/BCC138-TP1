#include "Unidade.hpp"
#include "Veiculo.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

namespace Jogo{
Veiculo::Veiculo():Unidade(){
    std::srand(std::time(0));

    this->poderAtaque = std::rand() % (60-30) +30; 
    this->blindagem = std::rand() % (70-30) +30; 
    this->potenciaDeFogo = std::rand() % (50-20) +20;
}

Veiculo::~Veiculo(){}

int Veiculo::getPoderAtaque(){
    return ((poderAtaque *5) + (blindagem*4) + (potenciaDeFogo*1))/10;
}
void Veiculo::print(){
    std::cout<<"Poder de ataque: "<<this->poderAtaque<<"Destruições: "<<this->destruicoes<<"Blindagem: : "<<this->blindagem<<"Potencia de fogo: "<<this->potenciaDeFogo<<std::endl;
}
}