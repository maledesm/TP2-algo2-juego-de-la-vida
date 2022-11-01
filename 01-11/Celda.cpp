#include "Celda.h"

Celda::Celda(){
    estado = Inerte;
    celula = NULL;
}

Celda::Celda(estadoCelda state){
    estado = state;
    celula = NULL;
}

Celda::Celda(Celula * cell){
    estado = Inerte;
    celula = cell;
}

Celda::Celda(estadoCelda state, Celula * cell){
    estado = state;
    celula = cell;
}

Celula * Celda::getCelula(){
    return this->celula;
}