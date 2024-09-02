#include<iostream>
using namespace std;


//within a class function having same name and different behaviour through object of that class
class overload
{
    int num1,num2,s,m;
    public:
    void persion()
    {
        cout<<"enter two number="<<endl;
        cin>>num1>>num2;
        s=num1+num2;
        cout<<"addition="<<s<<endl;

    }void persion(int a,int b)
    {
        m=a*b;
        cout<<"multiplication="<<m<<endl;

    }
};

int main()
{
overload o;
o.persion();
o.persion(10,20);

    return 0;
}