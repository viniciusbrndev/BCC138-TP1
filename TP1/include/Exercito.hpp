#pragma once
#include <string>
#include <vector>
#include "Unidade.hpp"

namespace Jogo {

class Exercito {
private:
    std::string nome;
    std::vector<Unidade*> unidades; // Utiliza ponteiros para suporte ao Polimorfismo
    int vitorias;
    int derrotas;
    int empates;

public:
    explicit Exercito(const std::string& nome);
    ~Exercito(); // Destrutor para desalocar as Unidades dinâmicas

    void adicionarUnidade(Unidade* unidade);
    std::string getResultados() const;
    void imprimeUnidades() const;

    // Getters e Setters de suporte para simulação
    const std::string& getNome() const;
    const std::vector<Unidade*>& getUnidades() const;
    void registrarVitoria();
    void registrarDerrota();
    void registrarEmpate();
    int getVitorias() const;
};

} // namespace Jogo