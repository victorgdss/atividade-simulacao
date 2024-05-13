#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Malandragem.hpp"

Malandragem::Malandragem(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Malandragem::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Malandragem::getResistencia() 
{
    return this->resistencia;
}