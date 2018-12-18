#include <iostream>
using namespace std;

class room
{
  int length;
  int breadth;
  int height;
  
  public:
  
  void getroom()
  {
    cin>>length>>breadth>>height;
  }
  
  void putroom()
  {
      cout<<"Length="<<length<<"\n";
      cout<<"Breadth="<<breadth<<"\n";
      cout<<"Height="<<height<<"\n";
  }
};

class address
{
  int houseNumber;
  string city;
  string state;
  
  public:
  
  void getad()
  {
    cin>>houseNumber>>city>>state;
  }
  
  void putad()
  {
    cout<<"House No="<<houseNumber<<"\n";
    cout<<"City="<<city<<"\n";
    cout<<"State="<<state<<"\n";
  }
};


class house
{
  string houseName;
  address add;
  room rm[10];
  int numberOfRooms;
  
  public:
  
  void input()
  {
    cin>>houseName;
    add.getad();
    cin>>numberOfRooms;
    for(int i=0;i<numberOfRooms;++i)
    	rm[i].getroom();
  }
  
  void display()
  {
    if(numberOfRooms > 10)
    {
      cout<<"No of rooms should be less than 10";
      return;
    }
    cout<<"House name="<<houseName<<"\n";
    add.putad();
    for(int i=0;i<numberOfRooms;++i)
    {
      cout<<"House Details "<<i+1<<"\n";
      rm[i].putroom();
    }
  }
};

int main()
{
  
  	house H;
  	H.input();
  	H.display();

	return 0;
}