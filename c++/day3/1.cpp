#include <iostream>
#include <string>
using namespace std;

int main(){
    string dish;
    cin>>dish;
    int sum=0;
    if(dish[0]=='('|| dish[0]==')')
        sum+=10;
    for(int i=1;i<dish.length();i++){
        if(dish[i]==dish[i-1])
            sum+=5;
        else
            sum+=10; 
    } 
    cout<<sum<<endl;
}
