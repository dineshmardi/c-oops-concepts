#include<iostream>
namespace om
{
    int a=10;
    void prin()
    {
        std::cout<<a<<std::endl;
    }
}
namespace omm
{
    int a=90;
    void prin()
    {
        std::cout<<a<<std::endl;
    }
}

//using namespace om;


int main()
{
    omm::prin();
    return 0;
}