//
// Created by Hossein on 4/16/2020.
//
#include <vector>
#include "../h/solver.h"
#include "../h/MovementProvider.h"

Cube solveCube(Cube cube, int lastMovement, int layerCounter){
    if (cube.isSolved() && layerCounter >= 15){
        return cube;
    }
    std::vector<Cube> cubs;
    MovementProvider movementProvider;
    if (lastMovement != movementProvider.tCW){
        Cube cube1(cube);
        cube1.tCCW();
        cubs.push_back(solveCube(cube, movementProvider.tCCW, (layerCounter + 1)));
    }
    if (lastMovement != movementProvider.tCCW){
        Cube cube1(cube);
        cube1.tCCW();
        cubs.push_back(solveCube(cube, movementProvider.tCW, (layerCounter + 1)));
    }
    if (lastMovement != movementProvider.fCW){
        Cube cube1(cube);
        cube1.fCCW();
        cubs.push_back(solveCube(cube, movementProvider.fCCW, (layerCounter + 1)));
    }

    if (lastMovement != movementProvider.fCCW){
        Cube cube1(cube);
        cube1.fCW();
        cubs.push_back(solveCube(cube, movementProvider.fCW, (layerCounter + 1)));
    }

    if (lastMovement != movementProvider.dCW){
        Cube cube1(cube);
        cube1.dCCW();
        cubs.push_back(solveCube(cube, movementProvider.dCCW, (layerCounter + 1)));
    }

    if (lastMovement != movementProvider.dCCW){
        Cube cube1(cube);
        cube1.dCW();
        cubs.push_back(solveCube(cube, movementProvider.dCW, (layerCounter + 1)));
    }
    if (lastMovement != movementProvider.bCW){
        Cube cube1(cube);
        cube1.bCCW();
        cubs.push_back(solveCube(cube, movementProvider.bCCW, (layerCounter + 1)));
    }
    if (lastMovement != movementProvider.bCCW){
        Cube cube1(cube);
        cube1.bCW();
        cubs.push_back(solveCube(cube, movementProvider.bCW, (layerCounter + 1)));
    }
    if (lastMovement != movementProvider.rCW){
        Cube cube1(cube);
        cube1.rCCW();
        cubs.push_back(solveCube(cube, movementProvider.rCCW, (layerCounter + 1)));
    }
    if (lastMovement != movementProvider.rCCW){
        Cube cube1(cube);
        cube1.rCW();
        cubs.push_back(solveCube(cube, movementProvider.rCW, (layerCounter + 1)));
    }
    if (lastMovement != movementProvider.lCW){
        Cube cube1(cube);
        cube1.lCCW();
        cubs.push_back(solveCube(cube, movementProvider.lCCW, (layerCounter + 1)));
    }

    if (lastMovement != movementProvider.lCCW){
        Cube cube1(cube);
        cube1.lCW();
        cubs.push_back(solveCube(cube, movementProvider.lCW, (layerCounter + 1)));
    }

    for (auto & cub : cubs) {
        if (cub.isSolved()){
            return cub;
        }
    }
    return cube;
}
