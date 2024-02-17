#include <bits/stdc++.h>
using namespace std;
const int m = 3, n = 3;
struct Arr{
    int arr[m][n];
};
struct Arr matrixRead(){
    Arr a;
    cout<<"Enter the Matrix elements : "<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>a.arr[i][j];
        }
    }
    return a;
}
void matrixPrint(Arr a){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<a.arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
struct Arr matrixTranspose(Arr a){
    Arr t;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            t.arr[i][j] = a.arr[j][i];
        }
    }
    cout<<"The transpose of matrix : "<<endl;
    matrixPrint(t);
    return t;
}
void isSymmetric(Arr t, Arr a){
    int c = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if( a.arr[i][j] == t.arr[i][j]){
                c = 1;
            }    
            else{
                c = 0;
                break;
            }
        }
        if(c==0) break;
    }
    if(c==1){
        cout<<"The matrix is Symmetric..."<<endl;
    }
    else{
        cout<<"The matrix is not Symmetric..."<<endl;
    }
}
void matrixAdd(){
    Arr a = matrixRead();
    Arr b = matrixRead();
    Arr c;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            c.arr[i][j] = a.arr[i][j] + b.arr[i][j];
        }
    }
    cout<<"The sum of matrices  : "<<endl;
    matrixPrint(c);
}
void matrixSubtract(){
    Arr a = matrixRead();
    Arr b = matrixRead();
    Arr c;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            c.arr[i][j] = a.arr[i][j] - b.arr[i][j];
        }
    }
    cout<<"The difference of matrices  : "<<endl;
    matrixPrint(c);
}
int main(){
  int ch;
  while(true){
    cout<<"=========================\n1. Matrix Addition.\n2. Matrix Subtraction.\n3. Transpose of matrix.\n4. Check Symmetric or not.\n5. Exit.\n=========================\n";
    cin>>ch;
    Arr a, t;

    switch(ch)
    {
    case 1:
        matrixAdd();
        break;
    case 2:
        matrixSubtract();
        break;
    case 3:
        // matrixRead();
        a = matrixRead();
        t = matrixTranspose(a);
        break;
    case 4:
        a = matrixRead();
        t = matrixTranspose(a);
        isSymmetric(t, a);
        break;    
    case 5:
        return 0;
    default:
        cout<<"Enter valid choice..."<<endl;
        break;
    }
  }
}