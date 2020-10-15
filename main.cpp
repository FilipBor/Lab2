#include <iostream>
#include <fstream>
#include <string>

int main(){

    std::ofstream file;
    file.open ("file.txt");
    file << true;
    file.close();


    std::ifstream new_file("file.txt");

    if (new_file.is_open())
    {
        std::string line;

        while(getline(new_file, line))
        {
            std::cout << line << std::endl;;
        }
        new_file.close();
    }
    else{
        std::cout <<"There was a problem opening the file";
    }

  return 0;
}