#ifndef CELDA_H_
#define CELDA_H_

#ifndef NULL
#define NULL 0
#endif /* NULL */

#include "Celula.h"

enum estadoCelda{
	Inerte,
	Contaminada,
	Envenenada,
	Procreadora,
	Portal,
	Radioactiva
};

class Celda{
private:
	Celula* celula;
	estadoCelda estado;
public:
	int a;
	Celda();
	Celda(estadoCelda state);
	Celda(Celula * cell);
	Celda(estadoCelda state, Celula * cell);
	Celula * getCelula();
};



#endif /* CELDA_H_ */
