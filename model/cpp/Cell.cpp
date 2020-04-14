//
// Created by Hossein on 4/14/2020.
//

#include "../h/Cell.h"

int Cell::getAmount() const {
    return amount;
}

void Cell::setAmount(int amount) {
    Cell::amount = amount;
}

char Cell::getColor() const {
    return color;
}

void Cell::setColor(char color) {
    Cell::color = color;
}

Cell::Cell(int amount, char color) : amount(amount), color(color) {}
