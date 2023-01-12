

//----------------------------------------
#include <iostream>
#include <string>
using namespace std;

//create the main class
class Geometry
{
  protected:
    string name;
  public :
    Geometry (string n){name=n;};
    void setName(string n){name=n;};
    string getName() const {return name;};
    virtual double getArea()const=0;
};
//create Sub class01 Circle
class getAreaOfCircle :public Geometry
{
  private:
    double radius;
  public :
    getAreaOfCircle (string n,double r):Geometry(n){radius =r;};
    void setName(string n){name=n;};
    void setRadius(double r){radius =r;};
    double getRadius() const {return radius;};
    double getArea() const {return 3.14*radius*radius;};

};
// Create subclass 02 Rectangle
class getAreaOfRectangle:public Geometry
{
  private:
    double a,b;
  public:
    getAreaOfRectangle(string n,double X,double Y):Geometry(n){a=X;b=Y;};
    void setA(double X){a=X;};
    void setB(double Y){b=Y;};
    double getA ()const{return a;};
    double getB() const {return b;};
    double getArea() const {return a*b;};
};
// Create subclass 03 Triangle
class getAreaOfTriangle :public Geometry
{
  private:
    double c,d;
  public:
    getAreaOfTriangle(string n,double W,double Z):Geometry(n){c=W;d=Z;};
    void setC(double W){c=W;};
    void setD(double Z){d=Z;};
    double getC()const{return c;};
    double getD()const {return d;};
    double getArea() const {return 0.5*c*d;};
};

// main Program
int main()
{
  Geometry*a[3]={new getAreaOfCircle("Circle",4),new getAreaOfRectangle("Rectangle",1,3),new getAreaOfTriangle("Triangle",3,4)};

  for(int i=0;i<3;i++)
  cout<<a[i]->getName()<<" "<<a[i]->getArea()<<endl;
return 0;
};
