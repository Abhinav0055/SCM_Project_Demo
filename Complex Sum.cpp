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
