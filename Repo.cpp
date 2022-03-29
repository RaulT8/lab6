//
// Created by yoonl on 3/29/2022.
//

#include "Repo.h"

Repo::Repo() {
    this->entitati = vector<Patrat>();
}

void Repo::addEntity(Patrat e) {
    this->entitati.push_back(e);
}

Patrat Repo::getEntity(int id) {
    return this->entitati[id];
}

Repo::~Repo() {
    this->entitati.clear();
}

Patrat Repo::getBiggest() {
    Patrat max;
    for(auto i=this->entitati.begin(); i<this->entitati.end(); i++)
        if(max < *i)
            max = *i;
    return max;
}

vector<Patrat> Repo::squareInFirstQuadrant() {
    vector<Patrat> rezultat;
    for(auto i=this->entitati.begin(); i<this->entitati.end(); i++)
    {
        Patrat val = *i;
        if(val.validator())
            rezultat.push_back(val);
    }

    return rezultat;
}

void Repo::biggestEqualSecv(int n, int& start, int& end) {
    int len = 0, max  =-1;
    start = end = 0;
    for(int i=0;i<n-1;i++)
    {
        Patrat p1 = this->getEntity(i);
        Patrat p2 = this->getEntity(i+1);
        if(p1 == p2)
        {
            len++;
            if(len> max)
            {
                max = len;
                start = i-len+1;
                end = i+1;
            }
        }
        else
            len = 0;
    }
}

