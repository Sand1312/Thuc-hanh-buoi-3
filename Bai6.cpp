#include <iostream>
using namespace std;
class hinhchunhat{
private:
    int dai,rong;
public:
    void setDai(int d){
        dai=d;
    }
    int getDai(){
        return dai;
    }
    void setRong(int r){
        rong=r;
    }
    int getRong(){
        return rong;
    }
    hinhchunhat(){
        dai=-1;
        rong=-1;
    }
    int dientich(){
        return dai*rong;
    }
    int Chuvi(){
        return (dai+rong)*2;
    }
};
int main (){
    hinhchunhat oj1;
    cout<<"Chieu dai hinh chu nhat: ";
    int inttmp;
    cin>>inttmp;oj1.setDai(inttmp);
    cout<<"Chieu rong hinh chu nhat: ";
    cin>>inttmp;oj1.setRong(inttmp);
    cout<<"Chu vi hinh chu nhat la: "<<oj1.Chuvi()<<"\nDien tich hinh chu nhat la: "<<oj1.dientich()<<endl;
}
