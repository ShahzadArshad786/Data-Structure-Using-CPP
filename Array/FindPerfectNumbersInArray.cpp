        #include<iostream>
        using namespace std;
        
        int main()
        {
            int n ;

            cout<<"Enter the Size of the Array : ";
            cin>>n ;

            int arr[n];
            
            cout<<"\nPlease input " <<n<< " Elements in the Array\n\n";

            for(int i = 0 ; i < n ; i++)
            {
                cout<<"Enter Array Element at index ["<<i<<"] : ";
                cin>>arr[i] ;
            }
            cout<<"\n------------------------------------------------";
            cout<<"\nInput Array List is     : "; 
            for(int i = 0 ; i < n ; i++)
            {
                cout<<arr[i]<< "  ";
            }
            cout<<"\n------------------------------------------------";

            int sum , k = 0 ; 
            
            int arr1[n];

            for(int i = 0 ; i < n ; i++)
            {
                sum = 0; 
                
                for(int j = 1 ; j < arr[i] ; j++)
                {
                    if(arr[i] % j == 0)
                    {
                        sum = sum + j ; 
                    }
                }
                
                if(sum == arr[i])
                {
                    arr1[k] = arr[i]; 
                    k++; 
                }
            }
            if( k > 0 )
            {   
                cout<<"\nPerfect Number List is  : ";
                for(int i = 0 ; i < k ; i++ )
                {
                    cout<<arr1[i]<< "  ";
                }
                cout<<"\n------------------------------------------------";  
            }
            else 
            {
                cout<<"\n\nNo Perfect Element found in the Array\n";
                cout<<"\n------------------------------------------------";
            }

            return 0 ; 
        }