#include<iostream>
using namespace std;

int main()
{
    int arr[100] , n , temp ;

    cout<<"How many elements you want to enter in an Array : ";
    cin>>n ;

    cout<<"\nPlease input " <<n<< " elements in Array: \n";

    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter value at index ["<<i<<"]: ";
        cin>>arr[i] ;
    }

    cout<<"\nInput Array is : ";
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" " ;
    }

    for(int i = 0 ; i < n  ; i++)
    {
        for(int j = 0 ; j < (n - i - 1) ; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j] ;
                arr[j] = arr[ j + 1] ;
                arr[j+1] = temp ;
            }
        }
    }

    cout<<"\n\nSorted Array is : ";
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" " ;
    }

    return 0 ;
}
