#include <iostream>
using namespace std;
class student
{
    int sid;
    char name[10];
public:
    void getdata()
    {
        cout<<"Enetr id";
        cin>>sid;
        cout<<"Enetr NAme";
        cin>>name;
    }
    void putdata()
    {
        cout<<"id is";
        cout<<sid;
        cout<<"Name is";
        cout<<name;
    }
    int getsid()
    {
        return sid;
    }
    void setsid(int n)
    {
        sid=n;
    }
    
};
int main()
{
   student s1[10]; 
   int i,si,index;
   for(i=0;i<3;i++)
   {
    s1[i].getdata();
   }
   cout<<"Enter Number to search";
   cin>>si;
   for(i=0;i<3;i++)
   {
     if(s1[i].getsid() == si)
     {
         index=i;
         break;
     }
   }
   cout<<"Data of search student:";
   s1[index].putdata();
   s1[index].setsid(40);  // update eid to 40 for search student
   s1[index].putdata();
    return 0;
}