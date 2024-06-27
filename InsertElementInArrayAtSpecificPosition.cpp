        // Write a C++ program to add an element at the Specific Position of an array
        #include <iostream>
        using namespace std;

        int main()
        {
            int n , element , pos ; 
            cout<< "Enter Size of an Array : ";
            cin>> n ;
            
            // Array declaration with input size
            int arr[n] ; 
            
            for(int i = 0 ; i < n ; i++)
            {
                cout<<"Input Array Element at Index arr["<<i<<"] : " ;
                cin>> arr[i] ; 
            }

            cout << "\nOriginal Array : ";
            for (int i = 0 ; i < n ; i++) 
            {
                cout << arr[i] << " ";
            }
        
            cout<<"\n\nEnter Element you want to insert : ";
            cin>> element; 

            cout<<"\nEnter the Position Where to insert an Element : ";
            cin >> pos ; 
            // Increment length / size of an array
                n++; 

            // Shif elements after the position to the right 
            for(int i = n - 1 ; i > pos ; i--)
            {
                arr[i] = arr[i-1];
            }
            // Add the element at the specific position of Array
            arr[pos] = element;

            // Print the New/Updated Array
            cout << "\nUpdated  Array : ";
            for (int i = 0 ; i < n ; i++) 
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            }