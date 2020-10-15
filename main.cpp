#include <iostream>

bool is_prime(int number){

    for (int i = 2; i<number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
int main()
{
  std::cout <<"Please introduce a number\n";

  int number;
  std::cin >> number;

  if (is_prime(number)){
      std::cout <<"Your number is prime"<< std::endl;

  } else {
      std::cout <<"Your number is NOT prime"<<std::endl;
  }
}