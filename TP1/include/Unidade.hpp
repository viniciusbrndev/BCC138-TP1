#pragma once

namespace Jogo {

class Unidade {
protected:
    int poderAtaque;
    int destruicoes;

public:
    Unidade(int poderAtaqueInicial = 0);
    virtual ~Unidade() = default;

    // Método virtual puro para permitir polimorfismo
    virtual int getPoderAtaque() = 0;
    virtual void print();

    void somaDestruicao();
    
    int getDestruicoes() const;
};

} // namespace Jogo