        #include<iostream>
        #include<iomanip>
        #define MAX 5
        using namespace std;

        int QUEUE[MAX] , Front = -1 , Rear  = -1 ;

        void Enqueue(int x )
        {
            if(Rear == MAX - 1)
            {
                cout<<"\n\tQueue is Full!"<<endl;
            }
            else if(Front  == -1 && Rear == -1)
            {
                Front = Rear = 0  ;
                QUEUE[Rear] = x ;
                cout<<"\nElement Inserted in Queue : "<< QUEUE[Rear]<<endl;
            }
            else
            {
                Rear = Rear + 1 ; 
                QUEUE[Rear] = x ;
                cout<<"\nElement Inserted in Queue : "<< QUEUE[Rear]<<endl;
            }
        }
        void Dequeue()
        {
            int item ;
            if(Front == - 1)
            {
                cout<<"\n\tQueue is Empty..."<<endl;
            }
            else if (Front == Rear )
            {
                item = QUEUE[Front] ;
                Front = Rear = -1 ;
                cout<<"\nElement Removed : " <<item<<endl;
            }
            else
            {
                item = QUEUE[Front] ;
                Front = Front + 1 ;
                cout<<"\n\tElement Removed : " <<item<<endl;
            }
        }
        void display ()
        {
            int i ;
            if(Front == -1)
            {
                cout<<"\n\tQueue is Empty..."<<endl;
            }
            else
            {   
                cout<<"\n\tIndex | Data \n\n";
                for( i = Front ; i <= Rear ; i++)
                {
                    cout<<"\t"<< setw(5)<<i<<" | " <<QUEUE[i];
                    cout<<"\n\n";
                } 
                cout<<"-----------------------------------";
                cout<<"\n\tFront : "<<Front<<"\n";
                cout<<"-----------------------------------";
                cout<<"\n\tRear  : "<<Rear<<"\n";
            }
        }

        int main()
        {
            int choice  , n;

            cout<<"\n\n*** *** QUEUE MENU *** ***"<<endl;
            cout<<"\n1: ENQUEUE OPERATION"<<endl;
            cout<<"\n2: DEQUEUE OPERATION"<<endl;
            cout<<"\n3: DISPLAY QUEUE"<<endl;
            cout<<"\n4: EXIT"<<endl;

            while(1)
            {
                cout<<"\nEnter Your Choice : ";
                cin>>choice;

                switch(choice)
                {

                case 1:
                    cout<<"-----------------------------------";
                    cout<<"\n\tENQUEUE OPERATION\n"; 
                    cout<<"-----------------------------------";
                    cout<<"\nEnter Element Insert into Queue : ";
                    cin>>n ;
                    cout<<"-----------------------------------";
                    Enqueue(n);
                    cout<<"-----------------------------------";
                    break ;

                case 2:
                    cout<<"-----------------------------------";
                    cout<<"\n\tDEQUEUE OPERATION\n"; 
                    cout<<"-----------------------------------";
                    Dequeue();
                    cout<<"-----------------------------------";
                    break;

                case 3:
                    cout<<"-----------------------------------";
                    cout<<"\n\tDISPLAY OPERATION\n"; 
                    cout<<"-----------------------------------";
                    display();
                    cout<<"-----------------------------------";
                    break;
                
                case 4:
                    exit(0);

                default:
                    cout<<"\n\tInvalid Choice. Try Again..."<<endl;
                }
            }
                return 0 ;
    }
