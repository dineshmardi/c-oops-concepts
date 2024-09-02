#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

struct node
{
    int data;
    node* next;
};

int main()
{
    node* head=new node();
    head->data=1;
    node* second=new node();
    second->data=2;
    head->next=second;
    second->next=NULL;

    

    return 0;
}