#include<iostream.h>
#include<conio.h>

class term
{
public:
int value;
int r,c;
term * next;
term()
{
next=NULL;
}
};
void main()
{
clrscr();
int row,column;
int a[10][10];
cout<<"Enter the number of rows and columns "<<endl;
cin>>row;
cin>>column;
int d=0;
cout<<"Enter the elements"<<endl;
for(int i=0;i<row;i++)
{
for(int j=0;j<column;j++)
{
 cin>>a[i][j];
 }
 }
 cout<<"The matrix is "<<endl;
for( i=0;i<row;i++)
{
for(int j=0;j<column;j++)
{
 cout<<a[i][j]<<"   ";
 if(a[i][j]!=0)
 d++;
 }
 cout<<endl;
 }
 term arr[100];
 int co=0;
 cout<<"The non zero form is "<<endl;
    cout<<"ROW " << "\tCOLUMN " <<"\tVALUE"<<endl;
 for(i=0;i<d;)
 {
 for(int j=0;j<row;j++)
 {
 for(int k=0;k<column;k++)
 {
 if(a[j][k]!=0)
 {
   arr[i].value=a[j][k];
   arr[i].r=j;
   arr[i].c=k;



 cout<<arr[i].r<<"\t"<<arr[i].c<<"\t"<<arr[i].value<<"\t"<<endl;
  i++; }
   }
   }

   }

getch();
 }
