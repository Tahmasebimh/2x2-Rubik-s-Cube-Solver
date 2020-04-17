//
// Created by Hossein on 4/16/2020.
//

#ifndef AP_MIDTERMPROJECT_SOLVER_H
#define AP_MIDTERMPROJECT_SOLVER_H


#include "../model/h/Cube.h"
#include "../provider/MovementProvider.h"
#include <vector>

class Solver {


private:
    std::vector<Cube> solvedWayCube;
    std::vector<std::string> solvedWayString;
    MovementProvider movementProvider;

public:
    Cube solveCube(Cube cube, int lastMovement, int layerCounter);

    int test = 0;

    void showWayOfSolving();
};


#endif //AP_MIDTERMPROJECT_SOLVER_H
