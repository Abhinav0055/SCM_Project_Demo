/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class complex{
    int real,imag;
    public:
    complex(){
        real=imag=0;
    }
    complex(int r, int i){
        real=r,imag=i;
    }
    friend complex sum(complex,complex);
    void disp(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};

 complex sum(complex C1,complex C2){
        complex C3;
        C3.real= C1.real + C2.real;
        C3.imag= C1.imag + C2.imag;
        return C3;
    }

int main()
{
    complex C1(5,7);
    complex C2(3,1);
    complex C3;
    C1.disp();
    C2.disp();
    C3.disp();

    return 0;
}
