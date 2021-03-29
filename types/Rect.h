//
// Created by fo on 29/03/2021.
//
// This file contains the definition of class Rectangle.
// Rectangle has SIDE ON THE OX AXIS, for a rectangular coordinate system OXY (one side of which is located on the OX axis).
// Interfaces for multiple Constructors are declared
// Interfaces for  Overloads of binary operators("*" as intersection of two rectangles , "+" as union of two rectangles, "-" as asymmetric difference of two rectangles) are declared
#include <iostream>

#ifndef _ASSIGNMENT_RECT_H
#define _ASSIGNMENT_RECT_H

namespace Type {

    class Rectangle {
    public:
        /**
         * @Contructor
         * @brief: Constructs this Rectangle, using the passed arguments as its length, in the respective axes
         * @param OX: the length on the X-axis
         * @param OY: the length on the Y-axis
         */
        Rectangle(const int &OX, const int &OY);

        /**
         * @Contructor
         * @brief: copy-constructor
         * @param rectangle
         */
        Rectangle(const Rectangle &&rectangle);

        /**
         * @brief: gets the rectangle at the intersection of of the passed Rectangles
         * @param rect1: first Rectangle
         * @param rect2: second Rectangle
         * @return: the intersection of rect1 and rect2
         */
        Rectangle operator*(const Rectangle &rect);

        /**
         * @brief: gets and returns the union of the passed Rectangles
         * @param rect1: first Rectangle
         * @param rect2: second Rectangle
         * @return: the union of rect1 and rect2
         */
        Rectangle operator+(const Rectangle &rect2);


        /**
         * @brief: returns the Rectangles, which is the asymmetric difference of the passed Rectangles
         * @param rect: first rectangle
         * @param rect2: second rectangle
         * @return: the asymmetric difference of rect1 and rect2
         */
        Rectangle operator-(const Rectangle &rect2);

        /**
         * @brief: displays the information describing this Rectangle
         */
        void displayInfo();

        /**
         * Destructor
         */
        ~Rectangle();

    private:

        /**
         * @brief: Implementer of states of Rectangle
         */
        class Core;

        Core *_core;        //pimpl
    };

}       //Type

#endif //_ASSIGNMENT_RECT_H
