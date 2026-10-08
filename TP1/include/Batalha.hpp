#pragma once
#include <string>
#include "Date.hpp"
#include "Exercito.hpp"

namespace Jogo {

class Batalha {
private:
    Date data;
    Exercito* exercitoA;
    Exercito* exercitoB;
    int resultadoA;
    int resultadoB;

public:
    Batalha(const Date& data, Exercito* exercitoA, Exercito* exercitoB);
    ~Batalha() = default;

    void ataqueExercitoA();
    void ataqueExercitoB();
    std::string getResultado() const;
};

} // namespace Jogo