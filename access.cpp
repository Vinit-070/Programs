#include <iostream>
using namespace std;
class employee
{

  int eid;
  char name[10];
 public: 
  int salary;
  int geteid()
  {
      return eid;
  }
  void getdata()
  {
      cout<<"enter eno";
      cin>>eid;
      cout<<"enter name";
      cin>>name;
      cout<<"enter Salary";
      cin>>salary;
  }
  void putdata()
  {
      cout<<"eno is:";
      cout<<eid;
      cout<<"name is:";
      cout<<name;
      cout<<"Salary is";
      cout<<salary;
  }
 
    
};

int main()
{
    employee s1,s2,s3;
    //s1.eid = 1 //private can not access outside class
    //s1.salary=100; // public can access
    //cout<<s1.salary;
    s1.getdata();  
   s1.putdata();
     s2.getdata();  
   s2.putdata();
 
    cout<<"s1.eid is"<<s1.geteid();
    return 0;
}