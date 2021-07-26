#include<bits/stdc++.h>
using namespace std;

class FLOAT
{
private:
    float data;

public:
    FLOAT(float f): data(f){}
    ~FLOAT(){}

    FLOAT operator+ (FLOAT f1)
    {

        return FLOAT(data + f1.data);

    }

     FLOAT operator- (FLOAT f1)
    {
       return FLOAT(data - f1.data);
    }

     FLOAT operator* (FLOAT f1)
    {
        return FLOAT(data * f1.data);
    }

     FLOAT operator/ (FLOAT f1)
    {
        if(f1.data==0) cout<<"can't divide by 0";
        return FLOAT(data / f1.data);
    }

   operator int() const
{
	int x = (int)data;
	return x;
}

};

main()
{
    FLOAT f1(1.4),f2(24.3);
    //cout<< f2 + f1<<endl;
    int f=f2/f1;
    cout<<f;
}
