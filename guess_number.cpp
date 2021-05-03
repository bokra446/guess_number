#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {
  srand(time((0)));
  const int c = 101;
  setlocale(LC_ALL, "Russian");
  int number, s = 101;
  number = rand() % c;
  std::cout << "Введите число \n";
  while (s != number){
    std::cin >> s;
    if (s > number){
      std::cout << "Слишком много \n";
    } 
    else if (s < number){
      std::cout << "Слишком мало \n";
    }
    else {
      break;
    }
  }
  std::cout << "Верное число : " << number << '\n';
  return 0;
}