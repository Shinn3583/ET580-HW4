//Zhiyi Chen 11/4 Commit1
//Implement empty main function & Add include statements
#include <iostream>
#include "IntArray.h"
//Ruoming Ye 11/06/25 - Commit 4
//Implement and test all IntArray member functions in driver.cpp
using namespace std;

int main() {
    cout << "Program Start." << endl;
    IntArray A;//default constructor
    IntArray B(3);//parameterized constructor
    A.replace(0, 10);
    A.replace(1, 20);
    A.replace(2, 30);
    A.replace(3, 40);
    A.replace(4, 50);
    cout << "A: ";
    A.print();
    cout << "A[1] = " << A.getValue(1) << endl;
    A.swap(0, 2);
    cout << "A after swap: ";
    A.print();

    cout << "Total entries: ";
    IntArray::get_total_entries();
    cout << "A percent: " << A.get_instance_percent() << "%" << endl;
    cout << "B percent: " << B.get_instance_percent() << "%" << endl;
    cout << "Program Complete." << endl;
        return 0;
}