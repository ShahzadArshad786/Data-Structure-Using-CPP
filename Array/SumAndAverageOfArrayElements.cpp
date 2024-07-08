        /*
            Write a C++ program that inputs N Numbers of Array Elements, Calculate Sum of
            the Array Elements, and Average of Array Elements and then Display the Sum and
            Average of Array. 
        */
        #include<iostream>
        #include <iomanip>
        using namespace std;

        int main()
        {
            int n ;

            double sum = 0 , avg ; 
            cout<<"Enter the Size of the Array : ";
            cin>>n ;

            int arr[n] ; 

            cout<<"\nPlease input  " <<n<< " Elements in the Array \n\n";

            for(int i = 0 ; i < n ; i++)
            {
                cout<<"Input  "<<i+1<<"  Array Element at index arr["<<i<<"] : ";
                cin>>arr[i] ;
            }

            cout<<"\nInput Array Elements Are      : ";

            for(int i = 0 ; i < n ; i++)
            {
                cout<<arr[i] << "  ";
                sum = sum + arr[i] ;
            }

            avg = sum / n ; 

            cout<<"\n\nSum  of  Array Elements is    : " <<sum<<endl ;
            cout<<"\nAverge of  Array  Elements is : " <<setprecision(2)<<avg<<endl ;
            return 0 ;
        }
