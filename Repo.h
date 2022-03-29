//
// Created by yoonl on 3/29/2022.
//

//
// Created by alext on 22/03/2022.
//

#ifndef LAB_5_REPO_H
#define LAB_5_REPO_H

#include "Patrat.h"
#include <vector>

using namespace std;

class Repo {
private:
    vector<Patrat> entitati;
public:
    /*
     * Constructor
     */
    Repo();
    ~Repo();

    /**
     * Adauga o entitate in repository
     * @param e entitatea de adaugat
     */
    void addEntity(Patrat e);

    /**
     *Primeste o entitate dupa un id
     * @param id
     * @return entitatea de pe id
     */
    Patrat getEntity(int id);

    /**
     * Primeste cea mai mare entitate in functie de aria cercului aria cercului
     * @return entitatea cea mai mare
     */
    Patrat getBiggest();

    /**
     * Primeste un vector de cercuri care se afla complet in primul cadran
     * @return un vector cu entitatile dorite
     */
    vector<Patrat> squareInFirstQuadrant();

    /**
     *
     * @return
     */
    void  biggestEqualSecv(int n,int& start,int& end);


};


#endif //LAB_5_REPO_H
