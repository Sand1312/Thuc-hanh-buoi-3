#include <iostream>
#include "string"
using namespace std;
class car {
private:
    string brand;
    int weight;
    int seats;
    int travelers;
    string *travelers_list;
public:
        int getSeats(){
        return seats;
    }
    void setTraveler(int n) {
        travelers = n;
        travelers_list = new string[travelers];
        for (int i = 0; i < n; i++) {
            cout << "nhap vao Id cua du khach thu " << i + 1 << ": ";
            getline(cin, travelers_list[i]);
        }
    }
        car() {
            brand = "N/A";
            weight = 0;
            seats = 0;
        }
    void getInfo(){
        cout<<"Brand? ";
        getline(cin,brand);
        cout<<"weight: ";
        cin>>weight;
        cout<<"seats: ";
        cin>>seats;
    }
    void show(){
        cout<<"brand: "<<brand<<" - ";
        cout<<"weight: "<<weight<<" kg - ";
        cout<<"seats: "<<seats<<" seats.\n";
        showTravelers_list(travelers);
    }
    void showTravelers_list(int n) {
        for (int i = 0; i < n; i++) cout << "ID cua du khach thu " << i+1 << " la: " << travelers_list[i] << endl;
    }

    int getTravelers() {
        return travelers;
    }
    ~car() {
        delete[] travelers_list;
    }
};
int main(){
    cout<<"Number of cars: ";
    int n;cin>>n;
    car *cars= new car[n];
    cin.ignore();
    for (int i=0;i<n;i++) {
        cout<<"Input info for car "<<i+1<<":\n";
        (cars+i)->getInfo();
        int inttmp{};
        while(inttmp<=0||inttmp>(cars+i)->getSeats()) {
            cout<<"Numbers of Travelers: ";
            cin>>inttmp;
        }
        cin.ignore();
        (cars+i)->setTraveler(inttmp);
    }
    cout<<"\n\n\n";
    for (int i=0;i<n;i++) {
        cout<<"Car "<<i+1<<endl;
        (cars+i)->show();
    }
    delete [] cars;
    return 0;
}
