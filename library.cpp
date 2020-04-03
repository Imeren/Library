#include "library.h"
#include <vector>

using namespace std;

bool check(int x)   // функция проверки числа
{
  bool check = true;
  for(int i = 2; i < x; i++)
  {
    if(x % i == 0)
    {
      check = false;
      break;
    }
  }
  return check;
}
vector <int> list(int x, int y)   // функция добавления числа в список
{
  vector <int> simple_number;
  int i = x;
  while(i <= y)
  {
    if(check(i))
    {
      simple_number.push_back(i); // добавление числа в конец списка
    }
    i++;
  }
  return simple_number;
}
