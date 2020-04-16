//
// Created by Hossein on 4/14/2020.
//

#include "../h/Side.h"

const Row &Side::getTopRow() const {
    return topRow;
}

void Side::setTopRow(const Row &topRow) {
    Side::topRow = topRow;
}

const Row &Side::getBottomRow() const {
    return bottomRow;
}

void Side::setBottomRow(const Row &bottomRow) {
    Side::bottomRow = bottomRow;
}

Side::Side(const Row &topRow, const Row &bottomRow) : topRow(topRow), bottomRow(bottomRow) {}

void Side::cw() {
    Cell a11 = bottomRow.getFirstCell();
    Cell a12 = topRow.getFirstCell();
    Cell a21 = bottomRow.getSecondCell();
    Cell a22 = topRow.getSecondCell();
    topRow = Row(a11, a12);
    bottomRow = Row(a21, a22);
}

void Side::ccw() {
    Cell a11 = topRow.getSecondCell();
    Cell a12 = bottomRow.getSecondCell();
    Cell a21 = topRow.getFirstCell();
    Cell a22 = bottomRow.getFirstCell();
    topRow = Row(a11, a12);
    bottomRow = Row(a21, a22);
}

Row Side::getLeftRow() const {
    return Row(topRow.getFirstCell(), bottomRow.getFirstCell());
}

Row Side::getRightSide() const {
    return Row(topRow.getSecondCell(), bottomRow.getSecondCell());
}

void Side::setLeftRow(Row row) {
    topRow.setFirstCell(row.getFirstCell());
    bottomRow.setFirstCell(row.getSecondCell());
}

void Side::setRightRow(Row row) {
    topRow.setSecondCell(row.getFirstCell());
    bottomRow.setSecondCell(row.getSecondCell());
}

bool Side::isSame() {
    return topRow.getFirstCell().getColor() == topRow.getSecondCell().getColor()
            && bottomRow.getFirstCell().getColor() == bottomRow.getSecondCell().getColor()
            && topRow.getFirstCell().getColor() == bottomRow.getFirstCell().getColor();
}

std::ostream &operator<<(std::ostream &os, const Side &side) {
    os << side.topRow << "  |  " << "\n" << side.bottomRow << "  |  ";
    return os;
}
