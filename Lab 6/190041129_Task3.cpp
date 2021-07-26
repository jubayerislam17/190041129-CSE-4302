#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

class ZooAnimal
{
private:
    string name;
    int birth;
    int cageno;
    float weight;
    int height;

public:
    ZooAnimal():name(""),birth(0),cageno(0),weight(0),height(0){};

    void getname(string n)
    {
        setname(n);
    }
    void getbirth(int b)
    {
        setbirth(b);
    }
    void getcageno(int c)
    {
        setcageno(c);
    }
    void getweight(float w)
    {
        setweight(w);
    }
    void getheight(int h)
    {

        setheight(h);
    }
    void setname(string n) {name=n;}
    void setbirth(int b= 2021) { if(b>2021) return;
                                    else birth=b;}
    void setcageno(int no) {cageno=no;}
    void setweight(float w) {weight=w;}
    void setheight(int h) {height=h; }

    int getAge(){ return 2021-birth;}

    void getInformation()
    {
        cout<<"name =" <<name<<endl<<"birth ="<<birth<<endl<<"cage no ="<<cageno<<endl<<"weight ="<<weight<<endl<<"height ="<<height<<endl;
    }

    int operator == (int data)
    {
        return (weight==data)?  1 : 0;
    }

    void operator-= (int dec)
    {
        height-=dec;
    }

    void operator--(int)
    {
        height--;
    }

    ~ZooAnimal(){}
};

main()
{
    ZooAnimal z;
    z.getname("cow");
    z.getbirth(1999);
    z.getweight(54.4);
    z.getheight(6);
    z.getcageno(3);
    z.getInformation();
    (z== 50) ? z--: z-=5;
    z.getInformation();
}
