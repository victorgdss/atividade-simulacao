#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Varinha.hpp"

Varinha::Varinha(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Varinha::gerarForcaAtaque()
{
    return maxForca;
}

string Varinha::gerarRuidoAtaque()
{
    return "wingardium leviosa";
}