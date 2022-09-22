#include <iostream>
#include <math.h>
using namespace std;
class diem {
private:
    string name;
    int x,y;
public:
    void setName(string s){
        name= s;
    }
    string getName(){
        return name;
    }
    void set_x(int a){
        x=a;
    }
    int get_x(){
        return x;
    }
    void set_y(int a){
        y=a;
    }
    int get_y(){
        return y;
    }
    diem(){
        name="N/A";
        x=0;
        y=0;
    }
    float distance(diem d){
        return sqrt((d.x-x)*(d.x-x)+(d.y-y)*(d.y-y));
    }
    void show(){
        cout<<"Diem "<<name<<"("<<x<<","<<y<<")\n";
    }
};
int main (){
    int n{};
    while (n<=0){
        cout<<"Nhap so diem: ";cin>>n;
    }
    diem* points = new diem[n];
    int tmp;
    string s;
    for (int i=0;i<n;i++) {
        cin.ignore();
        cout << "Nhap diem thu " << i + 1 << ":\n";
        cout << "Name: ";
        getline(cin, s);
        points[i].setName(s);
        cout << "Nhap hoanh do diem thu " << i + 1 << ", x=";
        cin >> tmp;
        points[i].set_x(tmp);
        cout << "Nhap tung do diem thu " << i + 1 << ", y=";
        cin >> tmp;
        points[i].set_y(tmp);
    }
    int pointindex = -1;
    float kc,kcmin{65535};
    for (int i=0;i<n;i++){
        kc=0.0;
        for (int j=0;j<n;j++){
            if (i!=j) kc=kc+points[i].distance(points[j]);
        }
        if (kc<kcmin){
            kcmin=kc;
            pointindex =i;
        }
    }
    cout<<"pi= "<<pointindex<<",kcmin= "<<kcmin<<"\n";
    cout<<"Diem trong tam cua tap hop la ";
    points[pointindex].show();
    delete [] points;
}
