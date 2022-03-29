//
// Created by yoonl on 3/29/2022.
//

#include "iostream"
#include "Patrat.h"
#include "Repo.h"

#ifndef LAB6_TESTS_H
#define LAB6_TESTS_H

void testAll()
{

}

void test_adauga()
{
    Repo repository;
    Patrat p;
    p.set_coordonate(2,3,4,5);
    repository.addEntity(p);
    assert(repository[0] = p);
}

#endif //LAB6_TESTS_H
