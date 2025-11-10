#include <iostream>
#include <stack>
#include <string>
#include <cmath>      
using namespace std;
void push(stack <int >&s,int value){
    s.push(value);
}
void display(stack <int >s){
    while(!s.empty()){
       cout<< s.top()<<" ";
       s.pop();
    }cout<<endl;
}
stack <int > sortedstack(stack <int >&s){
    stack<int>tp;
    while(!s.empty()){
        int temp=s.top();
        s.pop();
        while(!tp.empty() && tp.top()>temp){
            s.push(tp.top());
            tp.pop();
        }tp.push(temp);
    }
    return tp;
}
int main() {
    stack <int >s;
    push(s,13);
    push(s,54);
    push(s,3);
    push(s,74);
    cout<<"Original Stack:"<<endl;
    display(s);
 stack <int>new1= sortedstack(s);
 cout<<"Sorted Stack:"<<endl;
  display(new1);
    
    return 0;
}
