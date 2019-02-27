#include <iostream>
#include <string>
using namespace std;


class Shape
{
public:
    Shape() = default;
    ~Shape() = default;
    string name(){return _name;}
    void setName(string name){_name=name;}
    virtual double area() = 0;
protected:
    string _name{"shape abstract"};
};

class Rectangle : public Shape
{
public:
    Rectangle() : Shape() {_name = "Rectangle";}
    double area() override {return a*b;}

private:
    int a = 3;
    int b = 4;
};

class Circle : public Shape
{
public:
    Circle() : Shape() {_name = "Circle";}
    double area() override {return 3.14*r*r;}
private:
    int r = 1;
};


int main()
{
    Shape* rectangle = new Rectangle();
    Shape* circle = new Circle();

    cout << "Rectangle instance:" << rectangle->name() << 
            "area:" << rectangle->area() << endl;
    cout << "Circle instance:" << circle->name() <<
            "area:" << circle->area() << endl;
    return 0;
}
