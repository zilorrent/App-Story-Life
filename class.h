#ifndef h_Node
#define h_Node
template <class T>
class Node
{
private:
  //private
public:
  T data;
  Node<T> *next;
  Node<T>(T val);
  // Node<T>(const T &d) : data(d), next() {}
  // Node<T>(const Node<T> &copyNode) : data(copyNode.data), next() {}
};

template <class T>
Node<T>::Node(T val)
{
  this->data = val;
  this->next = NULL;
}

#endif //!h_Node

#ifndef h_LinkedList
#define h_LinkedList
template <class T>
class LinkedList
{
private:
  int count = 0;
  int max;

public:
  Node<T> *Head;

  LinkedList(const LinkedList &LL);
  LinkedList &operator=(LinkedList byValList);
  LinkedList() : Head(NULL) {}
  LinkedList(Node<T> *newNode) : Head(newNode) {}
  ~LinkedList();

  bool isEmpty();
  void display();
  bool add(T val);
};

// template <class T>
// LinkedList<T>::LinkedList(const LinkedList<T> &LL) : Head(NULL)
// {
//   const Node<T> *curr = LL.Head;

//   if (!Head && curr)
//   {
//     Head = new Node<T>(curr->data);
//     tail = Head;
//     curr = curr->next;
//   }

//   while (curr)
//   {
//     Node<T> *newNode = new Node<T>(curr->data);
//     tail->next = newNode;
//     tail = newNode;
//     curr = curr->next;
//   }
// }

template <class T>
LinkedList<T> &LinkedList<T>::operator=(LinkedList byValList)
{
  std::swap(Head, byValList.Head);
  return *this;
}

template <class T>
LinkedList<T>::~LinkedList()
{
  Node<T> *curr = Head;
  while (Head)
  {
    Head = Head->next;
    delete curr;
    curr = Head;
  }
}

template <class T>
bool LinkedList<T>::isEmpty()
{
  if (this->count == 0 || this->Head == NULL)
  {
    return 1;
  }
  return 0;
}

template <class T>
void LinkedList<T>::display()
{
  Node<T> *curr = Head;
  for (int i = 0; i < this->count; i++)
  {
    std::cout << curr->data << std::endl;
    curr = curr->next;
  }
}

template <class T>
bool LinkedList<T>::add(T val)
{
  // max return 0
  Node<T> *temp = new Node<T>(val);
  if (this->isEmpty())
  {
    this->Head = temp;
    this->count++;
    return 1;
  }
  Node<T> *curr = Head;
  while (curr->next != NULL)
  {
    curr = curr->next;
  }

  curr->next = temp;
  this->count++;
  return 1;
}
#endif //!h_LinkedList

#ifndef h_Stack
#define h_Stack
#define MAX_STACK 20;
template <class T>
class Stack
{
private:
  Node<T> *top;
  int count = 0;
  int max = MAX_STACK;

public:
  Stack() : top(NULL) {}
  Stack(Node<T> *newNode) : top(newNode) {}
  ~Stack();
  bool isEmpty();
  void display();
  bool push(T val);
  T pop();
  int getSize();
};

template <class T>
Stack<T>::~Stack()
{
  Node<T> *curr = top;
  while (top)
  {
    top = top->next;
    delete curr;
    curr = top;
  }
}

template <class T>
bool Stack<T>::isEmpty()
{
  if (this->count == 0)
  {
    return 1;
  }
  return 0;
}

template <class T>
bool Stack<T>::push(T val)
{
  Node<T> *temp = new Node<T>(val);
  if (this->isEmpty())
  {
    top = temp;
    this->count++;
    return 1;
  }
  else if (this->count == this->max)
  {
    std::cout << "Stack is full!" << std::endl;
    return 0;
  }
  temp->next = top;
  top = temp;
  this->count++;
  return 1;
}

template <class T>
T Stack<T>::pop()
{
  if (this->isEmpty())
  {
    std::cout << "Stack Empty!" << std::endl;
    T data;
    return data;
  }
  Node<T> *temp = top;
  top = temp->next;
  this->count--;
  T data = temp->data;
  delete temp;
  return data;
}

template <class T>
void Stack<T>::display()
{
  Node<T> *curr = top;
  if (this->isEmpty())
  {
    std::cout << "Stack Empty!" << std::endl;
  }
  while (curr->next != NULL)
  {
    std::cout << curr->data << std::endl;
    curr = curr->next;
  }
  std::cout << curr->data << std::endl;
}

template <class T>
int Stack<T>::getSize()
{
  return this->count;
}

#endif //!h_Stack