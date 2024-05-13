#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Carisma.hpp"

Carisma::Carisma(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Carisma::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Carisma::getResistencia() 
{
    return this->resistencia;
}