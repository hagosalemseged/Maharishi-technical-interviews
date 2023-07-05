/*
------------------------------Customer class------------------
Write customer class which prints name + units consumed and amount paid. 
(if units consumed >= 100 amount paid = 25 if units consumed < 100 amount paid = units consumed * 0.25)
Customer customer1 = new Customer('John Doe', 20)
use oop best practices(any no. of classes, constructors, set and get methods)
*/
#include <iostream>
using namespace std;

class Customer
{
private:
    string name;
    int unit_consumed;
    double amount_paid;
public:
    Customer(string fullname, int unit){
        name = fullname;
        unit_consumed = unit;
    }
    double calculateFee(){
        if(unit_consumed>=100){
            amount_paid = 25;
        }else{
            amount_paid = unit_consumed * 0.25;
        }
        return amount_paid;
    }

    void Display(){
        std::cout<<"Name: "<<name<<endl;
        std::cout<<"Unit Consumed: "<<unit_consumed<<endl;
        std::cout<<"Amount Paid: "<<calculateFee()<<endl;
    }
    
};

int main(){
    Customer cust("Hagos Alemseged",50);
    cust.Display();
    return 0;
}