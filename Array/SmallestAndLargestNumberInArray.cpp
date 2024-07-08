        #include<iostream>
        using namespace std;

        int main()
        {
            int n , min , max ;

            cout<<"Enter the Size of the Array : ";
            cin>>n ;

            int arr[n] ; 

            cout<<"\nPlease Input " <<n<< " Elements in the Array\n\n";

            for(int i = 0 ; i < n ; i++)
            {
                cout<<"Enter Array Element at index arr["<<i<<"] : ";
                cin>>arr[i] ;
            }

            min  = max = arr[0];

            for(int i = 0 ; i < n ; i++)
            {
                if( arr[i] < min)
                {
                    min = arr[i];
                }
                if( arr[i] > max)
                {
                    max = arr[i];
                }
            }
            cout<<"\n----------------------------------------";
            cout<<"\n\nSmallest Number in the Array is : " <<min<<endl ;
            cout<<"\n----------------------------------------";
            cout<<"\n\nLargest  Number in the Array is : " <<max<<endl ;
            cout<<"\n----------------------------------------";
            return 0 ;
        }
