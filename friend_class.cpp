#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class A

{
    int a;
    public:
    void input()
    {
        a=18;
    }
    friend class B;
    friend void read(A r);
};
class B
{
    int d;
    public:
    void input(A r)
    {
        d=10;
        cout<<d<<endl<<r.a<<endl;

    }
    
};
void read(A b)
{
    cout<<"hello="<<b.a;
}

int main()
{
    B bb;
    A r;
    r.input();
    bb.input(r);
    read(r);

    return 0;
}