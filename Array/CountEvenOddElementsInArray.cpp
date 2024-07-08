        #include<iostream>
        using namespace std;

        int main()
        {
            int n , even = 0 , odd = 0 ;

            cout<<"Enter the Size of an Array : ";
            cin>>n ;

            int arr[n] ; 

            cout<<"\nPlease Input " <<n<< " Elements in the Array\n\n";

            for(int i = 0 ; i < n ; i++)
            {
                cout<<"Input Array Element at index arr["<<i<<"] : ";
                cin>>arr[i] ;
            }

            cout<<"\nOriginal Array  : ";
            for(int i = 0 ; i < n ; i++)
            {
               cout<<arr[i]<< "  " ;
            }
            for(int i = 0 ; i < n ; i++)
            {
                if( arr[i] % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
            
            cout<<"\n\nTotal Even Numbers in the Array : " <<even<<endl;
            cout<<"\nTotal Odd  Numbers in the Array : " <<odd<<endl;
            return 0 ;
        }
