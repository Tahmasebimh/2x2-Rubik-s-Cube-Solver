//
// Created by Hossein on 4/14/2020.
//

#include "../h/Cube.h"


const Side &Cube::getTopSide() const {
    return topSide;
}

void Cube::setTopSide(const Side &topSide) {
    Cube::topSide = topSide;
}

const Side &Cube::getDownSide() const {
    return downSide;
}

void Cube::setDownSide(const Side &downSide) {
    Cube::downSide = downSide;
}

const Side &Cube::getLeftSide() const {
    return leftSide;
}

void Cube::setLeftSide(const Side &leftSide) {
    Cube::leftSide = leftSide;
}

const Side &Cube::getRightSide() const {
    return rightSide;
}

void Cube::setRightSide(const Side &rightSide) {
    Cube::rightSide = rightSide;
}

const Side &Cube::getFrontSide() const {
    return frontSide;
}

void Cube::setFrontSide(const Side &frontSide) {
    Cube::frontSide = frontSide;
}

const Side &Cube::getBackSide() const {
    return backSide;
}

void Cube::setBackSide(const Side &backSide) {
    Cube::backSide = backSide;
}

Cube::Cube(const Side &topSide, const Side &downSide, const Side &leftSide, const Side &rightSide,
           const Side &frontSide, const Side &backSide) : topSide(topSide), downSide(downSide), leftSide(leftSide),
                                                          rightSide(rightSide), frontSide(frontSide),
                                                          backSide(backSide) {}

void Cube::tCW() {
    topSide.cw();
    Row temp = frontSide.getTopRow();
    frontSide.setTopRow(rightSide.getTopRow());
    rightSide.setTopRow(backSide.getTopRow());
    backSide.setTopRow(leftSide.getTopRow());
    leftSide.setTopRow(temp);
}

void Cube::tCCW() {
    topSide.ccw();
    Row temp = frontSide.getTopRow();
    frontSide.setTopRow(leftSide.getTopRow());
    leftSide.setTopRow(backSide.getTopRow());
    backSide.setTopRow(rightSide.getTopRow());
    rightSide.setTopRow(temp);
}

void Cube::bCCW() {
    backSide.ccw();
    Row temp = topSide.getTopRow();
    topSide.setTopRow(rightSide.getRightSide());
    rightSide.setRightRow(downSide.getBottomRow());
    downSide.setBottomRow(leftSide.getLeftRow());
    leftSide.setLeftRow(temp);
}

void Cube::bCW() {
    backSide.cw();
    Row temp = topSide.getTopRow();
    topSide.setTopRow(leftSide.getLeftRow());
    leftSide.setLeftRow(downSide.getBottomRow());
    downSide.setBottomRow(rightSide.getRightSide());
    rightSide.setRightRow(temp);
}

void Cube::lCCW() {
    leftSide.ccw();
    Row temp = frontSide.getLeftRow();
    frontSide.setLeftRow(downSide.getLeftRow());
    downSide.setLeftRow(backSide.getLeftRow());
    backSide.setLeftRow(topSide.getLeftRow());
    topSide.setLeftRow(temp);
}

void Cube::lCW() {
    leftSide.cw();
    Row temp = topSide.getLeftRow();
    topSide.setLeftRow(backSide.getLeftRow());
    backSide.setLeftRow(downSide.getLeftRow());
    downSide.setLeftRow(frontSide.getLeftRow());
    frontSide.setLeftRow(temp);
}

void Cube::rCW() {
    rightSide.cw();
    Row temp = frontSide.getRightSide();
    frontSide.setRightRow(topSide.getRightSide());
    topSide.setRightRow(backSide.getRightSide());
    backSide.setRightRow(downSide.getRightSide());
    downSide.setRightRow(temp);
}

void Cube::rCCW() {
    rightSide.ccw();
    Row temp = frontSide.getRightSide();
    frontSide.setRightRow(downSide.getRightSide());
    downSide.setRightRow(backSide.getRightSide());
    backSide.setRightRow(topSide.getRightSide());
    topSide.setRightRow(temp);
}

void Cube::fCW() {
    frontSide.cw();
    Row temp = topSide.getBottomRow();
    topSide.setBottomRow(leftSide.getRightSide());
    leftSide.setRightRow(downSide.getTopRow());
    downSide.setTopRow(rightSide.getLeftRow());
    rightSide.setLeftRow(temp);
}

void Cube::fCCW() {
    frontSide.ccw();
    Row temp = topSide.getBottomRow();
    topSide.setBottomRow(rightSide.getLeftRow());
    rightSide.setLeftRow(downSide.getTopRow());
    downSide.setTopRow(leftSide.getRightSide());
    leftSide.setRightRow(temp);
}

void Cube::dCW() {
    downSide.cw();
    Row temp = frontSide.getBottomRow();
    frontSide.setBottomRow(leftSide.getBottomRow());
    leftSide.setBottomRow(backSide.getBottomRow());
    backSide.setBottomRow(rightSide.getBottomRow());
    rightSide.setBottomRow(temp);
}

void Cube::dCCW() {
    downSide.ccw();
    Row temp = frontSide.getBottomRow();
    frontSide.setBottomRow(rightSide.getBottomRow());
    rightSide.setBottomRow(backSide.getBottomRow());
    backSide.setBottomRow(leftSide.getBottomRow());
    leftSide.setBottomRow(temp);
}

bool Cube::isSolved() {
    return frontSide.isSame() && rightSide.isSame()
        && backSide.isSame() && leftSide.isSame()
        && topSide.isSame() && downSide.isSame();
}
