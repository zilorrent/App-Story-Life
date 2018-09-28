# class.h Run Test

## Test LinkedList

```cpp
#include <iostream>
#include <string>
#include "class.h"
int main(int argc, char const *argv[])
{
  LinkedList<std::string> *l1 = new LinkedList<std::string>();
  l1->add("first add");
  l1->add("second add");
  l1->add("third add");
  l1->add("fourth add");
  std::cout << "Linked List Display:" << std::endl;
  l1->display();
  l1->~LinkedList();
  delete l1;
  system("pause);
  return 0;
}
```
## Test Stack

```cpp
#include <iostream>
#include "class.h"
int main(int argc, char const *argv[])
{
  Stack<int> *s1 = new Stack<int>();
  s1->push(5);
  s1->push(6);
  s1->push(7);
  s1->push(8);
  std::cout << "Stack Display:" << std::endl;
  s1->display();
  s1->~Stack();
  delete s1;
  system("pause);
  return 0;
}
```

## Test Queue

```cpp
#include <iostream>
#include "class.h"
int main(int argc, char const *argv[])
{
  Queue<int> *q1 = new Queue<int>();
  q1->display();
  q1->enQueue(100);
  q1->enQueue(101);
  q1->enQueue(102);
  q1->deQueue();
  q1->enQueue(103);
  q1->deQueue();
  std::cout << "Queue Display:" << std::endl;
  q1->display();
  q1->~Queue();
  delete q1;
  system("pause);
  return 0;
}
```
