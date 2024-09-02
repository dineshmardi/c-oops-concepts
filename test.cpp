#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class test
{
    int marks;
    public:
    void so()
    {
        marks=10;
    }
    friend class test1;
    friend void dinesh(test t);
};

class test1

{
  
    int marks_test;
    public:
    void ma(test t)
    {
         marks_test=t.marks;
         cout<<marks_test;
    }
   

};

void dinesh(test t)
{
    int gi=t.marks;
    cout<<endl<<gi<<endl;

}



int main()
{
    test tt;
    test1 t;
    tt.so();
   t.ma(tt);
   dinesh(tt);
    return 0;
}