#include <iostream>

using namespace std;

int main()
{
    float x,y,sum,multiply,subtraction,division;
    string a,c;
    cout<< "Would you like to close the calculator? \n";
    cin>> a;
    while(a == "no")
    {
        cout<<"Please enter your operator whether + or - or * or /: \n";
        cin>>c;
        if (c== "+")
        {
            cout<< "Please enter your first number: \n";
            cin>>x;
            cout<< "Please enter your second number: \n";
            cin>>y;
            sum=x+y;
            cout<<"Addition equal= "<<sum<<endl;
        }
        else if (c=="-")
        {
            cout<< "Please enter your first number: \n";
            cin>>x;
            cout<< "Please enter your second number: \n";
            cin>>y;
            subtraction=x-y;
            cout<<"Subtraction equal= "<<subtraction<<endl;
        }
        else if (c=="*")
        {
            cout<< "Please enter your first number: \n";
            cin>>x;
            cout<< "Please enter your second number: \n";
            cin>>y;
            multiply=x*y;
            cout<<"Multiplication equal= "<<multiply<<endl;
        }
        else if (c== "/")
        {
            cout<< "Please enter your first number: \n";
            cin>>x;
            cout<< "Please enter your second number: \n";
            cin>>y;
            if (y==0)
                cout<<"Error division by zero\n";
            else
            {
                division=x/y;
                cout<<"Division equals= "<<division<<endl;
        }
        }
        cout<< "Would you like to close the calculator? \n";
        cin>> a;
    }
    while (a== "yes")
    {
        cout<<"Thanks for using my calculator!"<<endl;
        break;
    }
    return 0;
}
