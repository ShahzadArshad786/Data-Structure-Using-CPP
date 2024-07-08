        #include <iostream>
        using namespace std; 

        int main()
        {
            int r , c ; 

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

            cout<<"\n1st Matrix is : \n\n";
            for(int i = 0; i < r; i++)
            {
                for(int j =0 ; j < c ; j++)
                {
                    cout<<" ";
                    cout<<arr1[i][j]<<"\t";
                }
                cout<<"\n\n";
            }
             cout<<"--------------------";


            cout<<"\n2nd Matrix is : \n\n";
            for(int i = 0; i < r; i++)
            {
                for(int j =0 ; j < c ; j++)
                {
                    cout<<" ";
                    cout<<arr2[i][j]<<"\t";
                }
                cout<<"\n\n";
            }
            cout<<"--------------------";

            int arr3[r][c]; 

            for(int i = 0 ; i < r ; i++)
                {
                    for(int j = 0 ; j < c ; j++)
                    {
                        arr3[i][j] = 0 ; 
                        for(int k = 0 ; k < c ; k++)
                        {
                            arr3[i][j] = arr3[i][j] +  arr1[i][k] *  arr2[k][j] ; 
                        }   
                    }
                }

            cout<<"\nProduct Of Two Matrices : \n\n"; 
            for(int i = 0 ; i < r ; i++)
            {
                for(int j = 0 ; j < c ; j++)
                {
                   cout<<arr3[i][j]<<"\t";
                }
                cout<<"\n\n" ; 
            }
            cout<<"--------------------";

            return 0 ; 
        }