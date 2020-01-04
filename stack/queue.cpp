#include <iostream>
#include "queue.h"
using namespace std;

MyQueue::MyQueue(int n){
    array = new int[n];
    front = -1, rear = -1;
}
void MyQueue::Enqueue(int n){
    if(rear<10){
        rear++;
        array[rear] = n; 
    }
    else
        cout<<"Full"<<endl;
}
int MyQueue::Dequeue(){
    if(front<rear)
        return array[++front];
    else
        cout<<"Empty"<<endl;
}
void MyQueue::Print(){
    for(int i=front+1;i<=rear;i++)
        cout<<array[i]<<" ";
    cout<<endl;
}
MyQueue::~MyQueue(){
    if(array!=NULL)
        delete[]array;
    array = 0;
}
