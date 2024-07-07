#include<iostream>
using namespace std;

int main()
{
    int n , start, end , mid , item , loc = -1 ;

    cout<<"Enter Size of the Array : ";
    cin>>n ;

    int arr[n] ; 

    cout<<"\nEnter " <<n<< " Elements in the Array\n\n";

    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter Element at index arr["<<i<<"] : ";
        cin>>arr[i] ;
    }

    cout<<"\nEnter Data Element to be Search : = ";
    cin>>item ;

    start = 0 ; // start index
    end = n - 1  ; // last index

    while( start <= end )
    {
       mid = (start + end) / 2 ;
        if(arr[mid] == item)
        {
            loc = mid ;
            break;
        }
        //if data value less than array of mid
        else if( item < arr[mid] )
        {
            end = mid - 1 ;
        }
        else
        {
            start = mid + 1 ;
        }
    }
    if( loc == -1 )
    {
        cout<<"\n"<<item<< " is not found in the Array"<<endl;
    }
    else
    {
        cout<<"\nSearch Element:  "<<item<< " :  Found at Location:  "<<loc<< endl;
    }

    return 0 ;
}
