#include "../personagens-hpp/Feiticeiro.hpp"

Feiticeiro::Feiticeiro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Feiticeiro::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Feiticeiro::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Feiticeiro::pegarDescricao() 
{
    return "Sim salabim sim salabao, voce perdeu amigao";
}