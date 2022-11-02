#include "Ente.h"

Ente::Ente(): pGrafico(pGrafico->getGerenciadorGrafico())
{
	pGrafico->getWindow()->setVerticalSyncEnabled(true);
}

Ente::Ente(GerenciadorGrafico* pG)
{
	pGrafico = pG;
}



Ente::~Ente()
{
}

void Ente::setWindow(GerenciadorGrafico* pG) { pGrafico = pG; }

GerenciadorGrafico* Ente::getGrafico()
{
	return pGrafico;
}



void Ente::Print()
{
}
