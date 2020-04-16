#include <iostream>
#include "model/h/Cell.h"
#include "model/h/Row.h"
#include "model/h/Side.h"
#include "model/h/Cube.h"
#include "utils/Solver.h"
#include "model/h/MovementProvider.h"


int main() {
    std::cout << "Hello, World!" << std::endl;


    Cell cell1(1, 'w');
    Cell cell2(1, 'w');
    Row row1(cell1, cell2);


    Cell cell3(2, 'w');
    Cell cell4(2, 'w');
    Row row2(cell3, cell4);
    Side side(row1, row2);

    Cell cell11(1, 'r');
    Cell cell21(1, 'r');
    Row row11(cell11, cell21);


    Cell cell31(2, 'r');
    Cell cell41(2, 'r');
    Row row21(cell31, cell41);
    Side side1(row11, row21);

    Cell cell12(1, 'y');
    Cell cell22(1, 'y');
    Row row12(cell12, cell22);


    Cell cell32(2, 'y');
    Cell cell42(2, 'y');
    Row row22(cell32, cell42);
    Side side2(row12, row22);

    Cell cell13(1, 'o');
    Cell cell23(1, 'o');
    Row row13(cell13, cell23);


    Cell cell33(2, 'o');
    Cell cell43(2, 'o');
    Row row23(cell33, cell43);
    Side side3(row13, row23);

    Cell cell14(1, '1');
    Cell cell24(1, '2');
    Row row14(cell14, cell24);


    Cell cell34(2, '3');
    Cell cell44(2, '4');
    Row row24(cell34, cell44);
    Side side4(row14, row24);


    Cell cell15(1, 'b');
    Cell cell25(1, 'b');
    Row row15(cell15, cell25);


    Cell cell35(2, 'b');
    Cell cell45(2, 'b');
    Row row25(cell35, cell45);
    Side side5(row15, row25);

   Cube cube(side, side1, side2, side3, side4, side5);

   std::cout << cube << std::endl;

    Solver solver;
    MovementProvider movmentProvider;


    cube.fCCW();
    std::cout << cube << std::endl;

//    std::cout << solver.solveCube(cube, movmentProvider.nothing, 1);
    return 0;
}
