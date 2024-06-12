#include<iostream>
using namespace std;

int main()
{
    int arr[50] , n , item , temp[50] , j = 0 , chk = 0  ;

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
        if( item == arr[i] )
        {
           temp[j] = i ;
           j++ ;
           chk++ ;
        }
    }
    if( chk > 0 )
    {
        cout<<"\n"<<item<< " is found at Index Number : ";
        for(int i = 0 ; i < chk ; i++)
        {
            cout<<temp[i]<< "  ";
        }
        cout<<"\n\n";
    }
    else
    {
        cout<<"\n"<<item<< " is not found "<< endl;
    }

    return 0 ;
}
