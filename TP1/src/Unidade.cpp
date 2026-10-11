#include "Unidade.hpp"
#include <iostream>

namespace Jogo{

//Construtor e destrutor
Unidade::Unidade(int poderAtaqueInicial = 0){
    this->poderAtaque = poderAtaqueInicial;
    this->destruicoes = 0;
}
Unidade::~Unidade(){}
//Métodos da classe
void Unidade::somaDestruicao(){
    this->destruicoes++;
}
void Unidade::print(){
    std::cout<<"Poder de ataque: "<<this->poderAtaque<<"Destruições: "<<this->destruicoes<<std::endl;
}
int Unidade::getPoderAtaque(){
    return this->poderAtaque;
}
int  Unidade::getDestruicoes() const{
    return this->destruicoes;
}


}