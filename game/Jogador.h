#pragma once
#include "Personagens.h"

class Jogador :
    public Personagens
{
private:
    //atributo especificos (?)
    //Projetil/arma

public:
    Jogador();

    Jogador(sf::RenderWindow* w);

    ~Jogador();
    
    virtual void Mover();
    virtual void Executar();

};

