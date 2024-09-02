#include<iostream>
using namespace std;

                   //single inhertance
class dad
{
    protected:
    int moneyy;
    public:
    void show()
    {
        moneyy=4000;
        cout<<"money="<<moneyy<<endl;
    }
};

class son:public dad
{
    protected:
    int money;
    public:
    void give();
};

void son::give()
{
    money=2000;
    cout<<"my dad have="<<moneyy<<endl<<"i have "<<money<<endl;
}

//multi level inheritance

class grandson:public son
{
    public:
    void showoff();
};
void grandson::showoff()
{
    cout<<"i have 20 rupees"<<endl;
}


class animal
{
    public:
    void eat()
    {
        cout<<"eating.."<<endl;
    }
};

class cat:public animal
{
    public:
    void speak()
    {
    cout<<"mew mew..."<<endl;
    }

};



class dog:public animal
{
    public:
    void speak()
    {
    cout<<"woof woof..."<<endl;
    }
};



int main()
{

    cat c;
    dog d;
    c.eat();
    c.speak();
    cout<<endl<<endl<<endl;
     d.eat();
    d.speak();

    return 0;
}