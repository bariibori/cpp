#include <iostream>
using namespace std;
struct Student
{
    int stdID;
    char name[20];
    char sex;
    int age;
    double cgpa;
};
int main()
{
Student s1={2021,"bona",'M',22,3.98};
cout<<"ID   :"<<s1.stdID<<endl;
cout<<"NAME :"<<s1.name<<endl;
cout<<"SEX  :"<<s1.sex<<endl;
cout<<"AGE  :"<<s1.age<<endl;
cout<<"CGPA :"<<s1.cgpa<<endl;

cout<<"\n.................................\n";
Student s2;
cout<<"ID   :";
cin>>s2.stdID;
cout<<"NAME :";
cin>>s2.name;
cout<<"SEX  :";
cin>>s2.sex;
cout<<"AGE  :";
cin>>s2.age;
cout<<"CGPA :";
cin>>s2.cgpa;
cout<<"\n" <<s2.stdID<<" ,"<<s2.name <<", "<<s2.sex<<", "<<s2.age<<" ,"<<s2.cgpa<<endl;
    return 0;
};