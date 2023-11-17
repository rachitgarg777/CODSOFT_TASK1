#include<iostream>
using namespace std;

int main()
{
    double n1,n2;
    int flag=1;
    char op;
    cout<< "BASIC CALCULATOR"<<endl;
    while(flag)
    {
    cout<<"Enter the operator:"<<endl;
    cout<<"'+' for additon"<<endl;
    cout<<"'-' for substraction"<<endl;
    cout<<"'*' for multiplication"<<endl;
    cout<<"'/' for division"<<endl;
    cin>>op;
    cout<<"Enter the 1st number:";
    cin>>n1;
    cout<<"Enter the 2nd number:";
    cin>>n2;    

    switch (op)
    {
    case '+':
    cout<<"The sum of "<<n1<<" and "<<n2<< " is "<<n1+n2<<endl;
        break;
    case '-':
    cout<<"The difference of "<<n1<<" and "<<n2<< " is "<<n1-n2<<endl;
        break;
    
    case '*':
    cout<<"The product of "<<n1<<" and "<<n2<< " is "<<n1*n2<<endl;
        break;

    case '/':
    {
        if(n2==0.0)
        {
            cout<<"Divide by 0 error!!!"<<endl;
            break;
        }
        else
        {
            cout<<"The quotient of "<<n1<<" and "<<n2<< " is "<<n1/n2<<endl;
                break;
        }
    }
    

    default:
    cout<<"Invalid operator!!!"<<endl;
        break;
    }
    cout<<"Want to perform another operation? (1-continue/0-exit)";
    cin>>flag;
    }
}