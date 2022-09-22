#include <iostream>
using namespace std;
class car
{
private:
    string brand;
    int weight;
    int seats;
public:
    car(){
        brand="N/A";
        weight=0;
        seats=0;
    }
    void getInfo(){
        cout<<"Brand: ";
        getline(cin,brand);
        cout<<"weight: ";
        cin>>weight;
        cout<<"seats: ";
        cin>>seats;
        cin.ignore();
    }
    void show(){
        cout<<"brand:"<<brand<<" - ";
        cout<<"weight:"<<weight<<" kg - ";
        cout<<"seats:"<<seats<<" seats.\n\n";
    }
};
int main (){
    car car1,car2,car3;
    cout<<"Input info for car 1:\n";
    car1.getInfo();
    cout<<"Input info for car 2:\n";
    car2.getInfo();
    cout<<"Input info for car 3:\n";
    car3.getInfo();
    cout<<"\n\n";
    cout<<"Car 1\n";
    car1.show();
    cout<<"Car 2\n";
    car2.show();
    cout<<"Car 3\n";
    car3.show();
}