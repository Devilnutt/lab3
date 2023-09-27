#include <iostream>
int fib(int n) 
{
  if (n <= 1) {
   return n;
  }
  else {
   return fib(n - 1) + fib(n - 2);
  }
}
int main() {
 int n;
 std::cout << "Введите n:";
 std::cin >> n;
 std::cout << "Значение:" << fib(n);
 return 0;
}