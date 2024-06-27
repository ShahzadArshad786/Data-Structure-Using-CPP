        /*
            Write a C++ program that inputs N Numbers of Array Elements, find
            and Display the Smallest Element in the Array. 
        */
        #include<iostream>
        using namespace std;

        int main()
        {
            int n , min  ;

            cout<<"Enter the Size of an Array : ";
            cin>>n ;

            int arr[n] ; 

            cout<<"\nPlease input " <<n<< " Elements in the Array : \n\n";

            for(int i = 0 ; i < n ; i++)
            {
                cout<<"Input Array Element at index arr["<<i<<"] : ";
                cin>>arr[i] ;
            }

            cout<<"\nOriginal Array   : ";
            for(int i = 0 ; i < n ; i++)
            {
               cout<<arr[i]<< "  " ;
            }

            min = arr[0];

            for(int i = 0 ; i < n ; i++)
            {
                if( arr[i] < min )
                    min = arr[i] ;
            }
            cout<<"\nSmallest Element : " <<min<<endl ;
            return 0 ;
        }
