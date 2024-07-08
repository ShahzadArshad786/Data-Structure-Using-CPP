        #include<iostream>
        #include<algorithm>
        using namespace std;

        int main() 
        {
            int n, count, i, j;

            cout << "Enter Size of Array : ";
            cin >> n;

            int arr[n] ; 

            cout << "\nEnter " << n << " Elements in the Array\n\n";
            for (i = 0; i < n; i++) 
            {
                cout << "Input Array Element at Index arr[" << i << "] : ";
                cin>>arr[i];
            }
            cout<<"\n-----------------------------------------------------------"; 
            cout << "\nOriginal Array Elements Are     : ";
            for (i = 0; i < n ;  i++) 
            {
                cout << arr[i] << "  ";
            }

            sort(arr, arr + n);
            
            int arr1[n] , k = 0 ; 
            
            for (i = 0; i < n - 1 ; i++) 
            {
                count = 1;

                    for (j = i + 1; j < n ; j++) 
                    {
                        if (arr[j] == arr[i]) 
                        {
                            count++;
                        } 
                        else 
                        {
                            break;
                        }
                    }
                if(count > 1)
                {
                    arr1[k] = arr[i] ; 
                    i = i + (count - 1) ;
                    k++;
                }
            }

            if(k > 0)
            {
                cout<<"\n-----------------------------------------------------------";  
                cout<<"\nDuplicate Elements in the Array : "; 
                for(i = 0 ; i < k ; i++)
                {
                    cout<<arr1[i]<< "  " ; 
                }
                cout<<"\n-----------------------------------------------------------"; 
            }
            else 
            {   
                cout<<"\n-----------------------------------------------------------";  
                cout<<"\n\nNo Duplicate Element found in the Array\n";
                cout<<"\n-----------------------------------------------------------"; 
            }

            return 0;
        }

