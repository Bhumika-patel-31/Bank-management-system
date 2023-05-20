                                    //***BANK MANAGEMENT***

#include<conio.h>
#include<iostream>
#include<stdio.h>
using namespace std;

class bank{
    char name[100],add[100],y;
    long long int balance;
    public:
        void Open_account();
        void Deposit_money();
        void Withdraw_money();
        void Display_account();
};

void bank::Open_account(){
    cout<<"Enter your full name :\n";
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your address :\n";
    cin.ignore();
    cin.getline(add,100);
    cout<<"What type of account do you want to open saving (s) or current (c) :\n";
    cin>>y;
    cout<<"Enter amount for deposition :\n";
    cin>>balance;
    cout<<"YOUR ACCOUNT IS CREATED!!!\n\n\n";
}

void bank::Deposit_money(){
    int a;
    cout<<"Enter the amount to be deposited :";
    cin>>a;
    balance+=a;
    cout<<"Total amount you deposited :\t"<<balance<<"\n\n";
}

void bank::Withdraw_money(){
    float amount;
    cout<<"\nWithdraw :";
    cout<<"Enter amount to be withdrawn :";
    cin>>amount;
    if (amount<=balance){
        balance-=amount;
        cout<<"Total balance left :"<<balance<<"\n\n";
    }
    else{
        cout<<"The withdrawl amount is exceeding your balance"<<"\n\n";
    }
}

void bank::Display_account(){
    cout<<"Your full name is : "<<name<<"\t\t";
    cout<<"Your address is : "<<add<<"\t\t";
    cout<<"Type of account : "<<y<<"\t\t";
    cout<<"Amount you deposited : "<<balance<<"\n\n"; 
}

int main()
{
    int ch;
    char x;
    bank obj;
    do{
        cout<<"*WELCOME TO THE BANK SERVICES PORTAL* \n";
        cout<<"1) Open Account \n";
        cout<<"2) Deposit Money \n";
        cout<<"3) Withdraw Money \n";
        cout<<"4) Display Account \n";
        cout<<"5) EXIT!\n";
        cout<<"Select the option from above:\n" ;  
        cin>>ch;
        switch(ch)
        {
            case 1:"1) Open Account \n";
                obj.Open_account();
                break;
            case 2:"2) Deposit Money \n";
                obj.Deposit_money();
                break;
            case 3:"3) Withdraw Money \n";
                obj.Withdraw_money();
                break;
            case 4:"4) Display Account \n";
                obj.Display_account();
                break;
            case 5:"5) EXIT!";
                break;
            default:
                cout<<"You have entered a wrong choice, try again\n";   
        }
        cout<<"Do you want to select next option, then press : y \n";
        cout<<"If you want to exit ,then press : n\t";
        cin>>x;
        if(x=='n'||x=='N'){
           break;
        }  
    } while(x=='y'||x=='Y');
    

return 0;
}
