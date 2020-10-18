#include <iostream>
#include <array>
#include <ctime>


void swap(int *a, int *b) //function for swapping elements of array
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
const unsigned int sizeofArray = 10; // global variable for storing array's size
std::array<int, sizeofArray > data; // global definition of array
void bubble(){  // function used for bubble sorting
    int i, j; // integers used for iterations
    for( i = 0; i < sizeofArray ; i++) // first bubble loop
    {
        for (j = 0; j < sizeofArray - i - 1; j++) // second bubble loop
        {
            if (data[j] > data[j + 1]) { // condition for swapping adjacent elements
                swap(&data[j], &data[j + 1]); // application of swap function
            }
        }
        std::cout <<j; std::cout<<": "; std::cout << data[j] <<std::endl; // printing sorted array
    }
}
void randomizer(){
    srand(time(NULL));// seeded random function
    for ( int i = 0; i < sizeofArray; i++) // loop for filling array with random numbers
    {
        data[i] = (rand() % 50) + 1; // filling array with random numbers
        std::cout << i; std::cout<<": "; std::cout << data[i] << std::endl; // printing requested array
    }
}
int main(){
    std::cout<<"Randomized array: "<<std::endl;
    randomizer();
    std::cout<<"Sorted array: "<<std::endl;
    bubble();
}