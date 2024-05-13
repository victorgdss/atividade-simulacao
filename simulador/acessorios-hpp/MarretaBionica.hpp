#ifndef MARRETA
#define MARRETA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class MarretaBionica : public ArmaAtaque
{
    public:
        MarretaBionica(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif