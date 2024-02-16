// 1 a
// 2 d
// 3 b
// 4 d
// 5 a
// 6 c
// 7 a b
// 9 d

#include <iostream>
using namespace std;
// class Check{
//     public:
//         Check(){ cout<<"Default"<<endl;}
//         Check(int x = 0){ cout<<"Parameterized"<<endl;}
//     // int x1 = 1;
//     // public:
//     //     int x2 = 2;
//     //     int get_x1(){ return x1; }
//     //     int get_x2(){ return x2; }
// };
// 
// 
// class instance{
//     int i;
//     public:
//         instance(int i_= 0) : i(i_) { cout<< i << " ";}
//         ~instance(){ cout<<i<<" ";}
// };
// instance obj1(2);
// int gdata  = 10; 
// class myClass {
//     int mdata;
//     public:
//         myClass(int mdata_ = 0 ) : mdata(++mdata_){ ++gdata;}
//         ~myClass(){mdata = 0; gdata--;}
//         void print(){ cout<< mdata<<", "<<gdata<<endl;}
// };
// void func(){
//     myClass ob;
//     ob.print();
// };
// class Student {
//     int roll, marks;
//     string name;
//     public:
//         Student(int _roll, string _name, int _marks) : roll(_roll),name(_name), marks(_marks){ }
//         void incr_marks(){this->marks++;}
//         void show(){ cout<<roll<<" : " <<name<<" : "<<marks;} 
// };
// class myClass{
//     private:
//         double d;
//     public:
//         myClass() : d(0.0) { cout<< "myClass() ";}
//         myClass(double _d) :d(_d) { cout<<"myClass(double) ";}
//         myClass(const myClass& _od) :d(_od.d) { cout<<"myClass(myClass&) ";}
//         ~myClass() { cout<<d<<" ";}
// };
class Pointer {
    int *y, *x, *z;
    public:
        Pointer( int a, int b, int c) : x(seta(a)), y(setb(b)), z(setc(c)) { }
        int* seta(int a){
            cout<<a;
            return (new int(a));
        }
        int* setb(int b){
            cout<<b;
            return (new int(b));
        }
        int* setc(int c){
            cout<<c;
            return (new int(c));
        }
};
int main(){
    Pointer p(1, 0, 2);
    // myClass d1(1.2);
    // myClass d2();
    // myClass d3() = 2.3;
    // myClass d4() = d3;
    // Student a(10, "Ram", 85);
    // a.incr_marks();
    // a.show();
    // myClass ob;
    // func();
    // ob.print();
    // instance *pObj = new instance(1);
    // instance obj2(3);
    // {
    //     instance obj3(4);
    //     delete pObj;
    // }
    // CharSeq c1('a','c');
    // CharSeq c2('o','k');
    // CharSeq c3(c1);
    // c3.change(&c2);
    // c3.show();
    // Line l(1, 9);
    // Check t;
    // int a, b;
    // a = t.x1;
    // b = t.x2;
    // a = t.get_x1();
    // b = t.get_x2();
    return 0;
}