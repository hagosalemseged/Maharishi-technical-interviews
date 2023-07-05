/*
---------------------------Shape Interface-----------------------------------------------------------
EXERCISE: Create a Shape interface having methods area () and perimeter (). Create 2 subclasses, 
Circle and Rectangle that implement the Shape interface. Create a class Sample with main method and 
demonstrate the area and perimeters of both the shape classes. You need to handle 
the values of length, breath, and radius in respective classes to calculate their area and perimeter.

*/
#include <iostream>
using namespace std;

class Shape
{
protected:
    int width;
    int height;
    int pi = 3.14;
    int radius;

public:
    virtual double area() = 0;
    virtual double permiter() = 0;
    void setWidht(int w){
        width = w;
    }
    void setHeight(int h){
        height = h;
    }
    void setRadius(int r){
        radius = r;
    }
};

class Rectangle: public Shape{
    public:
    double area(){
        return width*height;
    }
    double permiter(){
        return 2*width*height;
    }
};

class Circle: public Shape{
    public:
    double area(){
        return pi*radius*radius;
    }
    double permiter(){
        return 2*pi*radius;
    }
};

int main(){
    Rectangle rect;
    Circle cir;
    rect.setWidht(5);
    rect.setHeight(8);
    std::cout<<"Rectangle Area: "<<rect.area()<<endl;
    std::cout<<"Rectanlge Permiter: "<<rect.permiter()<<endl;
    cir.setRadius(15);
    std::cout<<"Circle Area: "<<cir.area()<<endl;
    std::cout<<"Circle Perimeter: "<<cir.permiter()<<endl;
}