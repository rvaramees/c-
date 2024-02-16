#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <typeinfo>
using namespace std;
int main(){ 
    // int a = 7;
    // int *p = &a;
    // int b = 6;
    // int *t = &b;
    // cout<<&a;
    // cout<<"\n"<<&b;
    // const int &i = a+2;
    // cout<<"\n"<<&a;
    vector<int> a;
    vector<int>:: iterator it;
    cout<<"Enter elements : ";
    for (int i = 0; i < 8; i++)
    {
        int b;
        cin>>b;
        a.push_back(b);
    }
    
    cout<<"Result : "<<a.size()<<"\n"<<"Vector : ";
    for (auto  i : a)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
    sort(a.begin(), a.end());
    cout<<"Sorted ascending order : ";
    for (auto  i : a)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
    cout<<"Sorted descending order : ";
    sort(a.begin(), a.end(), greater<int>());
    for (auto  i : a)
    {
        cout<<i<<" ";
    }
    int elem;
    cout<<"Enter element to search : ";
    cin>>elem;
    it = find(a.begin(),a.end(),elem);
    if(it!=a.end()){
        cout<<"Element "<<elem<<" found "<<it - a.begin()<<" (counting from zero).\n";
    }
    else{
        cout<<"Element not found .";
    }
    // auto x = 5.6f;
    // auto *p = &x;
    // auto *pp = &p;
    // cout<<typeid(pp).name();
    return 0;    
}