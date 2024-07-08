        #include<iostream>
        using namespace std;

        int main()
        {
            int  n , item  , j = 0 , chk = 0  ;

            cout<<"Enter the Size of the Array : ";
            cin>>n ;

            int arr[n] ; 

            cout<<"\nPlease Input " <<n<< " Elements in the Array\n\n";

            for(int i = 0 ; i < n ; i++)
            {
                cout<<"Enter Array Element at index arr ["<<i<<"] : ";
                cin>>arr[i] ;
            }

            cout<<"\nEnter an Element to be Search : " ;
            cin>>item ;

            int temp[n] ;

            for(int i = 0 ; i < n ; i++)
            {
                if( item == arr[i] )
                {
                    temp[j] = i ;
                    j++ ;
                    chk++ ;
                }
            }
            if( chk > 0 )
            {
                cout<<"-----------------------------------" ; 
                cout<<"\nElement "<<item<< " is found at : \n";
                for(int i = 0 ; i < chk ; i++)
                {
                    cout<<"\nIndex : "<<temp[i]<< "\n";
                }
                cout<<"-----------------------------------" ; 
                cout<<"\n\n";
            }
            else
            {
                cout<<"\n---------------------------------------" ; 
                cout<<"\n\nElement "<<item<< " is Not Found in the Array"<< endl;
                cout<<"\n---------------------------------------" ; 
            }

            return 0 ;
        }
