        /*
            Write a C++ program that inputs N Numbers of Array Elements, Calculate the 
            Sum of the Array Elements and Display the Sum. 
        */
        #include<iostream>
        using namespace std;

        int main()
        {
            int n , sum = 0  ;

            cout<<"Enter the Size of the Array : ";
            cin>>n ;

            int arr[n] ; 

            cout<<"\nPlease Input  " <<n<< " Elements in the Array \n\n";

            for(int i = 0 ; i < n ; i++)
            {
                cout<<"Input  "<<i+1<<"  Array Element at index arr["<<i<<"] : ";
                cin>>arr[i] ;
            }

            cout<<"\nArray Elements Are       : ";

            for(int i = 0 ; i < n ; i++)
            {
                cout<<arr[i] << " ";
                sum = sum+ arr[i] ;
            }
            cout<<"\n\nSum of Array Elements is : " <<sum<<endl ;
            return 0 ;
        }
