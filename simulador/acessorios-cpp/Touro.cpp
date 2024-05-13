#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Touro.hpp"

Touro::Touro(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Touro::gerarForcaAtaque()
{
    return maxForca;
}

string Touro::gerarRuidoAtaque()
{
    return "muuuu";
}