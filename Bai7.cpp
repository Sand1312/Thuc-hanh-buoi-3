#include <iostream>
#include "iomanip"
#include <math.h>
using namespace std;
class ptb2{
private:
    float a,b,c;
public:
    void set_a(float inttmp){
        a=inttmp;
    }
    float get_a(){
        return a;
    }
    void set_b(float inttmp){
        b=inttmp;
    }
    float get_b(){
        return b;
    }
    void set_c(float inttmp) {
        c=inttmp;
    }
    float get_c(){
        return c;
    }
    ptb2(){
        a=0;
        b=0;
        c=0;
    }
    void solve(){
        float delta=b*b-4*a*c;
        if (delta<0) cout<<"Phuong trinh vo nghiem\n";
        else if (delta==0) cout<<"PHuong trinh co nghiem kep x1=x2="<<fixed<< setprecision(3)<<static_cast <float> (-b/2*a);
        else cout <<"Nghiem thu nhat = "<<fixed<<setprecision(3)<<static_cast<float>((-b+sqrt(delta))/2*a)<<" "<<"Nghiem thu 2 = "<<fixed<<setprecision(3)<<static_cast<float>((-b-sqrt(delta))/2*a);
    }
};
int main (){
    ptb2 oj1;
    float inttmp{};
    while (inttmp==0) {
        cout<<"Nhap a: ";
        cin>>inttmp;
    }
    oj1.set_a(inttmp);
    cout<<"Nhao b: ";
    cin>>inttmp; oj1.set_b(inttmp);
    cout<<"Nhap c: ";
    cin>>inttmp; oj1.set_c(inttmp);
    oj1.solve();
}
