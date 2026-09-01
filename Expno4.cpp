#include <iostream>
using namespace std;
class Rectangle {
private:
      float length;
      float width;
public:
     Rectangle(){
     length=0;
     width=0;
 }
Rectangle(float l,float w){
        length=l;
        width=w;
}
~Rectangle(){
 cout<<"Rectangle object destroyed."<<endl;
}
float area(){
      return length*width;
    }
float perimeter(){
      return 2*(length + width);
    }
};
int main()
{
Rectangle r(10,5);
cout<<"Area=" <<r.area() <<endl;
cout<<"Perimeter=" <<r.perimeter()<<endl;
return 0;
}
