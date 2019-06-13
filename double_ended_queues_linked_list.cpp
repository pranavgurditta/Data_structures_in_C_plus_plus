#include<iostream.h>
#include<conio.h>
class node
{
public:
    int data;
    node* next;
    node* prev;
};
class deque
{
    node* start;
    node* end;

public:

    deque()
    {
        start=end=NULL;
    }

    int  remove_front();
    void add_front();
    void add_rear();
    int remove_rear();
    void display();
    int getfront();
    int getrear();
}   ;
void deque::add_front()
{
    int k;
    cout<<"Enter the element to be added"<<endl;
    cin>>k;
    node* item;
    item=new node;
    item->data=k;
    item->prev=NULL;
    item->next=NULL;
    if(start==NULL)
    {
        start=end=item;
    }
    else
    {
        item->next=start;
        start->prev=item;
        start=item;
    }
}
void deque::display()
{
    node* t=NULL;
    t=start;
    cout<<"The data is "<<endl;
    while(t!=NULL)
    {
        cout<<t->data<<endl;
        t=t->next;
    }
}

void deque::add_rear()
{

    int k;
    cout<<"Enter the element to be added"<<endl;
    cin>>k;
    node* item;
    item=new node;
    item->data=k;
    item->prev=NULL;
    item->next=NULL;
    if(start==NULL)
    {
        start=end=item;
    }
    else
    {

        end->next=item;
        item->prev=end;
        end=item;
    }
}
int deque::remove_front()
{   int u;
    if(start==NULL)
        cout<<"DEQUEUE EMPTY , hence cannot remove front."<<endl;
    else if(start==end)
    {   u=start->data;
        start=end=NULL;
    }
    else
    {   u=start->data;
        node* temp=start;
        start=start->next;
        start->prev=NULL;
        delete temp;
    }
    return u;
}

int deque::remove_rear()
{
    int u;
    if(start==NULL)
        cout<<"DEQUEUE EMPTY , hence cannot remove rear."<<endl;
    else if(start==end)
    {
        u=end->data;
        start=end=NULL;
    }
    else

    {
        u=end->data;
        node* temp=end;
        end=end->prev;
        end->next=NULL;
        delete temp;
    }
    return u;
}

int  deque::getfront()
{
    return(start->data);
}
int deque::getrear()
{
    return(end->data);
}


void main()
{
    deque o;
    int k=0;
    clrscr();
    while(k==0)
    {
        cout<<" 1 to add at front , 2 to add at rear , 3 to display"<<endl;
        cout<<"4 to remove from front , 5 to remove from rear end"<<endl;
        cout<<"6 to know the front element ,  7 to know the rear element"<<endl;
        cin>>k;
        switch(k)
        {
        case 1:
            o.add_front();
            break;
        case 2:
            o.add_rear();
            break;
        case 3:
            o.display();
            break;
        case 4:
            cout<<"The removed element is "<<o.remove_front()<<endl;
            break;
        case 5:

            cout<<"The removed element is "<<o.remove_rear()<<endl;
            break;
        case 6:

            cout<<"The element at the front is "<<o.getfront()<<endl;
            break;
        case 7:
            cout<<"The element at the end is "<< o.getrear()<<endl;
            break;
        default:
            cout<<"Wrong option entered"<<endl;
        }


        cout<<"Enter 0 to continue"<<endl;
        cin>>k;
    }
    getch();
}
