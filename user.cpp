#include <iostream>
#include "user.h"
#include <bits/stdc++.h>
#include <string>
#include <assert.h>
#include <io.h>
#include <algorithm>

using namespace std;


class UserAcc{
protected:
    string fname, username, password;
    int current_balance, initail_deposit;
public:
    void setUser(string name, string firstname, string pass, int balance, int deposit)
    {
        fname = firstname;
        username = name;
        password = pass;
        current_balance = balance;
        initail_deposit = deposit;
    }
    int balance()
    {
        return current_balance;
    }
    void printUserInfo()
    {
        cout<<"\n"<<fname<<" info is given bellow :\n"<<"UserName: "<<username<<endl<<"Current Balance : "<<current_balance<<endl;
    }
    void ShowBalance(){
        cout<<"Your Personal Current Balance is : "<<current_balance<<endl;
    }

    void WithdrawBalance(int amount)
    {
        current_balance -= amount;
        ShowBalance();
    }
    void DepositBalance(int amount)
    {
        current_balance += amount;
        ShowBalance();
    }
    void ShowUser(string usr_name, string usr_pass, UserAcc* person)
    {
        if((person->username == usr_name) && (person->password == usr_pass))
        {
            cout<<"You are successfully Logged In\nWelcome to the banking system\n"<<endl;
            printUserInfo();
        }
        else
        {
            cout<<"\nYou have entered a wrong password or id. Create an account if you don't have any"<<endl;
        }
    }
};


user::user()
{
    cout<<"Welcome to Banking System User Dashboard"<<endl;
}

int user::sum(int a, int b)
{
    return a+b;
}

int user::UserDashboard()
{
    while(1){
        char options;
        cout<<"\nPlease select the following options: \n\n1. Create User Account \n2. User LogIn\n3. Admin Login\n4. Exit"<<endl;
        cin>>options;
        UserAcc person1;
        if(options == '1')
        {
            int login = 0;
            string uname, fname, upass; int cash;
            cout<<"\nEnter a username, password, deposit for your account"<<endl;
            cout<<"User Name: ";
            cin>>uname;
            cout<<"Your First Name: ";
            cin>>fname;
            cout<<"User Pass: ";
            cin>>upass;
            cout<<"Deposit : ";
            cin>>cash;
            cout<<" Thank you for the details "<<endl;
            login = 1;
            person1.setUser(uname,fname,upass,cash,cash);
            person1.printUserInfo();

            while(login)
            {
                char select;
                cout<<"\nPlease select the following options: \n\n1. Balance Check \n2. CashWithDraw\n3. Deposit\n4. Exit"<<endl;
                cin>>select;
                if(select == '1')
                {
                    char ch;
                    person1.ShowBalance();
                    cout<<"Want to exit now? (Y/N)"<<endl;
                    cin>>ch;
                    if(ch=='n'||ch=='N')
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                else if(select == '2')
                {
                    int withdraw;
                    //ChashWithDraw
                    cout<<"Enter Withdraw amount : ";
                    cin>>withdraw;
                    if(person1.balance()>=withdraw)
                    {
                        person1.WithdrawBalance(withdraw);
                    }
                    else
                    {
                        cout<<"Please enter a valid amount"<<endl;
                    }
                }
                else if(select == '3')
                {
                    int moneydeposit;
                    cout<<"Enter Deposit Amount :";
                    cin>>moneydeposit;
                    if(moneydeposit>0)
                    {
                        person1.DepositBalance(moneydeposit);
                    }
                    else
                    {
                        cout<<"\nPlease enter a valid amount"<<endl;
                    }
                    //Deposit
                }
                else if(select == '4')
                {
                    break;
                }
                else
                {
                    cout<<"You are logged out for pressing wrong command"<<endl;
                    break;
                }
            }
        }
        else if(options == '2')
        {
            string usr_name, usr_pass;
            cout<<"\nEnter your username and password"<<endl;
            cout<<"Username: ";
            cin>>usr_name;
            cout<<"\nPassword : ";
            cin>>usr_pass;
            person1.ShowUser(usr_name,usr_pass, &person1);
        }
        else if(options == '3')
        {
            //
        }
        else if(options == '4')
        {
            break;
        }
        else
        {
            cout<<"\nPlease Enter a valid option"<<endl;
        }
    }
    return 0;
}


