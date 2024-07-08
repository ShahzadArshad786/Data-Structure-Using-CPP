        #include <iostream>
        using namespace std; 

        int main()
        {
            int r1 , c1 , r2 , c2; 

            cout<<"Enter No. Of Rows    For 1st Matrix : ";
            cin>> r1 ; 

            cout<<"Enter No. Of Columns For 1st Matrix : ";
            cin>> c1 ; 

            int arr1[r1][c1] ; 

            cout<<"\nPlease Input " << r1 * c1 << " Elements in the 1st Matrix\n\n";
            
            for(int i = 0 ; i < r1 ; i++)
            {
                for(int j = 0 ; j < c1 ; j++)
                {
                    cout<<"Input Element at index arr1["<<i<<"]["<<j<<"] : ";
                    cin>>arr1[i][j];
                }
            }

            cout<<"\n\nEnter No. Of Rows    For 1st Matrix : ";
            cin>> r2 ; 

            cout<<"Enter No. Of Columns For 1st Matrix : ";
            cin>> c2 ; 

            int arr2[r2][c2] ; 

            cout<<"\nPlease Input " << r2 * c2 << " Elements in the 2nd Matrix\n\n";
            
            for(int i = 0 ; i < r2 ; i++)
            {
                for(int j = 0 ; j < c2 ; j++)
                {
                    cout<<"Input Element at index arr2["<<i<<"]["<<j<<"] : ";
                    cin>>arr2[i][j];
                }
            }

            cout<<"\n1st Matrix is : \n\n";
            for(int i = 0; i < r1; i++)
            {
                for(int j =0 ; j < c1 ; j++)
                {
                    cout<<arr1[i][j]<<"\t";
                }
                cout<<"\n\n";
            }
             cout<<"--------------------";


            cout<<"\n2nd Matrix is : \n\n";
            for(int i = 0; i < r2; i++)
            {
                for(int j =0 ; j < c2 ; j++)
                {
                    cout<<arr2[i][j]<<"\t";
                }
                cout<<"\n\n";
            }
            cout<<"--------------------";

            int arr3[r1][c2]; 

            for(int i = 0 ; i < r1 ; i++)
                {
                    for(int j = 0 ; j < c2 ; j++)
                    {
                        arr3[i][j] = 0 ; 

                        for(int k = 0 ; k < c1 ; k++)
                        {
                            arr3[i][j] = arr3[i][j] +  arr1[i][k] *  arr2[k][j] ; 
                        }   
                    }
                }

            cout<<"\nProduct Of Two Matrices : \n\n"; 
            for(int i = 0 ; i < r1 ; i++)
            {
                for(int j = 0 ; j < c2 ; j++)
                {
                   cout<<arr3[i][j]<<"\t";
                }
                cout<<"\n\n" ; 
            }
            cout<<"--------------------";

            return 0 ; 
        }