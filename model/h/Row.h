//
// Created by Hossein on 4/14/2020.
//

#ifndef AP_MIDTERMPROJECT_ROW_H
#define AP_MIDTERMPROJECT_ROW_H


#include "Cell.h"

class Row {

private:
    Cell firstCell, secondCell;

public:
    const Cell &getFirstCell() const;

    void setFirstCell(const Cell &firstCell);

    const Cell &getSecondCell() const;

    void setSecondCell(const Cell &secondCell);

    Row(const Cell &firstCell, const Cell &secondCell);

};


#endif //AP_MIDTERMPROJECT_ROW_H
