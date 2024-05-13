#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Astucia.hpp"

Astucia::Astucia(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Astucia::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Astucia::getResistencia() 
{
    return this->resistencia;
}