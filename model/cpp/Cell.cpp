//
// Created by Hossein on 4/14/2020.
//

#include "../h/Cell.h"



Cell::Cell(int amount, const std::string &color) : amount(amount), color(color) {}

int Cell::getAmount() const {
    return amount;
}

void Cell::setAmount(int amount) {
    Cell::amount = amount;
}

const std::string &Cell::getColor() const {
    return color;
}

void Cell::setColor(const std::string &color) {
    Cell::color = color;
}

Cell::Cell() {}
