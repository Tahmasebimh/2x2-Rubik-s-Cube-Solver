//
// Created by Hossein on 4/14/2020.
//

#ifndef AP_MIDTERMPROJECT_CELL_H
#define AP_MIDTERMPROJECT_CELL_H


class Cell {
private:
    //this is cell amount to show
    int amount;
    //this is cell color
    char color;

public:
    Cell(int amount, char color);

public:
    int getAmount() const;

    void setAmount(int amount);

    char getColor() const;

    void setColor(char color);
};


#endif //AP_MIDTERMPROJECT_CELL_H
