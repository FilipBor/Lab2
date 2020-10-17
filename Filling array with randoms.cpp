#include <iostream>
#include <array>
#include <ctime>


int main(){
    const unsigned int sizeofArray = 10; // variable for storing array's size
    std::array<int, sizeofArray > data; // defining array
    srand(time(NULL));  // rand function
    for ( int i = 0; i < sizeofArray; i++) // loop for filling array with random numbers
    {
        data[i] = rand() % 50; // filling array with random numbers
        std::cout << data[i] << std::endl; // printing requested array
    }
    return 0;
}