#include "iostream"
using namespace std;
class Thisinh{
private:
    string* hoten;
    int somonthi;
    float** diem;
    float* trungbinh;
public:
    int getsomonthi(){
        return somonthi;
    }
    int soThisinh;bool* ok{};
    float tinh_tb(float *a,int n){
        soThisinh=n;
        int tong{};
        for (int i=0;i<n;i++) tong+=*(a+i);
        return static_cast <float> (tong)/float(n);
    }
    void setThisinh(int n,int t){
        hoten = new string[n];
        somonthi=t;
        diem = new float*[n];
        float *temp= new float[somonthi];
        trungbinh = new float[n];
        ok =new bool[n];
        for (int i=0;i<n;i++) {
            cout<<"nhap vao thong tin Thi sinh thu "<<i+1<<": \n";
            cin.ignore();
            cout<<"Ho va ten thu sinh thu "<<i+1<<": ";
            getline(cin,hoten[i]);
            diem[i]=new float[somonthi];
            for (int j=0;j<t;j++) {
                cout<<"Diem mon thu "<<j+1<<": ";
                cin>>diem[i][j];
                if (diem[i][j]==0) ok[i]=1;
                temp[j]=diem[i][j];
            }
            trungbinh[i]=tinh_tb(temp,somonthi);
            if (trungbinh[i]<5) ok[i]=1;
        }
    }
    void show(int n,int t){
        cout<<"\n\n";
        for (int i=0;i<n;i++) {
            cout<<"Thi sinh thu "<<i+1<<":\n";
            cout<<"Ho va ten: "<<hoten[i]<<endl;
            for (int j=0;j<t;j++) cout<<"diem mon thi thu "<<j+1<<": "<<diem[i][j]<<endl;
            cout<<"Diem trung binh: "<<trungbinh[i]<<"\n\n";
        }
    }
    void showThisinhpassed(int n, int t){
        cout<<"\n*** DANH SACH THI SINH THI DAU ***\n\n";
        for (int i=0;i<n;i++) {
            if (!ok[i]) {
                cout<<"THI SINH "<<hoten[i]<<endl;
                for (int j=0;j<t;j++) cout<<"Diem thi mon thu "<<j+1<<": "<<diem[i][j]<<endl;
                cout<<"Diem trung binh: "<<trungbinh[i]<<endl;
            }
        }
    }
    ~Thisinh(){
        delete [] hoten;
        for (int i=0;i<soThisinh;i++) delete[] diem[i];
        delete [] diem;
        delete [] trungbinh;
        delete [] ok;
    }
};
int main (){
    int n{},t{};
    while (n<=0){
        cout<<"Nhap so luong hoc sinh: ";
        cin>>n;
    }
    while (t<=0){
        cout<<"Nhap so luong mon thi: ";
        cin>>t;
    }
    Thisinh oj1;
    oj1.setThisinh(n,t);
    oj1.show(n,t);
    oj1.showThisinhpassed(n,t);
}
