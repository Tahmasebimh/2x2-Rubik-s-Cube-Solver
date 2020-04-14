//
// Created by Hossein on 4/14/2020.
//

#include "../h/Row.h"

const Cell &Row::getFirstCell() const {
    return firstCell;
}

void Row::setFirstCell(const Cell &firstCell) {
    Row::firstCell = firstCell;
}

const Cell &Row::getSecondCell() const {
    return secondCell;
}

void Row::setSecondCell(const Cell &secondCell) {
    Row::secondCell = secondCell;
}

Row::Row(const Cell &firstCell, const Cell &secondCell) : firstCell(firstCell), secondCell(secondCell) {}
