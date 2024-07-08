        #include <iostream>
        using namespace std; 

        int main()
        {
            int r , c , min ; 

            cout<<"Enter No. Of Rows    : ";
            cin>> r ; 

            cout<<"Enter No. Of Columns : ";
            cin>> c ; 

            int arr1[r][c] ; 

            cout<<"\nPlease Input " << r * c << " Elements in the 1st Matrix\n\n";
            
            for(int i = 0 ; i < r ; i++)
            {
                for(int j = 0 ; j < c ; j++)
                {
                    cout<<"Input Element at index arr1["<<i<<"]["<<j<<"] : ";
                    cin>>arr1[i][j];
                }
            }

            int arr2[r][c] ; 

            cout<<"\nPlease Input " << r * c << " Elements in the 2nd Matrix\n\n";
            
            for(int i = 0 ; i < r ; i++)
            {
                for(int j = 0 ; j < c ; j++)
                {
                    cout<<"Input Element at index arr2["<<i<<"]["<<j<<"] : ";
                    cin>>arr2[i][j];
                }
            }

            cout<<"\n------------------------";
            cout<<"\n1st Matrix is : \n\n";
            for(int i = 0; i < r; i++)
            {
                for(int j =0 ; j < c ; j++)
                {
                    cout<<" ";
                    cout<<arr1[i][j]<<"\t";
                }
                cout<<"\n";
            }
             cout<<"------------------------";


            cout<<"\n2nd Matrix is : \n\n";
            for(int i = 0; i < r; i++)
            {
                for(int j =0 ; j < c ; j++)
                {
                    cout<<" ";
                    cout<<arr2[i][j]<<"\t";
                }
                cout<<"\n";
            }
            cout<<"------------------------";

            cout<<"\nSum Of Two Matrices : \n\n"; 
            for(int i = 0 ; i < r ; i++)
            {
                for(int j = 0 ; j < c ; j++)
                {
                   cout<<arr1[i][j] + arr2[i][j]<<"\t";
                }
                cout<<"\n" ; 
            }
            cout<<"------------------------";

            return 0 ; 
        }