#ifndef ADAMSANDLER
#define ADAMSANDLER
#include "../core-simulador-hpp/Personagem.hpp"
class AdamSandler : public Personagem
{
    public:
        AdamSandler(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif