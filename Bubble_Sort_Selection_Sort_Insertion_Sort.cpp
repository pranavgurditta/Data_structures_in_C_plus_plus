#include<iostream.h>
#include<conio.h>
template<class T>
class  sort
{
T* l;  int n;
public:
void enter();
void display(int t);
T* sort<T>:: bubblesort(T lis[],int n);
T* selectionsort(T lis[],int n);
T*  insertionsort(T lis[],int n);

};
template<class T>
T* sort<T>:: selectionsort(T lis[],int n)
{
for(int i=0;i<n;i++)
{
T min=lis[i];
int k=i;
for(int j=i+1;j<n;j++)

{
if(lis[j]<min)
{
min=lis[j];
k=j;
}
}
lis[k]=lis[i];
lis[i]=min;
}
return lis;
}



template<class T>
T* sort<T>:: insertionsort(T list[],int n){
for(int i=0;i<n;i++)
{
int temp=list[i];
int j=i-1;
while(j>=0 && list[j]>temp)
{
list[j+1]=list[j];
j--;
}
list[j+1]=temp;
}
return(list);
}


template<class T>
T* sort<T>:: bubblesort(T lis[],int n)
{
for(int i=0;i<n;i++)
{
for(int j=0;j<n-i-1;j++)
{
if(lis[j]>lis[j+1])
{
int t=lis[j];
lis[j]=lis[j+1];
lis[j+1]=t;
}
}
}
return lis;
}

template<class T>
void sort<T>:: enter()
{
  clrscr();
cout<<"Enter the no of elements to store:"<<endl;
cin>>n;
cout<<"Enter the elements"<<endl;
for(int i=0;i<n;i++)
cin>>l[i];
}
template<class T>
void sort<T>::display(int k)
{
cout<<"The elements in the desired sorted order are"<<endl;
switch(k)
{
case 1:
l=bubblesort(l,n);
break;
case 2:
l=selectionsort(l,n);
break;
case 3:
l=insertionsort(l,n);
break;
}

for(int i=0;i<n;i++)
cout<<l[i]<<endl;
}
void main()
{
int t;
sort<int> o;
      o. enter();
  cout<<"Enter 1 to do bubble sort , 2 to do selection sort"<<endl<<" and 3 to do insertion sort"<<endl;
   cin>>t;
      o. display(t);
      getch();
}
