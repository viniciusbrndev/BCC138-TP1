#pragma once
#include <vector>
#include <string>
#include "Batalha.hpp"

namespace Jogo {

class Campanha {
private:
    std::vector<Batalha*> batalhas;

public:
    Campanha() = default;
    ~Campanha(); // Desaloca os ponteiros das batalhas

    void simularBatalhas();
    void gerarTabelaDePosicoes(const std::string& nomeArquivo = "") const;
    void mostrarUnidadeMaisDestrutiva() const;
};

} // namespace Jogo