#include <iostream>
using namespace std;
class car
{
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
    car(){
        brand="N/A";
        weight=0;
        seats=0;
    }
    void show(){
        cout<<"brand: "<<brand<<" - ";
        cout<<"weight: "<<weight<<" kg - ";
        cout<<"seats: "<<seats<<" seats.\n\n";
    }
};
int main (){
    car car1,car2,car3;
    string strtmp;
    int inttmp;
    cout<<"Input info for car 1:\n";
    cout<<"Brand: ";getline(cin,strtmp);car1.setBrand(strtmp);
    cout<<"Weight: ";cin>>inttmp;car1.setWeight(inttmp);
    cout<<"Seats: ";cin>>inttmp;car1.setSeats(inttmp);
    cout<<"Input info for car 2:\n";
    cin.ignore();
    cout<<"Brand: ";getline(cin,strtmp);car2.setBrand(strtmp);
    cout<<"Weight: ";cin>>inttmp;car2.setWeight(inttmp);
    cout<<"Seats: ";cin>>inttmp;car2.setSeats(inttmp);
    cout<<"Input info for car 3:\n";
    cin.ignore();
    cout<<"Brand: ";getline(cin,strtmp);car3.setBrand(strtmp);
    cout<<"Weight: ";cin>>inttmp;car3.setWeight(inttmp);
    cout<<"Seats: ";cin>>inttmp;car3.setSeats(inttmp);
    cout<<"\n\n";
    cout<<"Car 1\n";
    car1.show();
    cout<<"Car 2\n";
    car2.show();
    cout<<"Car 3\n";
    car3.show();
}
