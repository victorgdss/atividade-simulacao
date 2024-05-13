#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Alegria.hpp"

Alegria::Alegria(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Alegria::gerarForcaAtaque()
{
    return maxForca;
}

string Alegria::gerarRuidoAtaque()
{
    return "acho que eu me dei bem nessa";
}