#include <iostream>
#include <sstream>
#include "model/h/Cell.h"
#include "model/h/Row.h"
#include "model/h/Side.h"
#include "model/h/Cube.h"
#include "utils/Solver.h"
#include "model/h/MovementProvider.h"

void split(const std::string &str, std::vector<std::string> &vector, char delim = ',');

int main() {
    std::cout << "Hello!" << std::endl;

    std::string delimiter = ",";

    Side topSide;
    bool topRowIsOk(false);
    while (!topRowIsOk) {
        std::cout << "Input top side of the cube (exp : 1,1,1,1)" << std::endl;
        std::vector<std::string> inputs;
        std::string topSideInput;
        std::getline(std::cin, topSideInput);
        split(topSideInput, inputs);
        if (inputs.size() == 4) {
            topRowIsOk = true;
            topSide = Side(Row(Cell(std::stoi(inputs[0]), inputs[0]),
                               Cell(std::stoi(inputs[1]), inputs[1])),
                                       Row(Cell(std::stoi(inputs[2]), inputs[2]),
                                               Cell(std::stoi(inputs[3]), inputs[3])));
        } else {
            std::cout << "Bad Input!" << std::endl;
        }
    }

    Side frontSide;
    bool frontRowIsOk(false);
    while (!frontRowIsOk) {
        std::cout << "Input front side of the cube (exp : 1,1,1,1)" << std::endl;
        std::string frontSideInput;
        std::getline(std::cin, frontSideInput);
        std::vector<std::string> inputs;
        split(frontSideInput, inputs);
        if (inputs.size() == 4) {
            frontRowIsOk = true;
            frontSide = Side(Row(Cell(std::stoi(inputs[0]), inputs[0]),
                               Cell(std::stoi(inputs[1]), inputs[1])),
                                       Row(Cell(std::stoi(inputs[2]), inputs[2]),
                                               Cell(std::stoi(inputs[3]), inputs[3])));
        } else {
            std::cout << "Bad Input!" << std::endl;
        }


    }
    Side downSide;
    bool downRowIsOk(false);
    while (!downRowIsOk) {
        std::cout << "Input down side of the cube (exp : 1,1,1,1)" << std::endl;
        std::string downSideInput;
        std::getline(std::cin, downSideInput);
        std::vector<std::string> inputs;
        split(downSideInput, inputs);
        if (inputs.size() == 4) {
            downRowIsOk = true;
            downSide = Side(Row(Cell(std::stoi(inputs[0]), inputs[0]),
                                Cell(std::stoi(inputs[1]), inputs[1])),
                            Row(Cell(std::stoi(inputs[2]), inputs[2]),
                                Cell(std::stoi(inputs[3]), inputs[3])));
        } else {
            std::cout << "Bad Input!" << std::endl;
        }
    }


    Side backSide;
    bool backSideIsOk(false);
    while (!backSideIsOk) {
        std::cout << "Input back side of the cube (exp : 1,1,1,1)" << std::endl;
        std::string backSideInput;
        std::getline(std::cin, backSideInput);
        std::vector<std::string> inputs;
        split(backSideInput, inputs);
        if (inputs.size() == 4) {
            backSideIsOk = true;
            backSide = Side(Row(Cell(std::stoi(inputs[0]), inputs[0]),
                                Cell(std::stoi(inputs[1]), inputs[1])),
                            Row(Cell(std::stoi(inputs[2]), inputs[2]),
                                Cell(std::stoi(inputs[3]), inputs[3])));
        } else {
            std::cout << "Bad Input!" << std::endl;
        }
    }

    Side rightSide;
    bool rightSideIsOk(false);
    while (!rightSideIsOk) {
        std::cout << "Input right side of the cube (exp : 1,1,1,1)" << std::endl;
        std::string inputString;
        std::getline(std::cin, inputString);
        std::vector<std::string> inputs;
        split(inputString, inputs);
        if (inputs.size() == 4) {
            rightSideIsOk = true;
            rightSide = Side(Row(Cell(std::stoi(inputs[0]), inputs[0]),
                                 Cell(std::stoi(inputs[1]), inputs[1])),
                             Row(Cell(std::stoi(inputs[2]), inputs[2]),
                                 Cell(std::stoi(inputs[3]), inputs[3])));
        } else {
            std::cout << "Bad Input!" << std::endl;
        }
    }

    Side leftSide;
    bool leftSideIsOk(false);
    while (!leftSideIsOk) {
        std::cout << "Input left side of the cube (exp : 1,1,1,1)" << std::endl;
        std::string inputString;
        std::getline(std::cin, inputString);
        std::vector<std::string> inputs;
        split(inputString, inputs);
        if (inputs.size() == 4) {
            leftSideIsOk = true;
            leftSide = Side(Row(Cell(std::stoi(inputs[0]), inputs[0]),
                                Cell(std::stoi(inputs[1]), inputs[1])),
                            Row(Cell(std::stoi(inputs[2]), inputs[2]),
                                Cell(std::stoi(inputs[3]), inputs[3])));
        } else {
            std::cout << "Bad Input!" << std::endl;
        }
    }

    std::cout << "Thanks for your attention!" << std::endl;
    Cube cube(topSide, downSide, leftSide, rightSide, frontSide, backSide);

//    std::cout << "Input Cube is : " << std::endl;
//    std::cout << cube << std::endl;
//    cube.tCW();
//    cube.rCCW();
//    cube.dCCW();
//    cube.bCCW();
//    cube.tCCW();
//    cube.rCW();
    std::cout << "Input Cube is : " << std::endl;
    std::cout << cube << std::endl;
    Solver solver;
    std::cout << "Please wait until solving cube : " << std::endl;
    Cube solved = solver.solveCube(cube, 0, 1);

    return 0;
}

void split(const std::string &str, std::vector<std::string> &vector, char delim) {
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, delim)) {
        vector.push_back(token);
    }
}