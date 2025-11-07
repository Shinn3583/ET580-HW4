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
// Ruoming Ye  11/06
// Swap values at two indices
void IntArray::swap(int index1, int index2) 
{
    if (index1 >= 0 && index1 < size && index2 >= 0 && index2 < size) {
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }
}

// Print all array values
void IntArray::print()
{
    for (int i = 0; i < size; i++) {
        std::cout << arr[i];
        if (i < size - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}

// Print total entries across all instances
void IntArray::get_total_entries() 
{
    std::cout << total_entries << std::endl;
}

// Calculate percentage of total entries in this instance
double IntArray::get_instance_percent()
{
    return (static_cast<double>(size) / total_entries) * 100.0;
}