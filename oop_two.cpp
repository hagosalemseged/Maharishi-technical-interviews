/*
--------------------------------Employee class-----------------------
create a java class that have three fields name, id, fee with constractors, getter, setter and other class 
setting feilds and display value and calculate total fee using methods.
*/
#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    string ID;
    int fee;
public:
    Employee(string fname, string id){
        name = fname;
        ID = id;
    }
    void setFee(int f){
        fee = f;
    }
    int getFee(){
        return fee;
    }
    double calculateSalary(){
        return getFee()*0.15;
    }
    void Display(){
        std::cout<<"Name: "<<name<<endl;
        std::cout<<"ID: "<<ID<<endl;
        std::cout<<"Salary: "<<calculateSalary()<<endl;
    }
};

int main(){
    Employee emp("Hagos Alemseged","compr10/2002");
    emp.setFee(30000);
    emp.Display();
    return 0;
}