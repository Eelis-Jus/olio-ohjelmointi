#include <iostream>
#include <string>
using namespace std;
//välillä ohjelma printtaa toisen marion konstruktorin perään :0 joskus normaalin Process exited with code:0
class Chef{
public:
    Chef(string s)
    {
        name = s;
        cout<<""<<name<<" konstruktori"<<endl;
    }
    ~Chef();
    void makeSalad();
    void makeSoup();
protected:
    string name;
};

void Chef::makeSalad(){
    cout<<""<<name<<" makes salad"<<endl;
}

void Chef::makeSoup(){
    cout<<""<<name<<" makes soup"<<endl;
}
Chef::~Chef(){
    cout<<""<<name<<" destruktori"<<endl;
}

class ItalianChef:public Chef{
public:
    string getName();
    void makePasta(int, int);
    ItalianChef(string s, int v, int j):Chef(s){
        name = s;
        jauhot = j;
        vesi = v;
        cout<<""<<name<<" konstruktori "<<endl;
    }
private:
    int vesi;
    int jauhot;
};

string ItalianChef::getName(){
    return name;
}

void ItalianChef::makePasta(int e, int a){

    cout<<""<<name<<" makes pasta with special recipe"<<endl;
    cout<<""<<name<<" users jauhot = "<<e<<endl;
    cout<<""<<name<<" users vesi = "<<a<<endl;
}

int main()
{
  //  Chef object("Chef Jyrki");
    ItalianChef object2("Chef Mario", 100, 250);
 //   object.makeSalad();
    object2.makePasta(250, 100);
 //   object.makeSoup();

    return 0;
}
