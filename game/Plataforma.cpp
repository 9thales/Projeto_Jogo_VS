#include "Plataforma.h"

Plataforma::Plataforma(Vector2f tam, Vector2f pos)
{
	corpo.setPosition(pos);
	corpo.setSize(tam);
	corpo.setFillColor(Color::Green);

	ID = 3;

}

Plataforma::Plataforma()
{
	ID = 3;
}

Plataforma::~Plataforma()
{
}

void Plataforma::Executar()
{
}

void Plataforma::Colisao(Entidade* entidade)
{
}