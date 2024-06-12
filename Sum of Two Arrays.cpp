#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int arr1[50] , arr2[50] , arr3[50] , n , m ;

    cout<<"How many elements you want to enter in 1st Array : ";
    cin>>n ;

    cout<<"\nPlease input " <<n<< " elements in 1st Array : \n";

    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter value at index ["<<i<<"]: ";
        cin>>arr1[i] ;
    }

    jump:
    cout<<"\n\nHow many elements you want to enter in 2nd Array : ";
    cin>>m ;

     if ( m > n || m < n )
    {
        cout<< "Please enter equal number of elements in both Arrays.."<<endl;
        goto jump;
    }
    else
    {
        cout<<"\nPlease input " <<m<< " elements in 2nd Array : \n";

    for(int j = 0 ; j < m ; j++)
    {
        cout<<"Enter value at index ["<<j<<"]: ";
        cin>>arr2[j] ;
    }

    for(int k = 0 ; k < n ; k++)
    {
        arr3[k] = arr1[k] + arr2[k] ;
    }
    cout<<"\n\nSum of Two Array is : \n\n";
    cout<<"1st Array\t2nd Array\tSum"<<endl;
    for(int i = 0 ; i < n ; i++)
    {

        cout<<setw(5)<<arr1[i]<<setw(16)<<arr2[i]<<setw(13)<<arr3[i] << endl ;
    }

}
    return 0 ;
}
