#include<iostream>
using namespace std;

int main()
{
    int arr[50] , n , max  ;

    cout<<"How many elements you want to enter in an Array : ";
    cin>>n ;

    cout<<"\nPlease input " <<n<< " elements in Array : \n";

    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter value at index ["<<i<<"]: ";
        cin>>arr[i] ;
    }
    max = arr[0];
    for(int i = 0 ; i < n ; i++)
    {
        if( arr[i] > max)
            max = arr[i];
    }
    cout<<"\nMaximum Number in Array is : " <<max<<endl ;
    return 0 ;
}
