#include "../personagens-hpp/Toureiro.hpp"

Toureiro::Toureiro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Toureiro::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Toureiro::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Toureiro::pegarDescricao() 
{
    return "Ihh OLEEEE";
}