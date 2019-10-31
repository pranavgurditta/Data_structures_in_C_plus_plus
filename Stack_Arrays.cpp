//Program to implement stack as an array
#include<iostream.h>
#include<conio.h>
template<class T>
class stack
{
int top;
T arr[100];
public:
int n;
stack()
{
top=-1;
}

void push(int n);
T pop();
void display();
};
template<class T>
void stack<T>::push(int n)
{
T k;
cout<<"Enter the element to be pushed: "<<endl;
cin>>k;
if(top==n-1)
cout<<"Stack Overflow!!"<<endl;
else
{
top++;
arr[top]=k;
}
 }
template<class T>
T stack<T>::pop()
{
if(top==-1)
{
cout<<"stack underflow"<<endl;
return -9999;
}
else
{
T r=arr[top];
top--;
return r;
}
}
template<class T>
void stack<T>::display()
{
cout<<"The stack is "<<endl;
for(int i=0;i<n;i++)
{
cout<<arr[i]<<endl;
}
}

void main()
{
clrscr();
stack<int> o;
int k=0;
cout<<"Enter the maximum no of elements to be stored in the stack"<<endl;
cin>>o.n;
 while(k==0)
 {
 cout<<" 1 for push , 2 for pop, 3 to display"<<endl;
 cin>>k;
 switch(k)
 {
 case 1:
 o.push(o.n);
 break;
 case 2:
 cout<<"The popped out element is"<<o.pop()<<endl;
 break;
 case 3:
 o.display();
 break;
 }
 cout<<"Enter 0 to continue"<<endl;
 cin>>k;
 }
getch();
 }

