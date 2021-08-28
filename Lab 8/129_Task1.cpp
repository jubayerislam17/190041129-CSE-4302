#include<bits\stdc++.h>
using namespace std;

class Account
{
protected :
    string  accountNo;
    string accountName;
    float balance;

public :
    Account(int first,int second)
    {
        accountNo+=to_string(first)+'-'+to_string(second);
    }

    void setAccountname(string Accountname)
    {
        accountName=Accountname;
    }
     void setBalance(float Balance)
    {
        balance=Balance;
    }
    string getAccountno()
    {
       return accountNo;
    }
    string getAccountname()
    {
        return accountName;
    }
    float getBalance()
    {
       return  balance;
    }
    /*void description()
    {
        cout<<"Account no :"<<accountNo<<" "<<accountName<<" "<<balance<<" ";
    }*/


};
class CurrentAccount : public Account
{
private:
    const static int serviceCharge;
    const static int accountPrefix;
    static int nextAccount;
public:
    CurrentAccount() : Account(getaccountPrefix(),nextAccountNo())
    {

    }
    /*void description()
    {
        Account::description();
        cout<<"Service charge : "<<CurrentAccount::serviceCharge<<" ";
    }8*/

    static int  getserviceCharge()
    {
        return serviceCharge;
    }

    static int  getaccountPrefix()
    {
        return accountPrefix;
    }
    static int nextAccountNo();
};
const int CurrentAccount::serviceCharge=100;
const int CurrentAccount::accountPrefix=100;
int CurrentAccount::nextAccount=100;
int CurrentAccount::nextAccountNo()
{
    return nextAccount++;
}

class SavingsAccount : public Account
{
private :
    float interestRate;
    float monthlyDepositAmount;
    const static int accountPrefix;
    static int nextAccount;

public :
    SavingsAccount() :Account(getaccountprefix(),nextAccountNo())
    {

    }
    void setinterestRate (float interest)
    {
        interestRate=interest;
    }
    void setmonthlyDepositAmount (float deposit)
    {
        monthlyDepositAmount=deposit;
    }
    float getinerestRate ()
    {
        return interestRate;
    }
    float getmonthlyDepositAmount ()
    {
        return monthlyDepositAmount;
    }
    /*void description()
    {
        Account::description();
        cout<<"InterestRate "<<interestRate<<"monthlyDepositAmount "<monthlyDepositAmount<<" ";
    }*/
    static int getaccountprefix ()
    {
        return accountPrefix;
    }
    static int nextAccountNo();
};

const int SavingsAccount::accountPrefix=200;
int SavingsAccount::nextAccount=200;
int SavingsAccount::nextAccountNo()
{
    //SavingsAccount::nextAccount=100+CurrentAccount::nextAccountNo();
    return (++SavingsAccount::nextAccount);
}
class MonthlydepositScheme : public Account
{
private :
    float interestRate;
    float monthlyDepositAmount;
    const static int accountPrefix;
    static int  nextAccount;
public :
    MonthlydepositScheme() :Account(getaccountprefix(),nextAccountNo())
    {

    }
    void setinterestRate (float interest)
    {
        interestRate=interest;
    }
    void setmonthlyDepositAmount (float deposit)
    {
        monthlyDepositAmount=deposit;
    }
    float getinerestRate ()
    {
        return interestRate;
    }
    float getmonthlyDepositAmount ()
    {
        return monthlyDepositAmount;
    }
    /*void description()
    {
        Account::description();
        cout<<"InterestRate :"<<interestRate<<"monthlyDepositAmount "<monthlyDepositAmount<<" ";
    }*/
    static int getaccountprefix ()
    {
        return accountPrefix;
    }
    static int nextAccountNo();
};


const int MonthlydepositScheme::accountPrefix=300;
int MonthlydepositScheme::nextAccount=300;
int MonthlydepositScheme::nextAccountNo()
{
    return (++MonthlydepositScheme::nextAccount);
}
class LoanAccount : public Account
{
private :
    float interestRate;
    float monthlyDepositAmount;
    const static int accountPrefix;
    static int  nextAccount;
public :
    LoanAccount() :Account(getaccountprefix(),nextAccountNo())
    {

    }
    void setinterestRate (float interest)
    {
        interestRate=interest;
    }
    void setmonthlyDepositAmount (float deposit)
    {
        monthlyDepositAmount=deposit;
    }
    float getinerestRate ()
    {
        return interestRate;
    }
      /*  void description()
    {
        Account::description();
        cout<<"InterestRate :"<<interestRate<<"monthlyDepositAmount "<monthlyDepositAmount<<" ";
    }*/
    float getmonthlyDepositAmount ()
    {
        return monthlyDepositAmount;
    }
    static int getaccountprefix ()
    {
        return accountPrefix;
    }
    static int nextAccountNo();
};


const int LoanAccount::accountPrefix=900;
int LoanAccount::nextAccount=900;
int LoanAccount::nextAccountNo()
{
    return (++LoanAccount::nextAccount);
}
class TwoYearMDS : public MonthlydepositScheme
{
private :
    float maximuminterest;
public :
    void setMaximuminetrest (float interest)
    {
        maximuminterest=interest;
    }
    float getMaximuminetrest ()
    {
       return maximuminterest;
    }
   /* void description()
    {
        MonthlydepositScheme::description();
        cout<<"Maximum Interest "<<maximuminterest<<" ";
    }*/
};
class FiveYearMDS : public MonthlydepositScheme
{
private :
    float maximuminterest;
public :
    void setMaximuminetrest (float interest)
    {
        maximuminterest=interest;
    }
    float getMaximuminetrest ()
    {
       return maximuminterest;
    }
    /*void description()
    {
        MonthlydepositScheme::description();
        cout<<"Maximum Interest "<<maximuminterest<<" ";
    }*/
};
class InitialDepositMDS : public MonthlydepositScheme
{
private :
    float maximuminterest;
    float initialDepositAmount;
public :
    void setMaximuminetrest (float interest)
    {
        maximuminterest=interest;
    }
    float getMaximuminetrest ()
    {
       return maximuminterest;
    }
    void setInitialdepositammount (float ammount)
    {
        initialDepositAmount=ammount;
    }
    float getInitialdepositammount ()
    {
        return initialDepositAmount;
    }
      /*  void description()
    {
        MonthlydepositScheme::description();
        cout<<"Maximum Interest "<<maximuminterest<<"Initial Deposit Amount "<<initialDepositAmount<<" ";
    }*/
};
int main()
{
    CurrentAccount a;
    cout<<a.getAccountno()<<endl;
    SavingsAccount b,c;
    cout<<b.getAccountno()<<endl;
    cout<<c.getAccountno()<<endl;
    MonthlydepositScheme d,e;
    cout<<e.getAccountno()<<endl;
    LoanAccount f;
    cout<<f.getAccountno()<<endl;
    TwoYearMDS g;
    FiveYearMDS h;
    InitialDepositMDS i;
    cout<<g.getAccountno()<<endl<<h.getAccountno()<<endl<<i.getAccountno();
    //cout<<MonthlydepositScheme::nextAccountNo();
}