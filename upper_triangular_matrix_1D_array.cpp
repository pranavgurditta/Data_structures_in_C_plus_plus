
#include <iostream.h>
#include <conio.h>

class UpperTriangularMatrix
{
    int *arr;
    int size;

public:
       UpperTriangularMatrix(int size=0)
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
	   cout<<"Enter upper triangle elements "<<endl;
	   for(int i=0; i<size; i++)
	   cin>>arr[i];
       }
       int get_values(int i,int j)
       { if(i>=j)
	    return 0;
	else
	    return arr[j*(j-1)/2+i];
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

    UpperTriangularMatrix U(row*(row-1)/2); //no of elements for lower triangular matrix
    U.set_values(); //enter the elements

    cout<<"Elements of matrix are"<<endl;
    for(int i=0;i<row;i++)
    {
	for(int j=0;j<col;j++)
	{
	 cout<<U.get_values(i,j)<<" "; //display the matrix
	}
	cout<<endl;
    }
    cout<<"Enter y or Y to continue with another number ";
    cin>>choice;
    }
    getch();

    return 0;
}
