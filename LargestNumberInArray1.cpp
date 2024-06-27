        /*
            Write a C++ program that inputs N Numbers of Array Elements, Passes the Array 
            to a function and then function find the Largest Element from the Array and return 
            the Largest Element to main(). 
        */
        #include<iostream>
        using namespace std;

        int LargestInArray(int arr[] , int n);

        int main()
        {
            int n , max  ;

            cout<<"Enter the Size of an Array : ";
            cin>>n ;

            int arr[n] ; 

            cout<<"\nPlease input " <<n<< " Elements in the Array : \n\n";

            for(int i = 0 ; i < n ; i++)
            {
                cout<<"Input Array Element at index arr["<<i<<"] : ";
                cin>>arr[i] ;
            }

            cout<<"\nOriginal Array  : ";
            for(int i = 0 ; i < n ; i++)
            {
               cout<<arr[i]<< "  " ;
            }
            
            max = LargestInArray(arr , n );
            
            cout<<"\nLargest Element : " <<max<<endl ;
            return 0 ;
        }

        int LargestInArray(int arr[] , int n)
        {
            int max ; 
            max = arr[0];

            for(int i = 0 ; i < n ; i++)
            {
                if( arr[i] > max)
                    max = arr[i] ;
            }
            return max ; 
        }
