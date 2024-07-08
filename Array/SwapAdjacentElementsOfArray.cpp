        #include <iostream>
        using namespace std;
        int main()
        {
            int size;

            cout<<"Enter Size of the Array : ";
            cin>>size;

            int arr[size] , temp = 0 , i ;

            cout<<"\nEnter "<< size << " Elements in the Array\n"<<endl;

            for(i = 0 ; i < size ; i++)
            {
                cout<<"Enter Array Element at Index  arr["<<i<<"] : ";
                cin>>arr[i] ;
            }

            cout<<"\nArray Elements Before Swapping : ";
            for( i = 0 ; i < size ; i++)
            {
                cout<<arr[i]<< " ";
            }

            if( size % 2 == 1)
            {
                for(i = 0 ; i < size - 1 ; i = i + 2)
                {
                    temp = arr[i];
                    arr[i] = arr[ i + 1];
                    arr[i + 1] = temp;
                }
            }
            else
            {
                for(i = 0 ; i < size  ; i = i + 2)
                {
                    temp = arr[i];
                    arr[i] = arr[ i + 1];
                    arr[i + 1] = temp;
                }
            }

            cout<<"\n\nArray Elements After Swapping  : ";
            for( i = 0 ; i < size ; i++)
            {
                cout<<arr[i]<< " ";
            }
        return 0;
    }
