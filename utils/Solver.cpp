//
// Created by Hossein on 4/16/2020.
//

#include <vector>
#include <iostream>
#include "Solver.h"
#include "../model/h/MovementProvider.h"

Cube Solver::solveCube(Cube cube, int lastMovement, int layerCounter) {
    if (cube.isSolved() || layerCounter >= 7){
        return cube;
    }
    if (lastMovement != movementProvider.tCW){
        Cube cube1(cube);
        cube1.tCCW();
        Cube t = (solveCube(cube1, movementProvider.tCCW, (layerCounter + 1)));
        if (t.isSolved()){
            if (layerCounter > test) {
                solvedWayString.push_back("TCCW swapping" );
            }
            solvedWayCube.push_back(cube);
            if (layerCounter == 1){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }

    if (lastMovement != movementProvider.tCCW){
        Cube cube1(cube);
        cube1.tCW();
        Cube t =(solveCube(cube1, movementProvider.tCW, (layerCounter + 1)));
        if (t.isSolved()){
            if (layerCounter > test) {
                solvedWayString.push_back("TCW swapping");
            }
            solvedWayCube.push_back(cube);
            if (layerCounter == 1){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }
    if (lastMovement != movementProvider.fCW){
        Cube cube1(cube);
        cube1.fCCW();
        Cube t =(solveCube(cube1, movementProvider.fCCW, (layerCounter + 1)));
        if(t.isSolved()){
            if (layerCounter > test) {
                solvedWayString.push_back("FCCW swapping");
            }
            solvedWayCube.push_back(cube);
            if (layerCounter == 1){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }

    if (lastMovement != movementProvider.fCCW){
        Cube cube1(cube);
        cube1.fCW();
        Cube t =(solveCube(cube1, movementProvider.fCW, (layerCounter + 1)));
        if(t.isSolved()){
            if (layerCounter > test) {
                solvedWayString.push_back("FCW swapping");
            }
            solvedWayCube.push_back(cube);
            if (layerCounter == 1){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }

    if (lastMovement != movementProvider.dCW){
        Cube cube1(cube);
        cube1.dCCW();
        Cube t =(solveCube(cube1, movementProvider.dCCW, (layerCounter + 1)));
        if(t.isSolved()){
            if (layerCounter > test) {
                solvedWayString.push_back("DCCW swapping");
            }
            solvedWayCube.push_back(cube);
            if (layerCounter == 1){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }
    if (lastMovement != movementProvider.dCCW){
        Cube cube1(cube);
        cube1.dCW();
        Cube t =(solveCube(cube1, movementProvider.dCW, (layerCounter + 1)));
        if(t.isSolved()){
            if (layerCounter > test) {
                solvedWayString.push_back("DCW swapping");
            }
            solvedWayCube.push_back(cube);
            if (layerCounter == 1){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }
    if (lastMovement != movementProvider.bCW){
        Cube cube1(cube);
        cube1.bCCW();
        Cube t =(solveCube(cube1, movementProvider.bCCW, (layerCounter + 1)));
        if(t.isSolved()){
            if (layerCounter > test) {
                solvedWayString.push_back("BCCW swapping");
            }
            solvedWayCube.push_back(cube);
            if (layerCounter == 1){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }
    if (lastMovement != movementProvider.bCCW){
        Cube cube1(cube);
        cube1.bCW();
        Cube t =(solveCube(cube1, movementProvider.bCW, (layerCounter + 1)));
        if(t.isSolved()){
            if (layerCounter > test) {
                solvedWayString.push_back("BCW swapping");
            }
            solvedWayCube.push_back(cube);
            if (layerCounter == 1){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }

            return t;
        }
    }
    if (lastMovement != movementProvider.rCW){
        Cube cube1(cube);
        cube1.rCCW();
        Cube t =(solveCube(cube1, movementProvider.rCCW, (layerCounter + 1)));
        if(t.isSolved()){
            if (layerCounter > test) {
                solvedWayString.push_back("RCCW swapping");
            }
            solvedWayCube.push_back(cube);
            if (layerCounter == 1){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }
    if (lastMovement != movementProvider.rCCW){
        Cube cube1(cube);
        cube1.rCW();
        Cube t =(solveCube(cube1, movementProvider.rCW, (layerCounter + 1)));
        if(t.isSolved()){
            if (layerCounter > test) {
                solvedWayString.push_back("RCW swapping");
            }
            solvedWayCube.push_back(cube);
            if (layerCounter == 1){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }
    if (lastMovement != movementProvider.lCW){
        Cube cube1(cube);
        cube1.lCCW();
        Cube t =(solveCube(cube1, movementProvider.lCCW, (layerCounter + 1)));
        if(t.isSolved()){
            if (layerCounter > test) {
                solvedWayString.push_back("LCCW swapping");
            }
            solvedWayCube.push_back(cube);
            if (layerCounter == 1){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }
    if (lastMovement != movementProvider.lCCW){
        Cube cube1(cube);
        cube1.lCW();
        Cube t =(solveCube(cube1, movementProvider.lCW, (layerCounter + 1)));
        if(t.isSolved()){
            if (layerCounter > test) {
                solvedWayString.push_back("LCW swapping");
            }
            solvedWayCube.push_back(cube);
            if (layerCounter == 1){
                solvedWayCube.push_back(t);
                solvedWayString.push_back("Finished :)");
                showWayOfSolving();
            }
            return t;
        }
    }
    if(solvedWayCube.empty() && layerCounter == 1){
        std::cout << "Cant solved this :(" << std::endl;
    }

    return cube;
}

void Solver::showWayOfSolving() {
    for (int i = (solvedWayString.size() - 2); i >= 0; --i) {
        std::cout << solvedWayCube[i] << std::endl;
        std::cout << solvedWayString[i] << std::endl;
    }
    std::cout << solvedWayCube[solvedWayString.size() - 1];
    std::cout << solvedWayString[solvedWayString.size() - 1] << std::endl;
}
