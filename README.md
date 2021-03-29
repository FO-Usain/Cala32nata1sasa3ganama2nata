# Cala32nata1sasa3ganama2nata
Amro
****
 
**What**: Assignments for laboratory work No. 4 Static, constant and friendly members of the class

**How**: assign practical work 3 "Overloading operations"

**Why**: to complete the revision of the program in accordance with the tasks:
1. Add a static field int count, which acts as a counter of class objects.  

2. The destructor of the class must decrement the counter value by one.

3. Add a static method int getCount() that returns the value of the counter.  

4. Demonstrate changing the value of a static field.

###### **Description**
Assignment is broken-down into packages, as named by the present directories:
   
    **src**: contains the implementation of external-linkage operations of components of other packages

    **tests**: contains use-cases of implementation

    **types**: contains definitions of the Types within the system

Class Rectangle, which is the class that is to meet all the requirements stated by the Assignment, is defined in types/Rect.h
Implementation of member-functions of Type Rectangle and its Core(class Rectangle::Core) can be found in src/types/Rect.cpp
The demonstrations/testings are present in the "tests" directory

###### Compilation of demonstrations
Implementation is guaranteed to be compatible with g++ version 9.3.0

**Compilation of demonstration of Rectangle that displays its length**:
    g++ tests/types/Rect.cpp src/types/Rect.cpp -o tests/types/rect -std=c++17

**Compilation of demonstration of changing number of present instances of Rectangle**:
    g++ tests/types/DynamicRect.cpp src/types/Rect.cpp -o tests/types/dyRect -std=c++17

**Compilation of demonstration of changing number of present instances of Rectangle**:
    g++ tests/types/threadRectCount src/types/Rect.cpp -pthread -o tests/types/threadCount -std=c++17
