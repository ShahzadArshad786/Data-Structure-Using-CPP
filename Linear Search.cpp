#include<iostream>
using namespace std;

int main()
{
    int arr[50] , n , item , loc = -1 ;

    cout<<"How many elements you want to enter in an Array : ";
    cin>>n ;

    cout<<"\nPlease input " <<n<< " elements in Array : \n";

    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter value at index ["<<i<<"]: ";
        cin>>arr[i] ;
    }

    cout<<"\nEnter a value to search : " ;
    cin>>item ;

    for(int i = 0 ; i < n ; i++)
    {
        if(item == arr[i])
        {
            loc = i ;
            break ;
        }
    }
    if( loc == -1 )
    {
        cout<<"\n"<<item<< " is not found"<<endl;
    }
    else
    {
        cout<<"\n"<<item<< " is found at "<<loc<<" index "<< endl;
    }

    return 0 ;
}
