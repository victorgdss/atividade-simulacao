#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Alegria.hpp"
#include "../acessorios-hpp/Astucia.hpp"
#include "../acessorios-hpp/CapadeInvisibilidade.hpp"
#include "../acessorios-hpp/Carisma.hpp"
#include "../acessorios-hpp/Malandragem.hpp"
#include "../acessorios-hpp/MarretaBionica.hpp"
#include "../acessorios-hpp/Pano.hpp"
#include "../acessorios-hpp/Revolver.hpp"
#include "../acessorios-hpp/Touro.hpp"
#include "../acessorios-hpp/Varinha.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/AdamSandler.hpp"
#include "../personagens-hpp/Chapolim.hpp"
#include "../personagens-hpp/Feiticeiro.hpp"
#include "../personagens-hpp/Toureiro.hpp"
#include "../personagens-hpp/ZecaUrubu.hpp"
#include "../core-simulador-hpp/Simulador.hpp"


using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",45,98);
    ArmaAtaque* arma_feiticeiro  = new Varinha("Varinha sem feitico",57,81);
    ArmaAtaque* arma_toureiro  = new Touro("Touro super feroz",48,90);
    ArmaAtaque* arma_chapolim  = new MarretaBionica("Marreta de 10 gramas",51,75);
    ArmaAtaque* arma_zecaurubu  = new Revolver("Revolver de agua",39,45);
    ArmaAtaque* arma_adamsandler = new Alegria("Piada mal contada",71,80);
    ArmaDefesa* escudo_toureiro = new Pano("Pano Vermelho", 32);
    ArmaDefesa* escudo_adamsandler = new Carisma("Eu sou uma pessoa legal", 25);
    ArmaDefesa* escudo_feiticeiro = new CapadeInvisibilidade("Capa com invisibilidade média", 21);
    ArmaDefesa* escudo_zecaurubu = new Malandragem("Engana atacador", 17);
    ArmaDefesa* escudo_chapolim = new Astucia("Golpe recebido com sucesso", 38);
    ArmaDefesa* escudo = new Escudo("Latão", 1);
    
    Personagem* p1 = new AdamSandler(1, "Adam Sandler EQ1", 75, arma_adamsandler, escudo_adamsandler);
    Personagem* p3 = new ZecaUrubu(3, "Zeca Urubu fugitivo EQ1", 138, arma_zecaurubu, escudo_zecaurubu);
    Personagem* p2 = new Feiticeiro(2, "Feiticeiro sem licenca EQ2", 80, arma_feiticeiro, escudo_feiticeiro);
    Personagem* p4 = new Toureiro(4, "Toureiro sem medo EQ2", 120, arma_toureiro, escudo_toureiro);
    Personagem* p5 = new Chapolim(5, "Chapolim uniforme azul EQ1", 95, arma_chapolim, escudo_chapolim);
    Personagem* p6 = new Chaves(6, "Chaves EQ2", 109, arma, escudo);
    

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    simulador->adicionarPersonagem(p5, 1);
    simulador->adicionarPersonagem(p6, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}