#ifndef ALEGRIA
#define ALEGRIA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Alegria : public ArmaAtaque
{
    public:
        Alegria(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif