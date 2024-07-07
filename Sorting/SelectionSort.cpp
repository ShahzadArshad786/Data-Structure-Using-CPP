        #include<iostream>
        using namespace std;

        int main()
        {
            int n , temp ;

            cout<<"Enter Size of the Array : ";
            cin>>n ;

            int arr[n] ;
            cout<<"\nEnter " <<n<< " Elements in the Array\n\n";

            for(int i = 0 ; i < n ; i++)
            {
                cout<<"Enter Element at index arr["<<i<<"] : ";
                cin>>arr[i] ;
            }

            cout<<"\nOriginal Array : ";
            for(int i = 0 ; i < n ; i++)
            {
                cout<<arr[i]<<" " ;
            }

            for(int i = 0 ; i < n  ; i++)
            {
                for(int j = i + 1 ; j < n ; j++)
                {
                    if(arr[i] > arr[j])
                    {
                        temp = arr[i] ;
                        arr[i] = arr[j] ;
                        arr[j] = temp ;
                    }
                }
            }

            cout<<"\n\nSorted   Array : ";
            for(int i = 0 ; i < n ; i++)
            {
                cout<<arr[i]<<" " ;
            }
            return 0 ;
        }
