//
// Created by Hossein on 4/14/2020.
//

#ifndef AP_MIDTERMPROJECT_CELL_H
#define AP_MIDTERMPROJECT_CELL_H


#include <string>

class Cell {
private:
    //this is cell amount to show
    int amount;
    //this is cell color
    std::string color;

public:

    Cell(int amount, const std::string &color);

    Cell();

    int getAmount() const;

    void setAmount(int amount);

    const std::string &getColor() const;

    void setColor(const std::string &color);
};


#endif //AP_MIDTERMPROJECT_CELL_H
