
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
 
class poly
{
int exp;
int coeff;
poly *next;
public:
void input1();
void input2();
void display();
void add();
};
poly *head1,*head2,*head3;
 
void poly::input1() //Input for Polynomial 1
{
int degree;
cout<<endl<<"degree of d polynomial : ";
cin>>degree;
int c,e,i;
for(i=0;i<=degree;i++)
{
m:cout<<endl<<"exponent : ";
cin>>e;
if(e>degree)
{
cout<<endl<<"invalid exp!!! ";
goto m;
}
cout<<endl<<"coeff : ";
cin>>c;
poly *temp1;
temp1=head1;
if(temp1==NULL)
{
temp1=new poly;
temp1->exp=e;
temp1->coeff=c;
temp1->next=NULL;
head1=temp1;
}
else
{
temp1=head1;
poly *r;
r=new poly;
while(temp1->next!=NULL)
{
temp1=temp1->next;
}
r->exp=e;
r->coeff=c;
temp1->next=r;
r->next=NULL;
}
}
}
 
void poly::input2()//Input for Polynomial 2
{
int degree;
cout<<endl<<"degree of d polynomial : ";
cin>>degree;
int c,e,i;
for(i=0;i<=degree;i++)
{
m:cout<<endl<<"exponent : ";
cin>>e;
if(e>degree)
{
cout<<endl<<"invalid exp!!! ";
goto m;
}
cout<<endl<<"coeff : ";
cin>>c;
poly *temp2;
temp2=head2;
if(temp2==NULL)
{
temp2=new poly;
temp2->exp=e;
temp2->coeff=c;
temp2->next=NULL;
head2=temp2;
}
else
{
temp2=head2;
poly *r;
r=new poly;
while(temp2->next!=NULL)
{
temp2=temp2->next;
}
r->exp=e;
r->coeff=c;
temp2->next=r;
r->next=NULL;
}
}
}
 
void poly::add() //Addition of the polynomials
{
if(head1==NULL)
head3=head2;
if(head2==NULL)
head3=head1;
if((head1!=NULL)&&(head2!=NULL))
{
poly *t1,*t2;
t1=head1;
t2=head2;
int newcoeff,newexp;
while((t1!=NULL)&&(t2!=NULL))
{
if(t1->exp==t2->exp)
{
newcoeff=t1->coeff+t2->coeff;
newexp=t1->exp;
t1=t1->next;
t2=t2->next;
}
if(t1->exp<t2->exp)
{
newcoeff=t2->coeff;
newexp=t2->exp;
t2=t2->next;
}
if(t1->exp>t2->exp)
{
newcoeff=t1->coeff;
newexp=t1->exp;
t1=t1->next;
}
if(newcoeff!=0)
{
poly *r,*t3;
t3=head3;
r=new poly;
r->coeff=newcoeff;
r->exp=newexp;
r->next=NULL;
if(head3==NULL)
{
head3=r;
cout<<endl<<head3->coeff<<"    "<<head3->exp<<endl;
}
else
{
t3=head3;
while(t3->next!=NULL)
{
t3=t3->next;
}
t3->next=r;
cout<<endl<<t3->coeff<<" "<<t3->exp<<endl;
}
}
}
}
}
 
void poly::display() //Display the results
{
if(head1!=NULL)
{
poly *temp;
temp=head1;
cout<<endl<<"--poly1--"<<endl<<endl;
while(temp->next!=NULL)
{
cout<<temp->coeff<<"y^"<<temp->exp<<" + ";
temp=temp->next;
}
cout<<temp->coeff<<"y^"<<temp->exp;
}
if(head2!=NULL)
{
poly *temp1;
temp1=head2;
cout<<endl<<endl<<"--poly2--"<<endl<<endl;
while(temp1->next!=NULL)
{
cout<<temp1->coeff<<"y^"<<temp1->exp<<" + ";
temp1=temp1->next;
}
cout<<temp1->coeff<<"y^"<<temp1->exp;
}
if(head3!=NULL)
{
poly *temp3;
temp3=head3;
cout<<endl<<endl<<"--sum--"<<endl<<endl;
while(temp3->next!=NULL)
{
cout<<temp3->coeff<<"y^"<<temp3->exp<<" + ";
temp3=temp3->next;
}
cout<<temp3->coeff<<"y^"<<temp3->exp;
}
}
 
void main()
{
poly t;
char ch;
clrscr();
cout<<"do u want enter polynomial expression 1 (y/n) :";
cin>>ch;
if(ch=='y')
    t.input1(); //function call
cout<<"do u want enter polynomial expression 2 (y/n) :";
cin>>ch;
if(ch=='y')
    t.input2();
t.add();
t.display();
getch();
}
 
