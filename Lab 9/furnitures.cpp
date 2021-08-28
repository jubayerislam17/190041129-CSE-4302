#include<bits/stdc++.h>
using namespace std;

#define space1 "--------------------------------------------------\n"
#define space2 "##################################################\n"

enum class Material {Wood,Board,Steel,foam};
class Furniture
{
protected:
    double price;
    double discount;
    Material madeof;
    string name; //Task3
public:

    Furniture(double p,double d,Material m):price(0),discount(0),madeof(Material::Wood)
    {
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
    }
    void setPrice(double val)
    {
        if(val>0)
            price=val;
    }
    void setDiscount(double val)
    {
        if(val<=price)
            discount=val;
    }
    void setDiscountPercentage(double val) // New function added
    {
        if(val<=100)
            discount=price*val/100;
    }
    void setMadeof(Material val)
    {
        madeof=val;
    }
    void setName(string str)  //task3
    {
        name=str;
    }
    string getMadeof()
    {
        if(madeof==Material::Wood)
            return string("Wood");
        else if(madeof==Material::Board)
            return string("Board");
        else if(madeof==Material::Steel)
            return string("Steel");
        else
            return string("");
    }
    virtual void productDetails()=0;
    double getDiscountedPrice() const // New function added
    {
        return price-discount;
    }
};



enum class BedSize{Single, SemiDouble, Double};

class Bed:public Furniture
{
private:
    BedSize type;
public:
    Bed(double p,double d,Material m, BedSize bsize): Furniture(p,d,m), type(bsize)
    {}

    string getbedsize()
    {
        if(type==BedSize::Single)
            return string("Single");
        else if(type==BedSize::Double)
            return string("Double");
        else if(type==BedSize::SemiDouble)
            return string("SemiDouble");
        else
            return string("");
    }


     void productDetails()
    {   cout<<space1;
        printf("Regular Price: %f\nDiscounted Price:%f\nMaterial:",price,price-discount);
        cout<<getMadeof()<<endl<<"Bed Size:"<<getbedsize()<<endl;
        cout<<space2;
    }

    
};

enum class SofaSize{One=1, Two, Three, Four, Five};

class Sofa:public Furniture
{
private:
    SofaSize seat;
public:
    Sofa(double p,double d,Material m, SofaSize num): Furniture(p,d,m), seat(num)
    {}


    string getsofasize()
    {
        if(seat==SofaSize::One) return string("One");
        else if(seat==SofaSize::Two) return string("Two");
        else if(seat==SofaSize::Three) return string("Three");
        else if(seat==SofaSize::Four) return string("Four");
        else if(seat==SofaSize::Five) return string("Five");
        else return string("");
    }

    void productDetails()
    {   cout<<space1;
        printf("Regular Price: %f\nDiscounted Price:%f\nMaterial:",price,price-discount);
        cout<<getMadeof()<<endl<<"No of seats:"<<getsofasize()<<endl;
        cout<<space2;
    }

    
    /*Furniture *f;
    void a()
    {
        f = new Bed();
    }

    ~Sofa
    {
        delete f;
    }*/
};

enum class AlmirahSize{Two=2, Three, Four};

class Almirah:public Furniture
{
private:
    AlmirahSize door;
public:
    Almirah(double p,double d,Material m, AlmirahSize num): Furniture(p,d,m), door(num)
    {}


     string getdoor()
    {
        if(door==AlmirahSize::Two) return string("Two");
        else if(door==AlmirahSize::Three) return string("Three");
        else if(door==AlmirahSize::Four) return string("Four");
        else return string("");
    }

     void productDetails()
    {   cout<<space1;
        printf("Regular Price: %f\nDiscounted Price:%f\nMaterial:",price,price-discount);
        cout<<getMadeof()<<endl<<"No of Doors:"<<getdoor()<<endl;
        cout<<space2;
    }

   
};

/**task 4
sort_furniture_discount will sort the array in descending order based on their discount price.
You may need to add some member functions
**/

void sort_furniture_discount(Furniture furnitures[],int no_of_furnitures)
{
    for(int i=0; i<no_of_furnitures; i++) 
        for(int j=i+1; j<no_of_furnitures; j++) 
            if(furnitures[i]->getDiscountedPrice() < furnitures[j]->getDiscountedPrice()) 
                swap(furnitures[i], furnitures[j]);
}


int main()
{
    Furniture* f_list[100];

    /**
        task 1
        So that following lines can be executed without error
    */
    f_list[0] = new Bed(10000,123,Material::Wood,BedSize::Single);
    f_list[1] = new Sofa(11000,234,Material::Steel,SofaSize::Five);
    f_list[2] = new Almirah(13000,345,Material::Wood,AlmirahSize::Two);
    f_list[3] = new Bed(10090,123,Material::Wood,BedSize::Single);

    /**task 1 ends here*/

    /**
        task 2
        So that following lines can be executed without error

        task 3 (Modify productDetails)
    */
    f_list[2]->setDiscountPercentage(30); // This line was modified
    /*For Task 3*/ f_list[0]->setName("Bahari Bed");
    for(int i=0; i<4; i++)
    {
        f_list[i]->productDetails();
    }

    /**task 2 ends here*/
    /**task 3 ends here*/

    /**task 4
    So that following lines can be executed without error
    */
    sort_furniture_discount(f_list,4);
    for(int i=0; i<4; i++)
    {
        f_list[i]->productDetails();
    }
    
    /**task 4 ends here*/

    for(int i=0; i<4; i++) delete f_list[i];
}