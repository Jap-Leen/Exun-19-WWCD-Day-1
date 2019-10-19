Write a class implementing copy constructor.
  #include <iostream>
using namespace std;
class abc
{
  int a;
  float b;
  public:
  abc()
  {
    a=0;
    b=0.0;
  }
  abc(abc &t)
  {a=t.a;
  b=t.b;}
};
int main() {
   abc obj,obj1(obj);
    return 0;

}
