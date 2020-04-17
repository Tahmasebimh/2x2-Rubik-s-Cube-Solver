//
// Created by Hossein on 4/16/2020.
//

#ifndef AP_MIDTERMPROJECT_MOVEMENTPROVIDER_H
#define AP_MIDTERMPROJECT_MOVEMENTPROVIDER_H


class MovementProvider {

public:
    int nothing = 0;

    //top clock wise
    int tCW = 1;
    //top counter clock wise
    int tCCW = 2;

    //front clock wise
    int fCW = 3;
    //front counter clock wise
    int fCCW = 4;

    //down clock wise
    int dCW = 5;
    //down counter clock wise
    int dCCW = 6;

    //bottom clock wise
    int bCW = 7;
    //bottom counter clock wise
    int bCCW = 8;

    //right clock wise
    int rCW = 9;
    //right counter clock wise
    int rCCW = 10;

    //left clock wise
    int lCW = 11;
    //left counter clock wise
    int lCCW = 12;

};


#endif //AP_MIDTERMPROJECT_MOVEMENTPROVIDER_H
