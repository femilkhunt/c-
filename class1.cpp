#include<iostream>
using namespace std;

class student{

    private :
        int admno;
        int e;
        char sname[20];
        float eng,math,sci,total;

        int ctotal()
        {
            return eng+math+sci;
        }

        public :

            
            void takedata()
            {
                cout<<"Enter sname :";
                cin>>sname;
                cout<<"Enter admin no. :";
                cin>>admno;
                cout<<"Enter eng marks :";
                cin>>eng;
                cout<<"Enter maths marks :";
                cin>>math;
                cout<<"Enter science marks :";
                cin>>sci;
            }

            void showdata(){
                cout<<" sname :"<<sname<<endl;
                cout<<" admno :"<<admno<<endl;
                cout<<" eng marks :"<<eng<<endl;
                cout<<"math marks :"<<math<<endl;
                cout<<"sci marks :"<<sci<<endl;
                e=ctotal();
                cout<<"Total marks :"<<e<<endl;
            }
        
};


int main()
{
    student s;
    s.takedata();
    s.showdata();
}