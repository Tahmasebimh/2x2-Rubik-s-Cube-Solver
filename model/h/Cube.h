//
// Created by Hossein on 4/14/2020.
//

#ifndef AP_MIDTERMPROJECT_CUBE_H
#define AP_MIDTERMPROJECT_CUBE_H


#include <ostream>
#include "Side.h"

class Cube {

public:
    Cube(const Side &topSide,
            const Side &downSide,
            const Side &leftSide,
            const Side &rightSide,
            const Side &frontSide,
            const Side &backSide);

    const Side &getTopSide() const;

    void setTopSide(const Side &topSide);

    const Side &getDownSide() const;

    void setDownSide(const Side &downSide);

    const Side &getLeftSide() const;

    void setLeftSide(const Side &leftSide);

    const Side &getRightSide() const;

    void setRightSide(const Side &rightSide);

    const Side &getFrontSide() const;

    void setFrontSide(const Side &frontSide);

    const Side &getBackSide() const;

    void setBackSide(const Side &backSide);

    //notice : first char point to side and CW means clockwise and CCW means counterClockWise
    void tCW();
    void tCCW();

    void bCW();
    void bCCW();

    void lCW();
    void lCCW();

    void rCW();
    void rCCW();

    void fCW();
    void fCCW();

    void dCW();
    void dCCW();

    bool isSolved();

    friend std::ostream &operator<<(std::ostream &os, const Cube &cube);

private:
    Side topSide, downSide, leftSide, rightSide, frontSide, backSide;

};


#endif //AP_MIDTERMPROJECT_CUBE_H
