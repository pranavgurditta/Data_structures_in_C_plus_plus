#include<iostream.h>
#include<conio.h>
template<class T>
class node
{
public:
node* next;
T data;
} ;
template<class T>
class stack
{
public:
node<T>* top;
stack()
{
top=NULL;
}
void push();
T pop();
void display();
};
template<class T>
void stack<T>::push()
{
T d;
node<T>* item=NULL;
item=new node<T>;
cout<<"Enter the element to insert"<<endl;
cin>>d;
item->data=d;
if(top==NULL)
{
     top=item;

}
else
{
item->next=top;
 top=item;

 }
 }
 template<class T>
 void stack<T>::display()
 {
 cout<<"The stack is "<<endl;
 for(node<T>* y=top;y!=NULL;y=y->next)
 cout<<y->data<<endl;
 }

 template<class T>
 T stack<T>:: pop()
 {
 if(top==NULL)
 return NULL;
 else
 {
 T i;
 i=top->data;
 top=top->next;
 return i;
 }
 }

 void main()
 {int k=0;
 clrscr();
 stack<int> o;
 while(k==0)
 {
 cout<<" 1 for push , 2 for pop, 3 to display"<<endl;
 cin>>k;
 switch(k)
 {
 case 1:
 o.push();
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






