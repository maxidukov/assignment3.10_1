#include <iostream>
#include <string>
#include <iomanip>

int main() {
  std::string name;
  std::cout << "Введите имя: ";
  std::cin >> std::setw(255) >> name;
  std::cout<< "Здравствуйте, " << name << "!" << std::endl;
}
