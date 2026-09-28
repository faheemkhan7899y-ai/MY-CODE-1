#include<iostream>
using namespace std;
class boy
{
    private:
    string name; string job; string hobey;
    string favouritefruit; string excercisetime;
    string hobeytime; string totalstudytime;
    string resttime;
    public:
    void show(string n,string j,string h,
    string ff,string et,string ht,string tst,string rt)
    {
        name=n;
        job=j;
        hobey=h;
        favouritefruit=ff;
        excercisetime=et;
        hobeytime=ht;
        totalstudytime=tst;
        resttime=rt;
        cout<<"---boy properties---"<<endl;
        cout<<"Name  : "<<name<<endl<<"Job  : "<<job<<endl<<"Hobey  : "<<hobey<<endl<<
        "Favouritefruit  : "<<favouritefruit<<endl<<"Excercisetime  : "<<excercisetime<<endl
        <<"Hobeytime  : "<<hobeytime<<endl<<"Totalstudytime  : "<<totalstudytime<<endl
        <<"Resttime  : "<<resttime<<endl;
    }
};
int main(){
    boy z1;
    z1.show("fahim khan","student","cricket","bannas and mangoes",
    "30 minutes","1 hour","5 hour","6 hours");
    
}
