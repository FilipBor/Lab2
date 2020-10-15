#include <iostream>

int fibonacci_recursive(int index){
    if (index < 2){
        return index;
    }
    return fibonacci_recursive(index-2) + fibonacci_recursive(index - 1);
}
int read_int(){
    std::cout <<"Please introduce a number\n";

    int n;
    std::cin >> n;
    return n;
}
int main()
{
  int index = read_int();

  int result = fibonacci_recursive(index);

  std::cout <<"The result is: "<< result << std::endl;
  return 0;
}