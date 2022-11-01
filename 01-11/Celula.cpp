#include "Celula.h"

void Celula::setGen1(Gen gene){
    this->gen1 = gene;
}

void Celula::setGen2(Gen gene){
    this->gen2 = gene;
}

void Celula::setGen3(Gen gene){
    this->gen3 = gene;
}

void Celula::setGens(Gen gene1, Gen gene2, Gen gene3){
    this->setGen1(gene1);
    this->setGen2(gene2);
    this->setGen3(gene3);
}