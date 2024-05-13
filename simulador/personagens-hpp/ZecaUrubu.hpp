#ifndef ZECAURUBU
#define ZECAURUBU
#include "../core-simulador-hpp/Personagem.hpp"
class ZecaUrubu : public Personagem
{
    public:
        ZecaUrubu(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif