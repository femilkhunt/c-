#include<iostream>
using namespace std;

class box{

    int a,b,c;
    public:
    
        int getdata(int x, int y, int z)
        {
            a=x ,b=y, c=z;
        }
        int volume()
        {
            return a*b*c;
        }

        box operator+(box &x)
        {
            box t;
            t.a=a+x.a;
            t.b=b+x.b;
            t.c=c+x.c;

            return t;
        }

        box operator-(box &x)
        {
            box t;
            t.a=a-x.a;
            t.b=b-x.b;
            t.c=c-x.c;

            return t;
        }

        box operator*(box &x)
        {
            box t;
            t.a=a*x.a;
            t.b=b*x.b;
            t.c=c*x.c;

            return t;
        }

        box operator++(int)
        {
            box t;
            t.a=a++;
            t.b=b++;
            t.c=c++;
            return t;
        }
        box operator++()
        {
            box t;
            t.a=++a;
            t.b=++b;
            t.c=++c;
            return t;
        }
}; 

int main()
{

    box b,b1,b2;
    
    b.getdata(3,3,3);
    cout<<"Volume of b:"<<b.volume()<<endl;
    b1.getdata(2,2,2);
    cout<<"Volume of b1:"<<b1.volume()<<endl;
    b2=b+b1;
    cout<<"Volume of b2+:"<<b2.volume()<<endl;
    b2=b-b1;
    cout<<"Volume of b2-:"<<b2.volume()<<endl;
    b2=b*b1;
    cout<<"Volume of b2*:"<<b2.volume()<<endl;
    //b++;
    b2=++b;
    cout<<"Volume of b2++:"<<b2.volume()<<endl;
    b2=b;
    cout<<"Volume of ++b2:"<<b2.volume()<<endl;
    return 0;
}