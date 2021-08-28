#include <bits/stdc++.h>
using namespace std;

class Database
{
protected:

    string name, id, type;

public:
    Database(string Name,string iD): name(Name),id(iD) {}
    virtual void details() = 0;

    virtual void set_ID()
    {
        id = id;
    }

};



class Accountant : public Database
{
public:
    Accountant(string Name,string iD): Database(Name,iD) {}
    void set_ID()
    {
        id="001"+id;
    }

    void details()
    {
        cout << "Accountant Details\nID:"<<id<<endl; ///Overrides the  function
    }


};

class Customer : public Database
{
public:
    Customer(string Name,string iD): Database(Name,iD) {}
    void set_ID()
    {
        id="002"+id;
    }

    void details()
    {
        cout << "Customer Details\nID:"<<id<<endl; ///Overrides the  function
    }
};

int main()
{
    Database *D , *E;
    Accountant a("Atik", "127");
    Customer b("Batik", "129");
    D = &a;
    D->set_ID();
    D->details();
    E=&b;
    E->set_ID();
    E->details();

}
