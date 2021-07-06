#include<bits/stdc++.h>
using namespace std;

class BankAccount
{
private:
    int no;
    string name;
    bool flag;
    float balance, minBal;
public:
    BankAccount():no(1245),name("Jubayer "),flag(1),balance(0.0),minBal(500.0) {};


    void showBalance()
    {
        cout<<balance<<endl;
    }

    void deposit(int tk)
    {
        balance+=tk;
    }

    void withdrawal(int tk)
    {
        if(tk<minBal) cout<<"Transiction failed"<<endl;
        else balance-=tk;
    }

    void giveInterest(float percent=2.5)
    {   float k;
        k= balance*((percent)/100);
        balance+= (k- k*(10/100));

    }
     void allinfo()
    {
        cout<<no<<endl<<name<<endl;
        if(flag) cout<<"current"<<endl;
        else cout<<"savings"<<endl;
        cout<<balance<<endl;
    }

    ~BankAccount()
    {
        cout<<"Account of Mr. "<<name<<" with account no "<<no<<" is destroyed with a balance BDT "<<balance<<endl;
    }

};

main()
{
    BankAccount b;
    b.deposit(600);
    b.showBalance();
    b.deposit(700);
    b.showBalance();
    b.withdrawal(300);
    b.withdrawal(600);
    b.allinfo();
    b.giveInterest();
    b.showBalance();

}
