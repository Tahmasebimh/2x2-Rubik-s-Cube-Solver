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
    //default of last movement and layer counter is zero
    Cube solveCubeWithDLS(Cube cube, int lastMovement, int layerCounter, int depth = 8);

    Cube solveWithIDS(Cube cube, int maxDepth);

    int test = 0;

    void showWayOfSolving();
};


#endif //AP_MIDTERMPROJECT_SOLVER_H
