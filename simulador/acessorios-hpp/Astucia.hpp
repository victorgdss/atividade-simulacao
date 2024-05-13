#ifndef ASTUCIA
#define ASTUCIA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Astucia : public ArmaDefesa
{
    public:
        Astucia(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif