//
// Created by Hossein on 4/16/2020.
//

#ifndef AP_MIDTERMPROJECT_SOLVER_H
#define AP_MIDTERMPROJECT_SOLVER_H


#include "../model/h/Cube.h"

class Solver {

public:
    Cube solveCube(Cube cube, int lastMovement, int layerCounter);

    int test = 0;
};


#endif //AP_MIDTERMPROJECT_SOLVER_H
