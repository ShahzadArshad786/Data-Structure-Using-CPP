        #include <iostream>
        using namespace std; 

        int main()
        {
            int r , c , max ; 

            cout<<"Enter No. Of Rows    : ";
            cin>> r ; 

            cout<<"Enter No. Of Columns : ";
            cin>> c ; 
            
            int arr[r][c] ; 

            cout<<"\nPlease Input ("<< r << " x "<< c << ") Matrix\n\n";

            for(int i = 0 ; i < r ; i++)
            {
                for(int j = 0 ; j < c ; j++)
                {
                    cout<<"Input Element at index arr["<<i<<"]["<<j<<"] : ";
                    cin>>arr[i][j];
                }
            }

            cout<<"\nMatrix Elements are : \n";
            for(int i = 0; i < r; i++)
            {
                for(int j =0 ; j < c ; j++)
                {
                    cout<<" ";
                    cout<<arr[i][j]<<"\t";
                }
                cout<<"\n";
            }

            max = arr[0][0] ; 

            for(int i = 0 ; i < r ; i++)
            {
                for(int j = 0 ; j < c ; j++)
                {
                    if(arr[i][j] > max )
                    {
                        max = arr[i][j] ; 
                    }
                }
            }

            cout<<"\nLarget Number in Matrix : "<< max ; 

            return 0 ; 
        }