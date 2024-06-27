        /*
            Write a C++ program that inputs N Numbers of Array Elements and Prints the
            Array elements in Input Order and Reverse Order. 
        */
        #include<iostream>
        using namespace std;

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

            cout<<"\n\nReverse Array  : "; 
            for(int i = n - 1 ; i >= 0 ; i--)
            {
                cout<<arr[i]<< "  ";
            }

            return 0 ;
        }