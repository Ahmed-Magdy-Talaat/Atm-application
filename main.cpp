#include <iostream>
#include<string>
#include<vector>
using namespace std;
int search();
class bank{
private:

    int account_number;
    char type[15];
    string tel;
    float balance;
    string password;
public:
    string name;
public:
    void input(){
        cout<<"Enter Your full name\n";
        cin.ignore();
        getline(cin ,name);
        cout<<"Enter Your account number\n";
        cin>>account_number;
        cout<<"Enter Your account type\n";
        cin>>type;
        cout<<"Enter Your Telephone number\n";
        cin>>tel;
        cout<<"enter your balance\n";
        cin>>balance;
        cout<<"Enter your password\n";
       cin>>password;

    }

void print(){
cout<<"The name of the costumer is "<<name<<endl;
cout<<"The account number is "<<account_number<<endl;
cout<<"The account type is "<<type<<"\n";
cout<<"The telephone number is "<<tel<<"\n";
cout<<"The balance is "<<balance<<"\n";
}

void withdraw(){string x;
    cout<<"Enter your password\n";
    cin>>x;
    if(x==password){
    float money;
    cout<<"The amount of money you Want to withdraw\n"<<endl;
    cin>>money;
    if(money<=balance){
        balance-=money;
        cout<<"The Operation has been done successfully /n and your current balance is "<<balance<<"\n";
        cout<<"*****************************************************************************************\n";
        }
        else{
            cout<<"The Operation can't be done as you don't have this value in your balance\n";
        }}
        else{
            cout<<"Wrong password\n";
        }
        }

void show(){string x;
    cout<<"Enter your password\n";
    cin>>x;
    if(x==password){
    cout<<"your current balance is "<<balance<<"\n";
}}
void deposit(){
    string x;
    cout<<"Enter your password\n";
    cin>>x;
    if(x==password){
float a;
cout<<"The money you want to deposit\n";
cin>>a;
balance+=a;
cout<<"the operation has been done successfully \n Your current balance is "<<balance<<"\n";
}
else{
    cout<<"Wrong Password\n";
}
}

};




int main()
{
bank b;
int choice;
while(1){cout<<"***********************welcome to the ATM MANAGEMENT SYSTEM********************"<<"\n";
cout<<"Press the no. of the Wanted operation"<<"\n";
cout<<"\t1.Enter your Name,account Number and account type;\n";
cout << "\t2. Balance Enquiry\n";
cout << "\t3. Deposit Money\n";
cout << "\t4. Show Total balance\n";
cout << "\t5. Withdraw Money\n";
cout << "\t6. Cancel\n";
int i=0;
int a;
cin>>choice;
switch (choice){
case 1:
    b.input();
    break;
case 2:
    b.print();
    break;
case 3:
b.deposit();
    break;
case 4:
b.show();

break;
case 5:
b.withdraw();
    break;
case 6:
    return 0;
default:
    cout<<"AN Invalid choice\n";
}}
    return 0;
}



