#include "../personagens-hpp/AdamSandler.hpp"

AdamSandler::AdamSandler(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int AdamSandler::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int AdamSandler::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string AdamSandler::pegarDescricao() 
{
    return "Iebaaa hahahaha";
}