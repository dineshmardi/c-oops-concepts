#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class mybank
{
    private:
    int pin,balance;
    public:
    int account_no;
    string bname,ifsc;
    void show()
    {
        pin=3121;
        balance=2824893;
        bname="paytm";
        ifsc="1243paytm";
        account_no=937284875;
        cout<<pin<<endl<<balance<<endl<<bname<<endl<<ifsc<<endl<<account_no<<endl;
    }
    friend class allbank;
    friend void get(mybank m);
};

class allbank
{
    
    public:
  
    void out(mybank g)

    {
        cout<<"pin="<<g.pin<<endl;
    }

};

void get(mybank b)
{
    cout<<endl<<b.balance<<endl;
}


int main()
{

    mybank b;
    allbank all;
    b.show();
    cout<<endl<<b.bname<<endl<<b.ifsc<<endl<<b.account_no<<endl;
    cout<<endl;
    all.out(b);
    get(b);
    return 0;
}