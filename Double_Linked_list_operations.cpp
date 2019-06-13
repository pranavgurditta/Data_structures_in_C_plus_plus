
#include<iostream.h>
#include<conio.h>
struct node
{
int data;
node* prev;
node* next;
};

class dll
{
node* head;
node* tail;
public:
dll()
{
head=NULL;
tail=NULL;

}

node* insertatend();
node* insertatbeg();
node* insertanywhere();
void display();
node* deleteatbeg();
node* deleteatend();
node* deleteatmiddle();
node* searching(int n, node*x );
void reverse();
};
void dll::reverse()
{
node* r;
r=tail;
while (r!=NULL)
{
cout<<r->data<<" , ";
r=r->prev;
}
cout<<endl;
}
node* dll::insertanywhere()
{
       int l;
node *item=new node;
cout<<"Enter the element to be inserted"<<endl;
cin>>l;
int nl;
cout<<"Enter the data before which insertion is to be performed"<<endl;
cin>>nl;
if(head==NULL )
{
cout<<"List is empty hence inserting at front"<<endl;

head=tail=item;
head->prev=NULL;
tail->next=NULL;
}
else
{
 node* t2=NULL;
 node *t1=head;
while((t1->data!=nl)&&(t1!=NULL))
{

    t2=t1;
    t1=t1->next;

    }
    if(t1==NULL)

    {
cout<<"Cannot insert as element before which insertion is to be done not found"<<endl;
     return head;
     }



     else
     {

item=new node;
item->data=l;
item->next=t1;
t1->prev=item;
t2->next=item;
item->prev=t2;
}
}
return head;

}
node* dll::deleteatmiddle()
{
       int l;
cout<<"Enter the element to be deleted"<<endl;
cin>>l;
if(head==NULL )
{
cout<<"List is empty hence cannot delete"<<endl;
 }
else
{
 node* t2=NULL;
 node *t1=head;
while((t1->data!=l)&&(t1!=NULL))
{

    t2=t1;
    t1=t1->next;

    }
    if(t1==NULL)

    {
cout<<"Cannot delete as element not found"<<endl;
     return head;
     }



     else
     {

t2->next=t1->next;
t1->next->prev=t2;
}
}
return head;

}
node* dll::insertatbeg()
{

node *item=new node;
cout<<"Enter the elements to be inserted"<<endl;
cin>>item->data;

if(head==NULL)
{
head=tail=item;
head->prev=NULL;
tail->next=NULL;
}
else
{
item->next=head;
head->prev=item;
head=item;
}
return head;
}



node*  dll::insertatend()
{

node *item=new node;
cout<<"Enter the elements to be inserted"<<endl;
cin>>item->data;

if(head==NULL)
{
head=tail=item;
head->prev=NULL;
tail->next=NULL;
}
else
{
tail->next=item;
item->prev=tail;
tail=item;
}
return head;
}

node* dll::searching(int n,node* h)
{
node* k=new node;
k=h;
while(k!=NULL)
{
if(k->data==n)
return k;
k=k->next;
}

return k;
}
void dll::display()
{
node* y=NULL;
y=head;
cout<<"The list is "<<endl;
while(y!=NULL)
{
cout<<y->data<<endl;
y=y->next;
}

}

node* dll::deleteatend()
{
if(head==NULL)
{
cout<<"The list is empty and there is nothing to delete"<<endl;
return NULL;
}
else
{
node* t=tail;
tail=tail->prev;
tail->next=NULL;
delete t;

}
return head;
}

node* dll::deleteatbeg()
{
if(head==NULL)
{
cout<<"The list is empty and there is nothing to delete"<<endl;
return NULL;
}
else
{
node* t=head;
head=head->next;
head->next->prev=NULL;
delete t;

}
return head;
}



void main()
{
clrscr();

int k;
dll o;
node* p=NULL;
do
{
int n  ;

cout<<"Enter 1 to insert, 2 to display , 3 to search , 4 to delete , 5 to reverse"<<endl;
cin>>n;
switch(n)
{
case 1:
int t;
cout<<"Enter 1 to insert at beginning , 2 to insert anywhere , 3 to insert at end"<<endl;
cin>>t;
switch( t)
{
case 1:
p=o.insertatbeg();
break;
case 2:
p=o.insertanywhere();
break;
case 3:
p=o.insertatend();
break;

default:
cout<<"wrong choice"<<endl;
}
break;
case 2:
o.display();
break;
case 3:
cout<<"Enter no to search"<<endl;
node* ok=new node;
cin>>ok->data;
ok=o.searching(ok->data,p);
if(ok!=NULL)
cout<<"FOUND"<<endl;
else
cout<<"NOT FOUND"<<endl;
break;
case 4:
cout<<"Enter 1 to delete at beginning , 2 to delete from middle , 3 to delete from end"<<endl;
cin>>k;
switch(k)
{
case 1:
p=o.deleteatbeg();
break;
case 2:
p=o.deleteatmiddle();
break;
case 3:
p=o.deleteatend();
break;
default:
cout<<"wrong choice"<<endl;
}
break;

case 5:
cout<<"The reversed list is "<<endl;
o.reverse();
 break;
default:
cout<<"wrong choice"<<endl;
}


cout<<endl<<"enter 0 to continue";
cin>>k;
}while(k==0);
getch();
}
