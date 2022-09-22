#include <iostream>
#include "string"
using namespace std;
class car {
private:
    string brand;
    int weight;
    int seats;
public:
    void setBrand(string b){
        brand=b;
    }
    string getBrand(){
        return brand;
    }
    void setWeight(int w){
        weight=w;
    }
    int getWeight(){
        return weight;
    }
    void setSeats(int s){
        seats=s;
    }
    int getSeats(){
        return seats;
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
        cin.ignore();
    }
    void show(){
        cout<<"brand: "<<brand<<" - ";
        cout<<"weight: "<<weight<<" kg - ";
        cout<<"seats: "<<seats<<" seats.\n";
    }
    ~car() {
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
    }
    cout<<"\n\n\n";
    for (int i=0;i<n;i++) {
        cout<<"Car "<<i+1<<endl;
        (cars+i)->show();
    }
    delete [] cars;
    return 0;
}
