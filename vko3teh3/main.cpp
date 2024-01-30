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
    void makePasta();
    ItalianChef(string s):Chef(s){
        name = s;
        cout<<""<<name<<" konstruktori "<<endl;
    }
};

string ItalianChef::getName(){
    return name;
}

void ItalianChef::makePasta(){
    cout<<""<<name<<" makes pasta"<<endl;
}

int main()
{
    Chef object("Chef Jyrki");
    ItalianChef object2("Chef Mario");
    object.makeSalad();
    object2.makePasta();
    object.makeSoup();

    return 0;
}
