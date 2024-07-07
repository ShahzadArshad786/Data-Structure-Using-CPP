    #include<iostream>
    #define MAX_SIZE  5
    using namespace std;

    int STACK[MAX_SIZE] , top = - 1 ;

    void push(int x )
    {
        if(top == MAX_SIZE - 1)
        {   
            cout<<"------------------------------";
            cout<<"\n\tStack is Full..."<<endl;
        }
        else
        {
            top ++ ;
            STACK[top] = x ;
            cout<<"\nPushed Element : "<<x<<endl;
        }
    }
    void pop()
    {
        if(top == -1)
        {
            cout<<"\n\tStack is Empty..."<<endl;
        }
        else
        {
            cout<<"\nPoped Element : "<<STACK[top]<<endl;
            top -- ;
        }
    }

    void Peek()
    {
        if(top == -1)
        {
            cout<<"\n\tStack is Empty..."<<endl;
        }
        else
        {
            cout<<"\nTop Of Stack : " <<STACK[top]<<endl;
        }
        
    }
    void Display ()
    {
        if(top == -1 )
        {
            cout<<"\n\tStack is empty..."<<endl;
        }
        else
        {
            cout<<"\n\tIndex\tSTACK"<<endl;
            for(int i = top ; i >= 0 ; i--)
            {
                cout<<"\n\t  "<<i<<"\t  "<<STACK[i]<<endl;
            }
    }
    }


    int main()
    {
    int choice  , n ;

    cout<<"\n\n*** *** STACK MENU *** ***"<<endl;
    cout<<"\n1 : PUSH OPERATION"<<endl;
    cout<<"\n2 : POP OPERATION"<<endl;
    cout<<"\n3 : PEEK OPERATION"<<endl;
    cout<<"\n4 : DISPLAY STACK"<<endl;
    cout<<"\n5 : EXIT"<<endl;

    while(1)
    {

    cout<<"\nEnter Your Choice : ";
    cin>>choice;

    switch(choice)
    {

    case 1:
        cout<<"------------------------------";
        cout<<"\n\tPUSH OPERATION\n"; 
        cout<<"------------------------------";
        cout<<"\nEnter an Integer Value : ";
        cin>>n ;
        push(n);
        cout<<"------------------------------";
        break ;

    case 2:
        cout<<"------------------------------";
        cout<<"\n\tPOP OPERATION\n"; 
        cout<<"------------------------------";
        pop();
        cout<<"------------------------------";
        break;

    case 3:
        cout<<"------------------------------";
        cout<<"\n\tPEEK OPERATION\n"; 
        cout<<"------------------------------";
        Peek();
        cout<<"------------------------------";
        break;

    case 4:
        cout<<"------------------------------";
        cout<<"\n\tDISPLAY OPERATION\n"; 
        cout<<"------------------------------";
        Display();
        cout<<"------------------------------";
        break;

    case 5:
        exit(0);

    default:
        cout<<"\n\tInvalid Choice. Try Again..."<<endl;
    }
    }
        return 0 ;
    }
