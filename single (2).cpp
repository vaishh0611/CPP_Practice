#include<iostream>
using namespace std;
class Vehicle
{
public:
Vehicle()
{
cout<<"This is a Vehicle\n";
}
};
class Car:public Vehicle
{
public:
Car()
{
cout<<"\nThis Vehicle is Car";
}
};
int main()
{
Car obj;
return 0;
}
