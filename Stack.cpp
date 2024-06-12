#include<iostream>
#define MAX_SIZE  5
using namespace std;

int STACK[MAX_SIZE] , top = - 1 ;

void push(int x )
{
    if(top == MAX_SIZE - 1)
    {
        cout<<"\n\tStack is Full! Insertion is not possible"<<endl;
    }
    else
    {
        top ++ ;
        STACK[top] = x ;
        cout<<"\n\t"<<x<<" Pushed at Stack Top"<<endl;
    }
}
void pop()
{
    if(top == -1 )
    {
        cout<<"\n\tStack is empty..."<<endl;
    }
    else
    {
      cout<<"\n\t"<<STACK[top]<< " Poped from Stack..."<<endl;
      top -- ;
    }
}

void display ()
{

    if(top == -1 )
    {
     cout<<"\n\tStack is empty..."<<endl;
    }
    else
    {
        cout<<"\n\tStack is: "<<endl;
        cout<<"\n\tIndex\tSTACK"<<endl;
    for(int i = top ; i >= 0 ; i--)
    {
        cout<<"\t"<<i<<"\t"<<STACK[i]<<endl;
    }
}

}
int main()
{

int choice  , n;

while(1)
{


cout<<"\n\n\t*** *** STACK MENU *** ***"<<endl;
cout<<"\n\t 1: For PUSH"<<endl;
cout<<"\n\t 2: For POP"<<endl;
cout<<"\n\t 3: For Display Stack"<<endl;
cout<<"\n\tEnter Your Choice : ";
cin>>choice;

switch(choice)
{

case 1:
    cout<<"\n\tEnter an Integer Value : ";
    cin>>n ;
    push(n);
    break ;

case 2:
    pop();
    break;

case 3:
    display();
    break;

default:
    cout<<"\n\tInvalid Choice"<<endl;
}
}
    return 0 ;
}
