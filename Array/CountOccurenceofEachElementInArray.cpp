        #include<iostream>
        #include<algorithm>
        #include<iomanip>
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

            cout << "\nOriginal Array Elements Are : ";
            for (i = 0; i < n ;  i++) 
            {
                cout << arr[i] << " ";
            }

            sort(arr, arr + n);

            cout<<"\n---------------------";  
            cout<<"\nElement\t|"<<setw(10)<<"Frequency";  
            cout<<"\n---------------------\n\n"; 
            for (i = 0; i < n ; i++) 
            {
                count = 1;
                if (i != n - 1) 
                {
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
                }
                cout << setw(4)<<arr[i] << "\t|" <<setw(5)<< count << "\n\n";
                i = i + (count - 1) ;
            }
            cout<<"---------------------";  

            return 0;
        }

