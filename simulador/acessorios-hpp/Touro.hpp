#ifndef TOURO
#define TOURO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Touro : public ArmaAtaque
{
    public:
        Touro(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif