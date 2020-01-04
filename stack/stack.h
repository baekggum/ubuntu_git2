#ifndef __STACK_H_
#define __STACK_H_

class MyStack{
    int top;
    int* array;
    public:
    MyStack(int n);
    void Push(int n);
    int Pop();
    void Print();
    ~MyStack();
};

#endif
