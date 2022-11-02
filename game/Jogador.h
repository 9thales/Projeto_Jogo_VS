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

    //alterar (colocar esse par�metro na entidade)
    Jogador(GerenciadorGrafico* pG);


    ~Jogador();
    
    virtual void Mover();
    virtual void Executar();

};

