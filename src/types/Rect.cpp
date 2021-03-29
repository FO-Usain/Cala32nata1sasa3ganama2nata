//
// Created by fo on 29/03/2021.
//
// This file contains the implementation of the all the member-functions of the Type Rect
#include "../../types/Rect.h"

//Make type aliases, for convenience.
using Rect = Type::Rectangle;

class Rect::Core {
public:

    /**
     * @brief: initializes the data-members of this RectangleCore
     * @param ox: integral representation of side OX of the Rectangle that houses this Core
     * @param oy: integral representation of side OY of the Rectangle that houses this Core
     */
    Core(const int &ox, const int &oy) : _ox(ox), _oy(oy) {
        //increment the total number of Rectangle that now exist
        ++_count;
    }

    /**
     * @brief: representation of side OX of the Rectangle that houses this Core
     */
    const int _ox;

    /**
     * @brief: representation of side OY of the Rectangle that houses this core
     */
    const int _oy;

    /**
     * @brief: keeps the total number of the instances of the class Rectangle::Core that exist the the moment of call
     */
    static int _count;

    ~Core() {
        //decrement the total number of instances of Rectangles that now exist
        --_count;
    }
};
//initialize the total number of RectangleCores present
int Rect::Core::_count = 0;

Rect::Rectangle(const int &OX, const int &OY) {
    //confirm that all is well
    if (OX == OY) {     //the passed length are those of a square
        //report the error
        throw "In the Constructor of Rectangle: the passed arguments cannot be equal, because, then, this Rectangle would be a square";
    } else if(!OX || !OY) {     //One of the length are valueless
        //report the error
        throw "In the Constructor of Rectangle: non of the passed arguments can be 0, because, then, this Rectangle would be a line";
    }

    //create the Core of this Rectangle
    _core = new Core(OX, OY);
}

Rect::Rectangle(const Rect &&rectangle) {

    //create the Core of this Rectangle
    _core = new Core(rectangle._core->_ox, rectangle._core->_oy);
}

Rect Rect::operator*(const Rect &rect) {
    return Rectangle(_core->_ox > rect._core->_ox ? rect._core->_ox : _core->_ox, _core->_oy > rect._core->_oy ? rect._core->_oy : _core->_oy);

}

Rect  Rect::operator+(const Rect &rect2) {
    return Rectangle(_core->_ox + rect2._core->_ox,_core->_oy + rect2._core->_oy);

}

Rect Rect::operator-(const Rect &rect2) {
    return Rectangle(_core->_ox > rect2._core->_ox ? _core->_ox - rect2._core->_ox : rect2._core->_ox - _core->_ox, _core->_oy > rect2._core->_oy ? _core->_oy - rect2._core->_oy : rect2._core->_oy - _core->_oy);
}

void Rect::displayInfo() {
    //output the length of side OX of this Rectangle
    std::cout << "side-OX: " << _core->_ox << "units" << std::endl;

    //output the length of side OY of this Rectangle
    std::cout << "side-OY: " << _core->_oy << "units" << std::endl;
}

int Rect::getCount() {
    //ge the total number of RectangleCores that exist
    return Core::_count;
}

Rect::~Rectangle() {
    //deallocate the allocated memories
    delete _core;
}