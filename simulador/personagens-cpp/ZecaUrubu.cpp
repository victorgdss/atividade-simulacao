#include "../personagens-hpp/ZecaUrubu.hpp"

ZecaUrubu::ZecaUrubu(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int ZecaUrubu::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int ZecaUrubu::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string ZecaUrubu::pegarDescricao() 
{
    return "Calma, meu parceiro";
}