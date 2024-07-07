        // C++ program to add an element at the beginning of an array
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
        
            cout<<"\n\nEnter Element you want to insert : ";
            cin>> element; 

            // Increment size of array
            n++; 

            // Shift all elements one position to the right
            for (int i = n ; i > 0 ; i--) 
            {
                arr[i] = arr[i - 1];
            }

            // Add the element at the beginning of the array
            arr[0] = element;

            // Print the New / Updated array
            cout << "\nUpdated Array  : ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }