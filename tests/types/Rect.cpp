//
// Created by fo on 08/03/2021.
//
// This file contains a trivial use-case of Rectangle
#include "../../types/Rect.h"

//Type-alias Rectangle for convenience
using Rectangle = Type::Rectangle;

int main() {
    try {
        //initialize a new Rectangle;
        Rectangle rect(20, 30), rect2(20, 30);

        //display the information of the new rect
        std::cout << "rect: " << std::endl;
        rect.displayInfo();

        //display the information of the new rect2
        std::cout << "\nrect2: " << std::endl;
        rect2.displayInfo();

        //get the union of rect and rect 2
        auto rect3 = rect + rect2;

        //display the info of rect3
        std::cout << "\nrect + rect2:" << std::endl;
        rect3.displayInfo();

    } catch (const char *error) {
        std::cout << "\aError: " << error << std::endl;
        exit(-1);
    }
}