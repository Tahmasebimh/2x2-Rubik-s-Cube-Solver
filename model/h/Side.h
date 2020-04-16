//
// Created by Hossein on 4/14/2020.
//

#ifndef AP_MIDTERMPROJECT_SIDE_H
#define AP_MIDTERMPROJECT_SIDE_H


#include <ostream>
#include "Row.h"

class Side {
private:
    Row topRow, bottomRow;
public:
    Side(const Row &topRow, const Row &bottomRow);

    const Row &getTopRow() const;

    void setTopRow(const Row &topRow);

    const Row &getBottomRow() const;

    void setBottomRow(const Row &bottomRow);

    Row getLeftRow() const;
    Row getRightSide() const;

    void setLeftRow(Row row);
    void setRightRow(Row row);

    void cw();

    void ccw();

    bool isSame();

    friend std::ostream &operator<<(std::ostream &os, const Side &side);
};


#endif //AP_MIDTERMPROJECT_SIDE_H
