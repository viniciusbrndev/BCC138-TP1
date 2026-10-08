#pragma once
#include <string>

namespace Jogo {

class Date {
private:
    int dia;
    int mes;
    int ano;

public:
    Date(int dia = 1, int mes = 1, int ano = 2026);
    ~Date() = default;

    std::string formatarData() const;
};

} // namespace Jogo