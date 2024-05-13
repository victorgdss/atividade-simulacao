#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Pano.hpp"

Pano::Pano(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Pano::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Pano::getResistencia() 
{
    return this->resistencia;
}