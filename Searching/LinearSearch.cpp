#include<iostream>
using namespace std;

int main()
{
    int n , item , loc = -1 ;

    cout<<"Enter Size of the Array : ";
    cin>>n ;

    int arr[n] ;

    cout<<"\nEnter " <<n<< " Elements in the Array \n\n";

    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter value at index arr["<<i<<"] : ";
        cin>>arr[i] ;
    }

    cout<<"\nEnter Data Element to be Search : " ;
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
        cout<<"\n"<<item<< " is not found in the Array"<<endl;
    }
    else
    {
        cout<<"\n"<<item<< " is found at index "<<loc<<endl;
    }

    return 0 ;
}
