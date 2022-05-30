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

    
    return 0;
}
