#ifndef __QUEUE_H_
#define __QUEUE_H_

class MyQueue{ 
    int front,rear;
    int* array;
    public:
    MyQueue(int n);
    void Enqueue(int n);
    int Dequeue();
    void Print();
    ~MyQueue();
};

#endif
