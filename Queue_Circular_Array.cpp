
#include<iostream.h>
#include<conio.h>
template<class T>
class queue
{
T arr[100];
public:
queue()
{
f=r=-1;
}
int n;

int f;
int r;
void push();
T pop();
void display();
};
template<class T>
void queue<T>::push()
{
T ele;
cout<<"Enter the element to be entered"<<endl;
cin>>ele;

if(((f== 0)&&(r==n-1)) || (f==r+1))
{
cout<<"QUEUE OVERFLOW"<<endl;
}
else
{
if((f==-1) &&(r==-1))
f=r=0;
else if(r==n-1)
r=0;
else
r++;

arr[r]=ele;

}
}
template<class T>
T queue<T>::pop()
{
T val;
if((f==-1)&& (r==-1))
{
cout<<"QUEUE UNDERFLOW , no elements to be deleted"<<endl;
}
else
{
	val=arr[f];

	if(f==r)
	{

	f=r=-1;
	}
	else if(f==n-1)
	{


	f=0;
	}

	else
	{


	 f=f+1;      }
   }

return (val);
}
template<class T>
void queue<T>::display()
{
cout<<"The elements of the queue are "<<endl;
if(f<=r)
{
for(int i=f;i<=r;i++)
{
cout<<arr[i]<<endl;
}
}
else
{
for(int i=f;i<n;i++)
cout<<arr[i]<<endl;

for(i=0;i<=r;i++)
cout<<arr[i]<<endl;
}
}
void main()
{
clrscr();
queue<int> o;
cout<<"Enter the number of elements"<<endl;
cin>>o.n;
int k=0;
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
