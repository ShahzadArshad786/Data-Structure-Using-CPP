        /*
            Write a C++ Program that inputs N Numbers of Array Elements, Passes the 
            Array to a Function that Display the Array Elements in Reverse Order. 
        */

        #include<iostream>
        using namespace std;

        void ReverseArray(int arr[] , int size);

        int main()
        {
            int n ;

            cout<<"Enter the Size of an Array : ";
            cin>>n ;

            int arr[n];
            
            cout<<"\nPlease input " <<n<< " elements in the Array\n\n";

            for(int i = 0 ; i < n ; i++)
            {
                cout<<"Enter Array Element at index ["<<i<<"] : ";
                cin>>arr[i] ;
            }

            cout<<"\nOriginal Array : "; 
            for(int i = 0 ; i < n ; i++)
            {
                cout<<arr[i]<< "  ";
            }

            ReverseArray(arr , n); 
        
            return 0 ;
        }
        void ReverseArray(int arr[] , int size)
        {
            cout<<"\n\nReverse Array  : "; 
            for(int i = size - 1 ; i >= 0 ; i--)
            {
                cout<<arr[i]<< "  ";
            }
        }