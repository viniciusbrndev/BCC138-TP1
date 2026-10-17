#pragma once
#include <string>
#include <memory>
#include <iostream>

#include "Batalha.hpp"
#include "Date.hpp"
#include "Exercito.hpp"


namespace Jogo{

    Batalha::Batalha(const Date& data, Exercito* exercitoA, Exercito* exercitoB){
        if(!exercitoA || !exercitoB){
            throw std::invalid_argument ("NÃO FOI POSSÍVEL INICIAR A BATALHA");
            return;
        }
        this->resultadoA = 0;
        this->resultadoB = 0;

        this->exercitoA = exercitoA;
        this->exercitoB = exercitoB;
        this->data = data;

    }
    Batalha::~Batalha() = default;

    void Batalha::ataqueExercitoA(){
        resultadoA = 0;
        for(auto& unidade : this->exercitoA->getUnidades())
            resultadoA += unidade->getPoderAtaque();
    }
    void Batalha::ataqueExercitoB(){
        resultadoB = 0;
        for(auto& unidade : this->exercitoB->getUnidades())
            resultadoB += unidade->getPoderAtaque();
    }
    std::string Batalha::getResultado() const{
        return this->exercitoA->getNome() + std::to_string(this->exercitoA->getVitorias()) + " X " + this->exercitoB->getNome() + std::to_string(this->exercitoB->getVitorias());
    }





}