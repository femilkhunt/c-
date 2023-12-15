#include<iostream>
using namespace std;

class solid{

    public :
    int z;
    solid(int a)
    {
        z=a*a*3.14;
        cout<<"Area of circle :"<<z;
    }
    solid(int a,int b)
    {
        z=a*b;
        cout<<"Area of rectangle :"<<z;
    }
    solid(float a, float b)
    {
        z=(a*b)*0.5;
        cout<<"Area of triangle :"<<z;
    }

};

int main()
{
    int a;
    int r,l,b;
    float x,y;
    cout<<"1)circle"<<endl<<"2)rectangle"<<endl<<"3)triangle"<<endl<<"4)exit"<<endl;
    
for(int i=0;i<5;i++)
{
    cout<<endl<<"Enter your choice :";
    cin>>a;
    switch (a)
    {
        case 1:
            {
                cout<<"Enter Radius :";
                cin>>r;
                solid s(r);
                break;
            }
        case 2:
            {
                cout<<"Enter length :";
                cin>>l;
                cout<<"Enter breath :";
                cin>>b;
                solid s(l,b);
                break;
            }
        case 3:
            {
                cout<<"Enter length :";
                cin>>x;
                cout<<"Enter height :";
                cin>>y;
                solid s(x,y);
                break;
            }
        case 4:
            {
                goto end;
            }
        default :
            {
                goto end;
            }
    }
}
    end:
    return 0;     
}