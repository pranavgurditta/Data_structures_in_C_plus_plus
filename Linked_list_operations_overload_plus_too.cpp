
#include<iostream.h>
#include<conio.h>
template<class T>
class node
{
public:
 node *next;
T  data;
};

template<class T>
class sll
{

public:

node<T>* h;
node<T>* end;
sll()
{
end=h=NULL;
}
node<T>* insert();
node<T> * deleted();
void display(node<T> *);
node<T>* reverse();
int search(node<T> *,T d);
void concat(sll<T> o);
sll operator+(sll<T> o);
};
template<class T>
 sll<T> sll<T>:: operator+(sll<T> p)
{

int n1=0;
cout<<"Enter the second list to concatenate"<<endl;
while(n1==0)
{
    cout<<"1 to insert, 2 to delete, 3 to display"<<endl;
cin>>n1;

cout<<endl;
switch(n1)
{

case 1:
p.h=p.insert();
break;
case 2:

p.deleted();
break;
case 3:

p.display(p.h);
break;
case 4:
int f;
cout<<"Enter the element to be searched "<<endl;
cin>>f;
if(p.search(p.h,f)==1)
cout<<"Element is there in the list."<<endl;
else
cout<<"Element is not there in the list."<<endl;
break;
case 5:
p.h=p.reverse();
break;

}
cout<<"enter 0 to continue"<<endl;
cin>>n1;
}
return p;

}


template<class T>

node<T>* sll<T>::insert()
{
int tail=0;
int k1;
T d;
cout<<"Enter 1 to insert at front , 2 to insert at end , 3 to insert before a specific element"<<endl;
cin>>k1;
cout<<"Enter the item to be inserted"<<endl;
cin>>d;
node<T> *item=NULL;
item=new node<T>;
item->next=NULL;
item->data=d;
if(h==NULL)
{
h=end=item;
tail++;
}
else
{

switch(k1)
{
	case 1:

	item->next=h;
	h=item;

break;
case 2:

end->next=item;
end=item;
break;
case 3:
T t;
cout<<"Enter the element before which insertion has to take place"<<endl;
cin>>t;
if(search(h,t)==1)
{
       {
	if(t==h->data)
	{

	item->next=h;
	h=item;
	}
	else
	{

	node<T> *r;
	node<T> * k=h;
	 while ((k->data!=t) && (k!=NULL))
			 {
			 r=k;
			 k=k->next;
			 }






	 r->next=item;
	item->next=k;

	}
       }
}
else
cout<<"Element before which insertion is to be done not found"<<endl;


break;

}


}
return h;
}

template<class T>
node<T>*  sll<T>::deleted()
{
T k;
if(h==NULL)
{
cout<<"Cannot delete as list is empty"<<endl;
return NULL;
}
else
{

cout<<"Enter the element to be deleted"<<endl;
cin>>k;
	if(search(h,k)==1)
	{

	node<T> *kh=NULL;

		 if(h->data==k)
		{
		if(h==end)
		{
		h=end=NULL;

		return NULL;

		}

		else
		{


		h->data=h->next->data;
		kh=h->next;
		h->next=h->next->next;
		delete kh;

	       }
		return h;
		}

		else
		{


		node<T> *r=NULL;
		node<T> *kh=NULL;
		for(kh=h;(kh!=NULL);kh=kh->next)
		 {
			 if(kh->data==k)
			 {
			 break;
			 }

			 r=kh;

		 }

		r->next=kh->next;

	       delete kh;
		 }




      }
      else
      {
      cout<<"NO such element exists in the list to be deleted"<<endl;
      }


 }
return h;
}
template<class T>
void sll<T>::display(node<T> * h)
{
if(h!=NULL)
{
cout<<"DATA IS "<<endl;
while(h!=NULL)
{
cout<<h->data<<endl;
h=h->next;
}
}
}


template<class T>
int sll<T>::search(node<T>* h,T g)
{
 while(h!=NULL)
 {
 if(h->data==g)
 {
 return 1;
 }
 h=h->next;
 }
 return  0;
 }
 template<class T>
 node<T>* sll<T>::reverse()
 {
 node<T>* current=h;
 node<T>* prev=NULL;
 node<T>* coming=NULL;

 while(current!=NULL)
 {
 coming=current->next;
 current->next=prev;
 prev=current;
 current=coming;
 }
 h=prev;
	return h;
 }


 template<class T>
 void sll<T>::concat(sll<T> o)
{

sll<T> p;
node<T> *c=NULL;
int n1=0;
cout<<"Enter the second list to concatenate"<<endl;
while(n1==0)
{
    cout<<"1 to insert, 2 to delete, 3 to display, 4 to search, 5 to reverse"<<endl;
cin>>n1;

cout<<endl;
switch(n1)
{

case 1:
c=p.insert();
break;
case 2:

p.deleted();
break;
case 3:

p.display(c);
break;
case 4:
int f;
cout<<"Enter the element to be searched "<<endl;
cin>>f;
if(p.search(c,f)==1)
cout<<"Element is there in the list."<<endl;
else
cout<<"Element is not there in the list."<<endl;
break;
case 5:
c=p.reverse();
break;

}
cout<<"enter 0 to continue"<<endl;
cin>>n1;
}
node<T> *thirdhead=o.h;
node<T> *third=thirdhead;
while(third->next!=NULL)
{
third=third->next;
}
third->next=p.h;
while(third->next!=NULL)
{
third=third->next;
}
cout<<"The concatenated list is "<<endl;
while(thirdhead!=NULL)
{
cout<<thirdhead->data<<endl;
thirdhead=thirdhead->next;
}

cout<<"Exiting the concatenated and second list"<<endl;


}



void main()
{

	 sll<int> p;
node<int> *c=NULL;
sll<int> o;
clrscr();
int n=0;
node<int> * l=NULL;
while(n==0)
{
cout<<"1 to insert, 2 to delete, 3 to display"<<endl;
cout<<"4 to search , 5  to reverse, 6 to concat normally"<<endl;
cout<<"7 to concat using operator overloading"<<endl;

cin>>n;

cout<<endl;
switch(n)
{

case 1:
l=o.insert();
break;
case 2:

o.deleted();
break;
case 3:

o.display(l);
break;
case 4:
int f;
cout<<"Enter the element to be searched "<<endl;
cin>>f;
if(o.search(l,f)==1)
cout<<"Element is there in the list."<<endl;
else
cout<<"Element is not there in the list."<<endl;
break;
case 5:
l=o.reverse();
break;
case 6:
o.concat(o);
break;
case 7:
sll<int> k;
k=o+p;

node<int>*  thirdhead=o.h;
node<int>* third=thirdhead;
while(third->next!=NULL)
{
third=third->next;
}
third->next=k.h;
while(third->next!=NULL)
{
third=third->next;
}
cout<<"The concatenated list is "<<endl;
while(thirdhead!=NULL)
{
cout<<thirdhead->data<<endl;
thirdhead=thirdhead->next;
}

cout<<"Exiting the concatenated and second list"<<endl;
break;



default:
cout<<"Wrong option entered"<<endl;
}

o.end->next=NULL;
cout<<"Enter 0 to continue"<<endl;
cin>>n;
}

getch();
}

