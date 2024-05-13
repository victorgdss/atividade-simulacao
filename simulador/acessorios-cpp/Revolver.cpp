#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Revolver.hpp"

Revolver::Revolver(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Revolver::gerarForcaAtaque()
{
    return maxForca;
}

string Revolver::gerarRuidoAtaque()
{
    return "puw pow ";
}