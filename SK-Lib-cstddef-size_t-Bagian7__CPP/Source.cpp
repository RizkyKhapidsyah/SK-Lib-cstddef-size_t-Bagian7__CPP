

#include <iostream>
#include <cstddef>
#include <array>
#include <conio.h>

/*
    Source by AlphaCodingSkills
    Modified For Learn by RK
    I.D.E : VS2019
*/

using namespace std;

int main() {
    array<size_t, 10> arr;

    for (size_t i = 0; i < arr.size(); i++) {
        arr[i] = i;
    }
        
    cout << "arr contains: \n";

    for (size_t i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
        
    _getch();
    return 0;
}

