#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/CapadeInvisibilidade.hpp"

CapadeInvisibilidade::CapadeInvisibilidade(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string CapadeInvisibilidade::getDescricaoArma() 
{
    return this->descricaoArma;
}

int CapadeInvisibilidade::getResistencia() 
{
    return this->resistencia;
}