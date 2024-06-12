#include<iostream>
using namespace std;

int main()
{
    int arr[50] , n , start, end , mid , item , loc = -1 ;

    cout<<"How many elements you want to enter in an Array : ";
    cin>>n ;

    cout<<"\nPlease input " <<n<< " elements in Ascending or Descending Order : \n";

    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter value at index ["<<i<<"]: ";
        cin>>arr[i] ;
    }

    cout<<"\nEnter Value to Search : = ";
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
        cout<<"\n"<<item<< " is not found"<<endl;
    }
    else
    {
        cout<<"\nSearch Element:  "<<item<< " :  Found at Location:  "<<loc<< endl;
    }

    return 0 ;
}
