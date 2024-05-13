#ifndef VARINHA
#define VARINHA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Varinha : public ArmaAtaque
{
    public:
        Varinha(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif