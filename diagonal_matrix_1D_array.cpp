#include <iostream.h>
#include<conio.h>
class DiagonalMatrix
{
    int *arr;
    int size;

public:
       DiagonalMatrix(int size=0)
       {
	if(size>0)
	{
	    this->size=size;
	    arr=new int [size];
	}
	else
	{
	    cout<<"Enter a non-zero positive size "<<endl;
	}
       }

       void set_values()
       {
	   cout<<"Enter the diagonal elements "<<endl;
	   for(int i=0; i<size; i++)
	   cin>>arr[i];
       }
       int get_values(int i,int j)
       { if(i==j)
	    return arr[i];
	else
	    return 0;
       }
};
int main()
{
clrscr();
    int row,col;
    char choice='y';
    while(choice=='y'||choice=='Y')
    {
    cout<<"Enter the number of rows ";
    cin>>row;
    cout<<"Enter the number of columns ";
    cin>>col;

    if(row!=col)
    cout<<"Enter a square matrix "<<endl;

    DiagonalMatrix D(row); //no of elements for lower triangular matrix
    D.set_values(); //enter the elements

    cout<<"Elements of matrix are"<<endl;
    for(int i=0;i<row;i++)
    {
	for(int j=0;j<col;j++)
	{
	 cout<<D.get_values(i,j)<<" "; //display the matrix
	}
	cout<<endl;
    }
    cout<<"Enter y or Y to continue with another number ";
    cin>>choice;
    }
    getch();
    return 0;

}
