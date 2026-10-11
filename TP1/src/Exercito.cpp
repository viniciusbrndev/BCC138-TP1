#include "Exercito.hpp"
#include "Unidade.hpp"
#include "Aeronave.hpp"
#include "Veiculo.hpp"
#include "Infantaria.hpp"

#include <vector>
#include <memory>
#include <iostream>
#include <string>

namespace Jogo{

Exercito::Exercito(const std::string& nome){
    this->nome = nome;
    this->vitorias = 0;
    this->derrotas = 0;
    this->empates = 0;
}
// Destrutor
Exercito::~Exercito(){}

void Exercito::adicionarUnidade(Unidade& unidade){
    this->unidades.push_back(std::unique_ptr<Unidade>(&unidade));
}
std::string Exercito::getResultados() const{
    return "Vitórias: " + std::to_string(vitorias) + "Empates: " + std::to_string(empates) + "Derrotas: " + std::to_string(derrotas);
}
void Exercito::imprimeUnidades() const{
    for(auto& unit : this->unidades){
        unit->print();
    }
}

// Getters e Setters de suporte para simulação
const std::string& Exercito::getNome() const{
    return this->nome;
}
const std::vector<std::unique_ptr<Unidade>>& Exercito::getUnidades() const{
    return this->unidades;
}
void Exercito::registrarVitoria(){
    this->vitorias++;
}
void Exercito::registrarDerrota(){
    this->derrotas++;
}
void Exercito::registrarEmpate(){
    this->empates++;
}
int Exercito::getVitorias() const{
    return this->vitorias;
}
}


