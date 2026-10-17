#pragma once
#include <vector>
#include <string>
#include <memory>

#include "Batalha.hpp"

namespace Jogo {

class Campanha {
private:
    std::vector<std::unique_ptr<Batalha>> batalhas;

public:
    Campanha() = default;
    ~Campanha() = default; 
    //Geters & Seters
    void adicionarBatalha(std::unique_ptr<Batalha> battle);

    void simularBatalhas();
    void gerarTabelaDePosicoes(const std::string& nomeArquivo = "") const;
    void mostrarUnidadeMaisDestrutiva() const;
};

} // namespace Jogo