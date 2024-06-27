        // C++ program to add an element at the end of an array
        #include <iostream>
        using namespace std;

        int main()
        {
            int n , element ; 

            cout<<"Enter Size of an Array : ";
            cin>>n ;
            
            cout<<endl;
            
            int arr[n]; 
            
            for(int i = 0 ; i < n ; i++)
            {
                cout<<"Input Array Element at Index arr["<<i<<"] : " ;
                cin>>arr[i]; 
            }

            cout << "\nOriginal Array : ";
            for (int i = 0 ; i < n ;  i++) 
            {
                cout << arr[i] << " ";
            }
            cout << endl;

            cout<<"\nEnter Element you want to insert : ";
            cin>> element; 

            // Increment size of array
            n++; 

            // Add the element at the end of the array
            arr[n - 1] = element;

            // Print the New / Updated array
            cout << "\nUpdated Array  : ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }