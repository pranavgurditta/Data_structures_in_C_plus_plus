
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
class csll
{
public:

node<T>* h;
node<T>* end;
csll()
{
end=h=NULL;
}
node<T>* insert();
node<T> * deleted();
void display(node<T> *);
node<T>* reverse();
int search(node<T> *,T d);
};
template<class T>
node<T>* csll<T>::insert()
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
	end->next=h;

break;
case 2:

end->next=NULL;
end->next=item;
end=item;
item->next=h;
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
	end->next=h;
	}
	else
	{

	node<T> *r;
	node<T> * k=h;
	 while ((k->data!=t) && (k->next!=h))
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
node<T>* csll<T>::deleted()
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
		end->next=h;
		delete kh;

	       }
		return h;
		}

		else
		{


		node<T> *r=NULL;
		node<T> *kh=NULL;
		for(kh=h;(kh->next!=h);kh=kh->next)
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
void csll<T>::display(node<T> * h)
{
node<T> *t=NULL;
t=h;
if(t)
{
cout<<"DATA IS "<<endl;
while(t)
{
cout<<t->data<<endl;
t=t->next;
if(t==h)
return;
}
}
}


template<class T>
int csll<T>::search(node<T>* h,T g)
{
node<T> *y=NULL;
y=h;
 while(y->next!=h)
 {
 if(y->data==g)
 {
 return 1;
 }
 y=y->next;
 }
 return  0;
 }
 template<class T>
 node<T>* csll<T>::reverse()
 {
 node<T>* current=h;
 node<T>* result=NULL;
 node<T>* next;
 while(current!=NULL)
 {
  next=current->next;
 current->next=result;
 result=current;
 current=next;
 if(current==h)
 break;
 }
 h->next=result;
 h=result;
 return h;
 }




void main()
{
csll<int> o;
clrscr();
int n=0;
node<int> * l=NULL;
while(n==0)
{
cout<<"1 to insert, 2 to delete, 3 to display,4 to search , 5 to reverse "<<endl;
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
default:
cout<<"Wrong option entered"<<endl;
}
cout<<"Enter 0 to continue"<<endl;
cin>>n;
}

getch();
}
