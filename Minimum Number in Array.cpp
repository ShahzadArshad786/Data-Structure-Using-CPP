#include<iostream>
using namespace std;

int main()
{
    int arr[50] , n , min  ;

    cout<<"How many elements you want to enter in an Array : ";
    cin>>n ;

    cout<<"\nPlease input " <<n<< " elements in Array : \n";

    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter value at index ["<<i<<"]: ";
        cin>>arr[i] ;
    }
    min = arr[0];
    for(int i = 0 ; i < n ; i++)
    {
        if( arr[i] < min)
            min = arr[i];
    }
    cout<<"\nMinimum Number in Array is : " <<min<<endl ;
    return 0 ;
}
