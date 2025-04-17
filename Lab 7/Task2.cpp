#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
protected:
    double position;
    string color;
    double borderThickness;

public:
    Shape(double position, const string &color, double borderThickness) : position(position), color(color), borderThickness(borderThickness) {}

    virtual void draw() const {}

    virtual double calculateArea() const {}

    virtual double calculatePerimeter() const {}
};

class Circle : public Shape
{
private:
    double radius;
    double centerX, centerY;

public:
    Circle(double position, const string &color, double borderThickness, double radius, double centerX, double centerY) : Shape(position, color, borderThickness), radius(radius), centerX(centerX), centerY(centerY) {}

    void draw() const override
    {
        cout<<"\n"<<color<<" Circle at center ("<<centerX<<", "<<centerY<<") of radius: "<<radius<<""<<endl;
    }

    double calculateArea() const override
    {
        return 3.14159*radius*radius;
    }

    double calculatePerimeter() const override
    {
        return 2*3.14159*radius;
    }
};

class Rectangle : public Shape
{
private:
    double width;
    double height;
    double topLeftCornerX, topLeftCornerY;

public:
    Rectangle(double position, const string &color, double borderThickness, double width, double height, double topLeftCornerX, double topLeftCornerY) : Shape(position, color, borderThickness), width(width), height(height), topLeftCornerX(topLeftCornerX), topLeftCornerY(topLeftCornerY) {}

    void draw() const override
    {
        cout<<"\n"<<color<<" Rectangle starting from top left corner at Point ("<<topLeftCornerX<<", "<<topLeftCornerY<<") of Height: "<<height<<" and Width: "<<width<<endl;
    }

    double calculateArea() const override
    {
        return width*height;
    }

    double calculatePerimeter() const override
    {
        return 2*(width+height);
    }
};

class Triangle : public Shape
{
private:
    double x1, y1, x2, y2, x3, y3;

public:
    Triangle(double position, const string &color, double borderThickness, double x1, double y1, double x2, double y2, double x3, double y3) : Shape(position, color, borderThickness), x1(x1), y1(y1), x2(x2), y2(y2), x3(y3) {}

    void draw() const override
    {
        cout<<"\n"<<color<<" Triangle of vertices ("<<x1<<", "<<y1<<"), ("<<x2<<", "<<y2<<") and ("<<x3<<", "<<y3<<")"<<endl;
    }

    double calculateArea() const override
    {
        return ((0.5)* abs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)));
    }

    double calculatePerimeter() const override
    {
        double side1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        double side2 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
        double side3 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
        return side1 + side2 + side3;
    }
};

class Polygon : public Shape
{
public:
    Polygon(double position, const string &color, double borderThickness) : Shape(position, color, borderThickness) {}
};

int main()
{
    Circle temp1(0.0, "Red", 3.2, 15, 0, 0);
    Rectangle temp2(0.0, "Green", 2.2, 5, 6, 3.2, 4.3);
    Triangle temp3(0.0, "Blue", 1.2, 5.3, 2.2, 6.4, 2.3, 7.4, 5.6);

    temp1.draw();
    temp1.calculateArea();
    temp1.calculatePerimeter();

    temp2.draw();
    temp2.calculateArea();
    temp2.calculatePerimeter();

    temp3.draw();
    temp3.calculateArea();
    temp3.calculatePerimeter();
    return 0;
}