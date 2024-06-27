        /*
            Write a C++ program that inputs N Numbers of Array Elements, Passes the Array 
            to a function and then function find the Smallest Element from the Array and return 
            the Smallest Element to main(). 
        */
        #include<iostream>
        using namespace std;

        int SmallestNumberInArray(int arr[] , int n);

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

            min = SmallestNumberInArray(arr , n );
            
            cout<<"\n\nSmallest Element : " <<min<<endl ;
            return 0 ;
        }

        int SmallestNumberInArray (int arr[] , int n)
        {
            int min ; 
        
            min = arr[0];

            for(int i = 0 ; i < n ; i++)
            {
                if( arr[i] < min)
                    min = arr[i] ;
            }
            return min ; 
        }
