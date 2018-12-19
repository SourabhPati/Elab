#include <iostream>
using namespace std;

template<class T>
  class Sample
  {
    public:
    int a,b,c,d,e;
    void getdata()
    {
      cin>>a>>b>>c>>d>>e;
    }
    void display()
    {
      cout<<"Tamil="<<a<<"\n";
      cout<<"English="<<b<<"\n";
      cout<<"Maths="<<c<<"\n";
      cout<<"Science="<<d<<"\n";
      cout<<"Social="<<e;
    }
  };
int main()
{
	Sample<int> s;
  	s.getdata();
  	s.display();
	return 0;
}