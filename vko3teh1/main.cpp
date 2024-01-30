#include <iostream>
#include <string>
using namespace std;

class Chef{
public:
    Chef(string);
    ~Chef();
    void makeSalad();
    void makeSoup();
protected:
    string name;
};

Chef::Chef(string s)
{
    name = s;
    cout<<""<<name<<" konstruktori"<<endl;
}

void Chef::makeSalad(){
    cout<<""<<name<<" makes salad"<<endl;
}

void Chef::makeSoup(){
    cout<<""<<name<<" makes soup"<<endl;
}
Chef::~Chef(){
    cout<<""<<name<<" destruktori"<<endl;
}
int main()
{
    Chef object("Chef Gordon Ramsay");
    object.makeSalad();
    object.makeSoup();
    Chef object2("Chef Anthony Bourdain");
    object2.makeSalad();
    object2.makeSoup();

    return 0;
}
