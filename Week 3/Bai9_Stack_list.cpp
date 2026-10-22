#include<iostream>
using namespace std;
struct Stack{
    int a[100];
    int n=0;
void push(int item){
    a[n]=item;
    n++;
}
int pop(){
    n--;
    return a[n];
}


void empty(){
    if(n==0){
        cout<<"empty";
    }else{
        cout<<"not empty";
    }
}
};
int main(){
    Stack a;
    a.push(1);
    a.push(2);
    a.push(3);
cout<<a.pop()<<endl;
cout<<a.pop()<<endl;
cout<<a.pop()<<endl;
    a.empty();
    return 0;
}