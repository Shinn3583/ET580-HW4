//Zhiyi Chen 11/4 Commit 1
// Add include statements
#include "IntArray.h"
#include <iostream>
#include <cassert>


// Initialize static member
int IntArray::total_entries = 0;

// Zhiyi Chen 11/6 Commit3 implementing  function definitions in cpp files.
IntArray::IntArray() : size(5) // Default constructor
{
    arr = new int[size];
    total_entries += size;
}


IntArray::IntArray(int s) : size(s)  // Parameterized constructor
{
    arr = new int[size];
    total_entries += size;
}


IntArray::~IntArray()  // Destructor
{
    delete[] arr;
}


int IntArray::getSize() // Get size of array
{
    return size;
}


int IntArray::getValue(int index) // Get value at index
{
    assert(index >= 0 && index < size);
    return arr[index];
}


void IntArray::replace(int index, int value) // Replace value at indexS
{
    if (index >= 0 && index < size) {
        arr[index] = value;
    }
}
