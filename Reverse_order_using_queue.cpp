#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#define MAX 20
void show(int stack[], int size, int top);

 void show(int stack[],int size,int top)
 {
 int i;
 for(i=0;i<size;i++)
 {
  cout<<"\nValue at "<<top<<" is "<<stack[top]<<endl;
  top=top-1;
 }
 }
 void reverse(int stack[],int qu[],int *t,int *r,int *f)
 {
 *f=0;
 while(*t>-1)
 {
  *r=*r+1;
  qu[*r]=stack[*t];
  *t=*t-1;
 }
 while(*f<=*r)
 {
  *t=*t+1;
  stack[*t]=qu[*f];
  *f=*f+1;
 }
 }
 void main()
 {
 int size;
 int item,t,i,stack[MAX],quee[MAX];
 int top=-1,front=-1,rear=-1;
 clrscr();
 cout<<"Enter size of stack: ";
 cin>>size;
 for(i=0;i<size;i++)
 {
  top=top+1;
  cout<<"Enter value of for position "<<top<<": ";
  cin>>item;
  stack[top]=item;
 }
 show(stack,size,top);
 reverse(stack,quee,&top,&rear,&front);
 cout<<"\nAfter reverse, using additional queue: ";
 show(stack,size,top);
 getch();
}
