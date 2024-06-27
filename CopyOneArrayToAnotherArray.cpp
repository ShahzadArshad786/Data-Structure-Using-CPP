        /*
            Write a C++ program that inputs N Numbers of Array Elements and Copy the 
            Input Array Elements into 2nd Array. 
        */
        #include<iostream>
        using namespace std;

        int main()
        {
            int n ;

            cout<<"Enter the Size of an Array : ";
            cin>>n ;
            
            int arr1[n] , arr2[n];

            cout<<"\nPlease input " <<n<< " elements in the Array\n\n";

            for(int i = 0 ; i < n ; i++)
            {
                cout<<"Enter Array Element at index ["<<i<<"] : ";
                cin>>arr1[i] ;
            }

            cout<<"\nOriginal Array : "; 
            for(int i = 0 ; i < n ; i++)
            {
                cout<<arr1[i]<< "  ";
            }

            // Copy Input Array to 2nd Array
            for(int i = 0 ; i < n ; i++)
            {
                arr2[i] = arr1[i] ; 
            }

            cout<<"\n\nCopied Array   : "; 
            for(int i = 0 ; i < n ; i++)
            {
                cout<<arr2[i]<< "  ";
            }

            return 0 ;
        }