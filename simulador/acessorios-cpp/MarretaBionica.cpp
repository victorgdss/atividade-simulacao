#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/MarretaBionica.hpp"

MarretaBionica::MarretaBionica(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int MarretaBionica::gerarForcaAtaque()
{
    return maxForca;
}

string MarretaBionica::gerarRuidoAtaque()
{
    return "toooomm";
}