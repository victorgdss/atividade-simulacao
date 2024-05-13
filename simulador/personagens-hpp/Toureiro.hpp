#ifndef TOUREIRO
#define TOUREIRO
#include "../core-simulador-hpp/Personagem.hpp"
class Toureiro : public Personagem
{
    public:
        Toureiro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif