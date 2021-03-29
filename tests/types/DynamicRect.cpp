//
// Created by fo on 29/03/2021.
//
// This file contains the demonstration of the variation of the total number of the instances of Type Rectangle
#include "../../types/Rect.h"

#include <string>
#include <ctime>
#include <chrono>

//Make aliases, for convenience
using Rectangle = Type::Rectangle;

/**
 * @brief: returns the string representation of the current time-stamp
 * @return std::string: the current time-stamp
 */
std::string getTime() {
    time_t *time(new time_t(std::chrono::system_clock::to_time_t(std::chrono::system_clock::now())));
    return std::string(ctime(time));
}

/**
 * @brief: outputs the total number of instances of Rectangle that exist at the present to stdout
 */
void outCurrRectCount() {
    //construct the text that is to be output
    std::string view = "Present Rectangle Count: ";
    view += std::to_string(Rectangle::getCount());
    view += "\tTime: ";
    view += getTime();

    //output the constructed text
    std::cout << view << std::endl;
}

int main() {
    try {
        //Initialize the first Rectangle
        Rectangle *rectangle(new Rectangle(1, 2));
        std::cout << "First rectangle created" << std::endl;

        //output the total number of Rectangles that are present at the moment
        outCurrRectCount();

        //initialize 2 more instances of Rectangle
        Rectangle *rect2(new Rectangle(20, 30)), *rect3(new Rectangle(22, 1));
        std::cout << "second and third rectangles created" << std::endl;

        //output the total number of Rectangles that are present at the moment
        outCurrRectCount();

        //destroy the first rectangle
        delete rectangle;
        std::cout << "First rectangle deleted" << std::endl;

        //output the total number of Rectangles that are present at the moment
        outCurrRectCount();

        //destroy the second rectangle
        delete rect2;
        std::cout << "Second rectangle deleted" << std::endl;

        //output the total number of Rectangles that are present at the moment
        outCurrRectCount();
    } catch (const char *error) {       //an error occurred
        //report the error
        std::cout << "\aError: " << error << std::endl;
        exit(-1);
    }

    return 0;
}