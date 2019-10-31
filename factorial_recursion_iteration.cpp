//Program to find factorial of a number
#include<iostream.h>
#include<conio.h>
 /* Recursive Version */
 int recur(int n) 
  {
      if (n>1)
      {
       return n * recur(n-1)
      }
      else
      {
       return 1
      }
  }
   
 /* Iterative Version */
  int iteration(int n) 
  {
      int f = 1;
      int i;
      for(i = 1; i <= n; i++) 
     {
          f *= i;
      }
      return f;
  }
void main()
{
clrscr();
int k,n;
cout<<"Enter the value whose factorial is to be calculated"<<endl;
cin>>n;
cout<<"Enter 1 to find gcd by recursion and 2 to find gcd by iteration"<<endl;
 cin>>k;
 int p;
 switch(k)
 {
 case 1:

p=recur(n);
break;
case 2:
p=iteration(n);

break;
}
cout<<"The factorial is "<<p<<endl;
getch();
}
