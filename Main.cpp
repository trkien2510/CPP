#include<iostream>
#include<string.h>
using namespace std;

class BankAccount{
private:
    string Name;
    long Balance;
public:
    BankAccount(string name, long balance){
        Name = name;
        Balance = balance;
    }
    int getbalance(){
        return Balance;
    }
    string getname(){
        return Name;
    }
    void action(){
    while(true){
        int a;
        cout<<"1. gui tien\n";
        cout<<"2. rut tien\n";
        cout<<"3. kiem tra so du\n";
        cin>>a;
        if (a == 1){
            int b;
            cout<<"so tien muon gui:\n";
            cin>>b;
            Balance = Balance + b;
        }else{
            if (a == 2){
                int c;
                cout<<"so tien muon rut:\n";
                cin>>c;
                if (c>Balance){
                    cout<<"so du khong du de thuc hien giao dich:\n";
                }else{
                    Balance -= c;
                }
            }else{
                if (a == 3){
                    Balance = Balance;
                }else{
                    cout<<"vui long nhap lai:\n";
                }
            }
        }    
    }
}
};

void Account1(){
    cout<<"Duc Binh\n";
    BankAccount Duc_Binh("Duc Binh",2000000);
    Duc_Binh.action();
    cout<<"so du cua Duc Binh la:"<< Duc_Binh.getbalance() <<endl;
}

void Account2(){
    cout<<"Thu Lan\n";
    BankAccount Thu_Lan("Thu Lan",1000000);
    Thu_Lan.action();
    cout<<"so du cua Thu Lan la:"<< Thu_Lan.getbalance() <<endl;
}

int main(){

    while (true){
        int n;
        cout<<"Bank Account:\n";
        cout<<"1.Duc Binh\n";
        cout<<"2.Thu Lan\n";
        cin>>n;
        if (n==1){
            Account1();
        }else{
            if (n==2){
                Account2();
            }else{
                cout<<"vui long nhap lai\n";
            }
        }
    }
}