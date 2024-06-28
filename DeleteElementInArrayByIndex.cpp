        #include<iostream>
        using namespace std;

        int main()
        {
            int n , pos , count = 0  ;

            cout<<"Enter the Size of an Array : ";
            cin>>n ;

            int arr[n] ; 

            cout<<"\nPlease input "<< n <<" Elements in the Array \n\n";

            for(int i = 0 ; i < n ; i++)
            {
                cout<<"Input  "<<i+1<<"  Array Element at index arr["<<i<<"] : ";
                cin>>arr[i] ;
            }

            cout<<"\nEnter Index / Position of Array Element You Want to Delete : ";
            cin >> pos ; 

            if(pos < 0 || pos > n -1)
            {
                cout<<"\nInvalid Position\nDeletion is not Possible in the Array..."; 
            }

            else 
            {
                cout<<"\nOriginal Array : ";

                for(int i = 0 ; i < n ; i++)
                {
                    cout<<arr[i] << " ";
                }

                for( int i = pos ; i < n - 1 ; i++)
                {
                    arr[i] = arr[i+1];
                }

                cout<<"\n\nUpdated Array  : ";
                for(int i = 0 ; i < n - 1 ; i++)
                {
                    cout<<arr[i]<< " "; 
                }
            }
        
            return 0 ;
        }