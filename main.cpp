#include <iostream>
#include "class.h"
int main(int argc, char const *argv[])
{
  LinkedList<int> l1;
  l1.add(1);
  l1.add(2);
  l1.add(3);
  l1.add(100);
  std::cout << "Linked List Display:" << std::endl;
  l1.display();

  Stack<int> s1;
  s1.push(5);
  s1.push(6);
  s1.push(7);
  s1.push(8);
  std::cout << "Stack Display:" << std::endl;
  s1.display();
  system("pause");
  return 0;
}
