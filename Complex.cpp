#include <bits/stdc++.h>
using namespace std;
class Complex {
    public:
        int real, imag;;
        void readData(){
            cout<<"Enter the real part of the complex number : ";
            cin>>real;
            cout<<"Enter the imag part of the complex number : ";
            cin>>imag;
        }
        void printComplex(){
            cout<<real<<" + "<<imag<<"i"<<"\n";
        }
        Complex addComplex(Complex c){
            Complex c3;
            c3.real = real + c.real;
            c3.imag = imag + c.imag;
            return c3;
    }
} ;

int main(){        
    Complex c1, c2;
    c1.readData();
    c2.readData();
    cout<<"First Complex : ";
    c1.printComplex();
    cout<<"Second Complex : ";
    c2.printComplex();
    Complex c3;
    c3 = c1.addComplex(c2);
    cout<<"Sum of Complex : ";
    c3.printComplex(); 
}
