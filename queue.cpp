#include <iostream>
#include <new>

class Queue
{
private:
    struct Node { int item; struct Node * next; };
    enum {Q_SIZE = 10};
    Node * front;
    Node * rear;
    int items;
    const int qsize;
public:
    Queue(int &qs) : qsize(qs) {}
};

template<class T> 
class A
{
    int x;
};

template <class T> 
class A<T*>
{
    long x;
};
int main()
{

    A<int> ex;

    return 0;

}