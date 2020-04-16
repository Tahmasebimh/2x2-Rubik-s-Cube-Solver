//
// Created by Hossein on 4/16/2020.
//

#include <vector>
#include <iostream>
#include "Solver.h"
#include "../model/h/MovementProvider.h"

Cube Solver::solveCube(Cube cube, int lastMovement, int layerCounter) {
    if (cube.isSolved() || layerCounter >= 10){
        return cube;
    }
//    std::vector<Cube> cubs;
    MovementProvider movementProvider;
    if (lastMovement != movementProvider.tCW){
        Cube cube1(cube);
        cube1.tCCW();
        Cube t = (solveCube(cube1, movementProvider.tCCW, (layerCounter + 1)));
        if (t.isSolved()){
            if (layerCounter > test) {
                std::cout << "TCCW swapping" << std::endl;
            }
            std::cout << cube << std::endl;
            return t;
        }
    }

    if (lastMovement != movementProvider.tCCW){
        Cube cube1(cube);
        cube1.tCW();
        Cube t =(solveCube(cube1, movementProvider.tCW, (layerCounter + 1)));
        if (t.isSolved()){
            if (layerCounter > test) {
                std::cout << "TCW swapping" << std::endl;
            }
            std::cout << cube << std::endl;
            return t;
        }
    }
    if (lastMovement != movementProvider.fCW){
        Cube cube1(cube);
        cube1.fCCW();
        Cube t =(solveCube(cube1, movementProvider.fCCW, (layerCounter + 1)));
        if(t.isSolved()){
            if (layerCounter > test) {
                std::cout << "FCCW swapping" << std::endl;
            }
            std::cout << cube << std::endl;
            return t;
        }
    }

    if (lastMovement != movementProvider.fCCW){
        Cube cube1(cube);
        cube1.fCW();
        Cube t =(solveCube(cube1, movementProvider.fCW, (layerCounter + 1)));
        if(t.isSolved()){
            if (layerCounter > test) {
                std::cout << "FCW swapping" << std::endl;
            }
            std::cout << cube << std::endl;
            return t;
        }
    }

    if (lastMovement != movementProvider.dCW){
        Cube cube1(cube);
        cube1.dCCW();
        Cube t =(solveCube(cube1, movementProvider.dCCW, (layerCounter + 1)));
        if(t.isSolved()){
            if (layerCounter > test) {
                std::cout << "DCCW swapping" << std::endl;
            }
            std::cout << cube << std::endl;
            return t;
        }
    }
    if (lastMovement != movementProvider.dCCW){
        Cube cube1(cube);
        cube1.dCW();
        Cube t =(solveCube(cube1, movementProvider.dCW, (layerCounter + 1)));
        if(t.isSolved()){
            if (layerCounter > test) {
                std::cout << "DCW swapping" << std::endl;
            }
            std::cout << cube << std::endl;
            return t;
        }
    }
    if (lastMovement != movementProvider.bCW){
        Cube cube1(cube);
        cube1.bCCW();
        Cube t =(solveCube(cube1, movementProvider.bCCW, (layerCounter + 1)));
        if(t.isSolved()){
            if (layerCounter > test) {
                std::cout << "BCCW swapping" << std::endl;
            }
            std::cout << cube << std::endl;
            return t;
        }
    }
    if (lastMovement != movementProvider.bCCW){
        Cube cube1(cube);
        cube1.bCW();
        Cube t =(solveCube(cube1, movementProvider.bCW, (layerCounter + 1)));
        if(t.isSolved()){
            if (layerCounter > test) {
                std::cout << "BCW swapping" << std::endl;
            }
            std::cout << cube << std::endl;
            return t;
        }
    }
    if (lastMovement != movementProvider.rCW){
        Cube cube1(cube);
        cube1.rCCW();
        Cube t =(solveCube(cube1, movementProvider.rCCW, (layerCounter + 1)));
        if(t.isSolved()){
            if (layerCounter > test) {
                std::cout << "RCCW swapping" << std::endl;
            }
            std::cout << cube << std::endl;
            return t;
        }
    }
    if (lastMovement != movementProvider.rCCW){
        Cube cube1(cube);
        cube1.rCW();
        Cube t =(solveCube(cube1, movementProvider.rCW, (layerCounter + 1)));
        if(t.isSolved()){
            if (layerCounter > test) {
                std::cout << "RCW swapping" << std::endl;
            }
            std::cout << cube << std::endl;
            return t;
        }
    }
    if (lastMovement != movementProvider.lCW){
        Cube cube1(cube);
        cube1.lCCW();
        Cube t =(solveCube(cube1, movementProvider.lCCW, (layerCounter + 1)));
        if(t.isSolved()){
            if (layerCounter > test) {
                std::cout << "LCCW swapping" << std::endl;
            }
            std::cout << cube << std::endl;
            return t;
        }
    }
    if (lastMovement != movementProvider.lCCW){
        Cube cube1(cube);
        cube1.lCW();
        Cube t =(solveCube(cube1, movementProvider.lCW, (layerCounter + 1)));
        if(t.isSolved()){
            if (layerCounter > test) {
                std::cout << "LCW swapping" << std::endl;
            }
            std::cout << cube << std::endl;
            return t;
        }
    }

    return cube;
}
