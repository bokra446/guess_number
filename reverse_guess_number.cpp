#include <iostream>
#include <stdlib.h>
#include <string.h>

int main() {
  int max = 101, min = -1;
  setlocale(LC_ALL, "Russian");
  int number = max / 2;
  char s[] = "sosiiii";
  while (strcmp("равно", s)){
    std::cout << number << " max: " << max << ", min: " << min << std::endl;
    std::cin >> s;
    if (!strcmp("больше", s)){
      max = number;
      number = number -  (max - min) / 2;
    } 
    else if (!strcmp("меньше", s)){
      min = number;
      number = min + (max - min) / 2;
    }
  }
  std::cout << "Загаданное число : " << number << '\n';
  return 0;
}