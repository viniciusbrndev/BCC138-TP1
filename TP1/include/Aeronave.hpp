#pragma once
#include "Unidade.hpp"

namespace Jogo {

class Aeronave : public Unidade {
private:
    int manobrabilidade;
    int alcance;

public:
    Aeronave();
    ~Aeronave() override = default;

    int getPoderAtaque() override;
};

} // namespace Jogo