#ifndef MALANDRAGEM
#define MALANDRAGEM

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Malandragem : public ArmaDefesa
{
    public:
        Malandragem(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif