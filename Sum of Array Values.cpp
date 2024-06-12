#include<iostream>
using namespace std;

int main()
{
    int arr[50] , n , sum = 0  ;

    cout<<"How many elements you want to enter in an Array : ";
    cin>>n ;

    cout<<"\nPlease input " <<n<< " elements in Array : \n";

    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter value at index ["<<i<<"]: ";
        cin>>arr[i] ;
    }

    for(int i = 0 ; i < n ; i++)
    {
        sum = sum+ arr[i] ;
    }
    cout<<"\nSum of Array is : " <<sum<<endl ;
    return 0 ;
}
