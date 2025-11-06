//Zhiyi Chen 11/4 Commit1
//Add include statements & Constructors , destructor and member functions
#ifndef IntArray_H
#define IntArray_H
#include <iostream>

class IntArray {
private:
    int* arr;
    static int total_entries;
    int size;
public:
    IntArray(); // Constructors
    IntArray(int size);

    ~IntArray();// Destructor

    int getSize();     // Member functions
    int getValue(int index);
    void replace(int index, int value); // store the specified value in the array at the index
    void swap(int index1, int index2);  // swap the values in the array if they are legal
    void print();
    static void get_total_entries();
    double get_instance_percent();
};

#endif

// Testing and debug the intArray functions declarations 11/6 Zhiyi Chen











