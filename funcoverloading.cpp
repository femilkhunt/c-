#include<iostream>
using namespace std;

class func
{
    public :
        void area(int a, int b)
        {
            cout<<"Area of rectangle :"<<a*b<<endl;
        }
        void area(double a, double b)
        {
            cout<<"Area of triangle :"<<(a*b)*0.5<<endl;
        }
        void area(int a)
        {
            cout<<"Area of square :"<<a*a<<endl;
        }
        void area(double a)
        {
            cout<<"Area of circle :"<<(a*a)*3.14<<endl;
        }
};

int main()
{

    int a,b,c,d;
    double x,y;
    
    func f;
    f.area(45,67);
    f.area(5);
    f.area(3.7,5.6);
    f.area(5.4);


    return 0;
}