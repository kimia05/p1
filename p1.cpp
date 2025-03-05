#include <iostream>

using namespace std;

struct person_info()
{
   long id;
   int age;
   string name;

 return 0;
}

 double avg(int pi[],int size)
{
    int total_age=0;
    for(int i=0; i<=size ;i++)
    {
        total_age=pi[i].age+total_age;
    }
    return total_age/size;
}

int main()
{

    person_info pi[10];
    for(int i=0; i<10 ;i++)
    {
        cout<<"enter id"<<i+1<<":";
       cin>>pi[i].id>>endl;
       cout<<"enter name"<<i+1<<":";
       cin>>pi[i].name>>endl;
       cout<<"enter age"<<i+1<<"=";
       cin>>pi[i].age>>endl;

       cout<<avg(pi,size);
    }
    return 0;
}
