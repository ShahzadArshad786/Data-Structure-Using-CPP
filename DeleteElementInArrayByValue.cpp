        #include<iostream>
        using namespace std;

        int main()
        {
            int n , element , count = 0  ;

            cout<<"Enter the Size of an Array : ";
            cin>>n ;

            int arr[n] ; 

            cout<<"\nPlease input "<< n <<" Elements in the Array \n\n";

            for(int i = 0 ; i < n ; i++)
            {
                cout<<"Input  "<<i+1<<"  Array Element at index arr["<<i<<"] : ";
                cin>>arr[i] ;
            }

            cout<<"\nOriginal Array : ";

            for(int i = 0 ; i < n ; i++)
            {
                cout<<arr[i] << " ";
            }

            cout<<"\n\nEnter Array Element You Want to Delete : ";
            cin >> element ; 

            for( int i = 0 ; i < n ; i++)
            {
                if(element == arr[i])
                {
                    for(int j = i ; j < n - 1 ; j++)
                    {
                        arr[j] = arr[j+1];
                    }

                    count++;
                    break ; 
                }
            }

            if(count == 0)
            {
                cout<<"\nElement not found in the Array"; 
            }
            else 
            {
                cout<<"\nUpdated Array  : ";
                for(int i = 0 ; i < n - 1 ; i++)
                {
                    cout<<arr[i]<< " "; 
                }
            }
          
            return 0 ;
        }