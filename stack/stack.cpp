#include <iostream>
#include "stack.h"
using namespace std;

MyStack::MyStack(int n){
    array = new int[n];
    top = -1;
}
void MyStack::Push(int n){
    if(top<10){
        top++;
        array[top]=n; 
    } 
    else
        cout<<"Full"<<endl;
}
int MyStack::Pop(){
    if(top>-1)
        return array[top--];
    else
        cout<<"Empty"<<endl;
}
void MyStack::Print(){
    for(int i=0;i<=top;i++)
        cout<<array[i]<<" ";
    cout<<endl;
}
MyStack::~MyStack(){
    if(array!=NULL)
        delete[]array;
    array = 0;
}
