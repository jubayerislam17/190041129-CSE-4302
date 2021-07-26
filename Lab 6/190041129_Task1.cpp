#include<bits/stdc++.h>
using namespace std;

class Coordinate
{
private:
    float absicca;
    float ordinate;

public:

    Coordinate():absicca(0.0),ordinate(0.0){}
    Coordinate(float a,float b):absicca(a),ordinate(b){}

    float getDistance(Coordinate c)
    {   float x=absicca-c.absicca;
        float y=ordinate-c.ordinate;
        return sqrt(x*x + y*y);
    }

    float getDistance()  //Distance from origin
    {
        return sqrt((absicca*absicca)+(ordinate*ordinate));
    }

    void move_x(float val)
    {
        absicca+=val;
    }

    void move_y(float val)
    {
        ordinate+=val;
    }

    void move(float val)
    {
        move_x(val);
        move_y(val);
    }

    int operator>(Coordinate &c)
    {
        return (getDistance()>c.getDistance())? 1 : 0;
    }

    int operator<(Coordinate &c)
    {
        return (getDistance()<c.getDistance())? 1 : 0;
    }

    int operator>=(Coordinate &c)
    {
        return (getDistance()>=c.getDistance())? 1 : 0;;
    }

    int operator<=(Coordinate &c)
    {
        return (getDistance()<=c.getDistance())? 1 : 0;
    }

    int operator==(Coordinate &c)
    {
        return (getDistance()==c.getDistance())? 1 : 0;
    }

    int operator!=(Coordinate &c)
    {
        return (getDistance()!=c.getDistance())? 1 : 0;
    }

    void operator++()
    {
        ++absicca;
        ++ordinate;
    }

    void operator++(int)
    {
        absicca++;
        ordinate++;
    }

     void operator--()
    {
        --absicca;
        --ordinate;
    }
      void operator--(int)
    {
        absicca--;
        ordinate--;
    }

    void display()
    {
        cout<<absicca<<" "<<ordinate<<endl;
    }

    ~Coordinate(){}
};


main()
{
    Coordinate c1(1, 1), c2(-2, -1);

    (c2==c1)? cout<<"true" : cout<<"false";
    cout<<endl;
    c2=c1;
    (c2!=c1)? cout<<"true" : cout<<"false";
    cout<<endl;
    ++c1 ;
    c1.display();
    (c2>=c1)? cout<<"true" : cout<<"false";
    cout<<endl;
    (c2<=c1)? cout<<"true" : cout<<"false";
    cout<<endl;
    c1++;
    c1.display();
    c1--;
    c1.display();
    --c1;
    c1.display();


}
