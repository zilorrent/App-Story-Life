# class.h Test in main()

## Code with C++

```cpp
#include "class.h"
int main(int argc, char const *argv[])
{
  Stack<int> s1;
  s1.push(1);
  s1.push(2);
  s1.push(3);
  s1.push(4);
  s1.display();
  
  // let top public first
  Node<int> *p = s1.top;
  std::cout << p->data << std::endl;
  s1.~Stack();
  std::cout << p->data << std::endl;
  system("pause");
  return 0;
}

```