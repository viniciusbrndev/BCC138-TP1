#pragma once
#include "Unidade.hpp"

namespace Jogo {

class Veiculo : public Unidade {
private:
    int blindagem;
    int potenciaDeFogo;

public:
    Veiculo();
    ~Veiculo() override = default;

    int getPoderAtaque() override;
    void print() override;
};

} // namespace Jogo