#include<iostream>
#include<iomanip>
#define MAX 5
using namespace std;

int QUEUE[MAX] , Front = -1 , Rear  = -1 ;

void Enqueue(int x )
{
if((Rear + 1) % MAX == Front )
{
   cout<<"\n\tQueue is Over Flow"<<endl;
}

else if(Front  == -1 && Rear == -1)
{
    Front = Rear = 0  ;
    QUEUE[Rear] = x ;

    cout<<"\n\tData Inserted: "<< QUEUE[Rear]<<endl;
}
else
{
        Rear = (Rear + 1) % MAX ;
        QUEUE[Rear] = x ;
        cout<<"\n\tData Inserted: "<< QUEUE[Rear]<<endl;
}
}
void Dequeue()
{
    int item ;
    if(Front == - 1 && Rear == - 1)
    {
        cout<<"\n\tQueue is empty"<<endl;

    }
    else if (Front == Rear )
    {
        item = QUEUE[Front] ;
        Front = Rear = -1 ;
        cout<<"\n\tData Removed at Front : " <<item<<endl;
    }
    else
      {
        item = QUEUE[Front] ;
        Front = (Front + 1) % MAX;
        cout<<"\n\tData Removed at Front : " <<item<<endl;
     }
}
void display ()
{
  int i ;
     if(Front == -1 && Rear == -1 )
    {
     cout<<"\n\tQueue is empty"<<endl;

    }
    else
    {
      cout<<"\n\tIndex | Data "<<endl;
        for( i = Front ; i !=  Rear ; i = (i + 1) % MAX)
    {
        cout<<"\t"<< setw(5)<<i<<" | " <<QUEUE[i];
        cout<<"\n";
    }
        cout<<"\t"<< setw(5)<<i<<" | " <<QUEUE[i];

    }
}

int main()
{
    int choice  , n;

while(1)
{
cout<<"\n\n\t*** *** QUEUE MENU *** ***"<<endl;
cout<<"\n\t 1: For EnQueue"<<endl;
cout<<"\n\t 2: For DeQueue"<<endl;
cout<<"\n\t 3: For Display"<<endl;
cout<<"\n\tEnter Your Choice : ";
cin>>choice;

switch(choice)
{

case 1:
    cout<<"\n\tEnter an Integer Value : ";
    cin>>n ;
    Enqueue(n);
    break ;

case 2:
    Dequeue();
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
