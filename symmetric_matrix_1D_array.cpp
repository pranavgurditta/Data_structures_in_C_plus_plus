
#include <iostream.h>
#include <conio.h>


class Transpose
{
    int *a;
    int size;

public:
       Transpose(int size=0)
       {
        if(size>0)
        {
            this->size=size;
            a=new int [size];
        }
        else
        {
	    cout<<"Enter a non-zero positive size ";
        }
       }
       void set_values(int rows)
       {
           cout<<"Enter lower triangle elements "<<endl;
	   for(int i=0; i<size-rows; i++)
           cin>>a[i];

           cout<<"Enter diagonal elements"<<endl;
	   for( i=size-rows;i<size;i++)
           cin>>a[i];
       }
       int get_values(int i,int j,int rows)
       {
        if(i<0 || i>=size || j<0 ||j>=size)
	    cout<<"index out of bounds";
        else if(i>j)
            return a[i*(i-1)/2+j];
        else if(i<j)
            return a[j*(j-1)/2+i];
        else
            return a[size-rows+i];
       }
};
int main()
{

    int row,col;
    char choice='y';
    while(choice=='y'||choice=='Y')
    {
    cout<<"Enter the number of rows ";
    cin>>row;
    cout<<"Enter the number of columns ";
    cin>>col;

    if(row!=col)
    cout<<"Should be a square matrix ";

    Transpose T((row*(row-1)/2)+row);
    T.set_values(row);


    cout<<"Elements of matrix are"<<endl;
    for(int i=0;i<row;i++)
    {
	for(int j=0;j<col;j++)
	{
	 cout<<T.get_values(i,j,row)<<" ";
	}
	cout<<endl;
    }
    cout<<"Enter y or Y to continue with another number ";
    cin>>choice;
    }

    return 0;
}
