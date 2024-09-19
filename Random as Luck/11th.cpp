// You are using GCC
#include <bits/stdc++.h>
using namespace std;

class Complex{
public:
    int a1;
    int a2;
    
    Complex(int x, int y){
        this->a1 = x;
        this->a2 = y;
    }
};

int main(){
    int a1, a2, b1, b2;
    cin >> a1 >> a2;
    cin >> b1 >> b2;
    
    Complex *Obj1 = new  Complex(a1, a2);
    Complex *Obj2 = new Complex(b1, b2);
    
    cout << "Coordinates: " << endl;
    cout << "(x, y) = (" << Obj1->a1 << ", " << Obj1->a2 << ")" << endl;
    cout << "(x, y) = (" << Obj2->a1 << ", " << Obj2->a2 << ")" << endl;
    return 0;
}