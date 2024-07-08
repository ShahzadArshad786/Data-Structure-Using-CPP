        #include<iostream>
        using namespace std;

        int main()
        {
            int n ;

            cout<<"Enter the Size of the Array : ";
            cin>>n ;

            int arr[n];
            
            cout<<"\nPlease Input " <<n<< " Elements in the Array\n\n";

            for(int i = 0 ; i < n ; i++)
            {
                cout<<"Enter Array Element at index ["<<i<<"] : ";
                cin>>arr[i] ;
            }
            cout<<"\n------------------------------------------------";
            cout<<"\nOriginal Array Elements : "; 
            for(int i = 0 ; i < n ; i++)
            {
                cout<<arr[i]<< "  ";
            }
            cout<<"\n------------------------------------------------";
            int rev , digit , k = 0 ; 
            
            int arr1[n];

            for(int i = 0 ; i < n ; i++)
            {
                rev = 0; 
                
                for(int j = arr[i]; j != 0 ; j = j / 10)
                {
                    digit = j % 10 ;
                    rev = (rev * 10 ) + digit ; 
                }
                
                if(rev == arr[i])
                {
                    arr1[k] = arr[i]; 
                    k++; 
                }
            }
            if( k > 0 )
            {   
                cout<<"\nPalindrome Elements     : ";
                for(int i = 0 ; i < k ; i++ )
                {
                    cout<<arr1[i]<< "  ";
                }
                cout<<"\n------------------------------------------------";  
            }
            else 
            {
                cout<<"\n\nNo Palindrome Element found in the Array\n";
                cout<<"\n------------------------------------------------";
            }

            return 0 ; 
        }