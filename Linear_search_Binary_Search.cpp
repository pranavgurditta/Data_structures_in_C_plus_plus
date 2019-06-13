 
#include<iostream.h>
#include<conio.h>
template<class T>
class search
{
T arr[100];
int n;
public:
 int linear(T n);
 int binary(T n);
 void enter();
 };

 template<class T>
 void search<T>::enter()
 {
 cout<<"Enter the number of elements you want to store"<<endl;
 cin>>n;
 cout<<"Enter the elements"<<endl;
 for(int i=0;i<n;i++)
 cin>>arr[i];
}
 template<class T>
 int  search<T>::linear(T no)
 {
 for(int i=0;i<n;i++)
 {
 if(arr[i]==no)
 return (i+1);
 }
 return 0;
 }
 template<class T>
 int search<T>::binary(T no)
 {
 int mid=0;
 int lb=0;
int ub=n-1;
while(lb<=ub)
{
mid=(lb+ub)/2;
if(arr[mid]==no)
return (mid+1);
else if(arr[mid]>no)
ub=mid-1;
else
lb=mid+1;
}
return 0;
}

 void main()
 {
 clrscr();
 search<int> o;
 int l;
 do
 {
 cout<<"Enter 1 to do linear search and 2 to do binary search"<<endl;
 cin>>l;
 int k,q;
 switch(l)
 {
 case 1:
 o.enter();
 cout<<"Enter the element to be searched"<<endl;
 cin>>k;
 q=o.linear(k);
 if(q!=0)
 cout<<"Element found at position "<<q<<endl;
 else
 cout<<"Element not found"<<endl;
 break;
 case 2:
 cout<<"The elements have to be inserted in ascending order only"<<endl;
 o.enter();
 cout<<"Enter the element to be searched"<<endl;
 cin>>k;
  q=o.binary(k);
 if(q!=0)
 cout<<"Element found at position "<<q<<endl;
 else
 cout<<"Element not found"<<endl;
}
cout<<"Press 0 to continue"<<endl;
cin>>l;
}while(l==0) ;
getch();

 }
