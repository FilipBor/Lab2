#include <iostream>
#include <fstream>
#include <iomanip>
int read_int(){

    int n;
    std::cin >> n;
    return n;
}
int main(){

    std::cout <<"Enter range of desired multiplication table"<<std::endl; // asking user to input table range
    std::cout <<"Starting value: \n"; // asking user to input table range
    int begin = read_int(); // reading and assigning starting value to a variable
    std::cout <<"Ending value: \n"; // asking user to input table range
    int stop = read_int(); // reading and assigning ending value to a variable
    std::ofstream file; // opening file stream
    file.open("table.txt"); // opening file
    for ( int i = begin; i <= stop; i++ ) // outer loop for printing table
    {
        if ( i == begin) // condition for printing table
        {
            file << std::setw(4) <<" "; // setting indention

            for (int first_row = begin; first_row <= stop; first_row++) { // loop for printing rows
                file << std::setw(3) << first_row << " "; // saving rows to file
            }
            file << std::endl;
            file << std::setw(4) <<" "; // setting indention
            for (int second_row = begin; second_row <= stop; second_row++) // loop for printing dashes
            {
                file << "----";
            }
            file << std::endl;
        }

        for ( int j = begin; j <= stop; j++) // loop used for printing numbers and multiplication
        {
            if ( j == begin) // condition for printing numbers and multiplication
            {
                file << std::setw(3) << i << "|"; // setting indention, printing numbers and |
            }
            file << std::setw(3) << i*j << " "; // setting indention and printing multiplication result
        }
        file << std::endl;
    }
    file.close();  // closing file to save changes
  return 0;
}
