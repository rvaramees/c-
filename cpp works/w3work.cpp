w3_q1 :

#include<iostream>
#include<cmath>
using namespace std;
class Complex_num{
    const int x,y;
    public:
        Complex_num(int _x=0, int _y=0) : x(_x), y(_y) { } //LINE-1
        Complex_num(const Complex_num& c) : x(c.x), y(c.y) {} //LINE-2
        Complex_num addition(Complex_num c) {
            return Complex_num(x+c.x, y+c.y); //LINE-3
        }
    void print(){ cout << "(" << x << ", " << y << ")" << endl; };
};

int main(){
    int x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    Complex_num c1(x1,y1), c2(x2,y2);
    Complex_num c3 = c1.addition(c2);
    c3.print();
    return 0;
} 

// w3_q2 :

#include<iostream>

using namespace std;

class CharArray{
    char *arr;
    int size;

    public:
        CharArray(int n) : size(n), arr(new char[n]) {} //LINE-1

  		~CharArray(){ delete[] arr; } //LINE-2

        void EnterEle(){
            for(int i=0;i<size;i++)
                cin >> arr[i];
        }
        void FindMax(){
            char max = -1;
            for(int i=0;i<size;i++){
                if(max < arr[i])
                    max = arr[i];
            }
            cout << "Max: " << max;
        }
};
int main(){
    int n;
    cin >> n;
    CharArray a(n);
    a.EnterEle();
    a.FindMax();
    return 0;
}       

// w3_q3 :

#include<iostream>
using namespace std;
class Constant{
    int x, y;
    mutable int z; //LINE-1
    public:
        Constant(int _x, int _y) : x(_x), y(_y){}

        void change() const { z = x * y; } //LINE-2

        void print() const  { //LINE-3
            cout << "x = " << x << ", y = " << y << ", z = " << z;
        }
};
int main(){
    int i, j;
    cin >> i >> j;
    const Constant m(i, j);
    m.change();
    m.print();
    return 0;
}