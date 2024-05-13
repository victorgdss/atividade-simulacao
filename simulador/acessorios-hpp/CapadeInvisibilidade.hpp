#ifndef INVISIBILIDADE
#define INVISIBILIDADE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class CapadeInvisibilidade : public ArmaDefesa
{
    public:
        CapadeInvisibilidade(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif