#include<iostream>
using namespace std;

class batsman{

    private :

    int bcode,inn,nout,run,batavg;
    char bname[20];

    int calavg()
    {
        return batavg= run/(inn-nout);
    }

    public:
        int getdata()
        {
            cout<<"Enter batmans name :";
            cin>>bname;
            cout<<"Enter batmans code :";
            cin>>bcode;
            cout<<"Enter batmans total inning played :";
            cin>>inn;
            cout<<"Enter batmans remains not out :";
            cin>>nout;
            cout<<"Enter batmans runs :";
            cin>>run;
        }

        int dispaly()
        {
            cout<<"batmans name :"<<bname<<endl;
            cout<<"batmans code :"<<bcode<<endl;
            cout<<"batmans inning :"<<inn<<endl;
            cout<<"batmans remain not out :"<<nout<<endl;
            cout<<"batmans runs :"<<run<<endl;
            cout<<"batmans average :"<<calavg();
        }
};

int main()
{
    batsman b;
    b.getdata();
    b.dispaly();
}
