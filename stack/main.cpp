#include <iostream>
#include "stack.h"
#include "queue.h"
using namespace std;

void PrintMenu(){
    cout<<endl;
    cout<<"1. q.Enqueue"<<endl;
    cout<<"2. q.Dequeue"<<endl;
    cout<<"3. q.Print"<<endl;
    cout<<"4. s.Push"<<endl;
    cout<<"5. s.Pop"<<endl;
    cout<<"6. s.Print"<<endl;
    cout<<"7. Quit"<<endl;
    cout<<"입력) ";
}

int main(){
    MyQueue q(10);
    MyStack s(10);
    int input = 0, loop = 1, item = 0;

    while(loop){
        PrintMenu();
        cin>>input;
        switch(input){
            case 1: cin>>item;
                    q.Enqueue(item);break;
            case 2: cout<<q.Dequeue(); break;
            case 3: q.Print();break;
            case 4: cin>>item;
                    s.Push(item);break;
            case 5: cout<<s.Pop();break;
            case 6: s.Print();break;
            case 7: loop = 0; break;
            default: printf("Wrong input.\n");
        } 
    }
    return 0;
}
