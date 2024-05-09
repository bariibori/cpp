#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
struct Student
{
int stdID;
string name;
char sex;
int age;
double cgpa;
};

int main()
{
    Student students[5];
    for(int i=0; i<5;i++){
        cout<<"\n..............student"<<i+1<<"............\n";
        cout<<"ID     :";
        cin>>students[i].stdID;
        cout<<"name   :";
        cin>>students[i].name;
         cout<<"sex   :";
        cin>>students[i].sex;
        cout<<"age    :";
        cin>>students[i].age;
         cout<<"cgpa  :";
        cin>>students[i].cgpa;
    }
     cout<<"IN TABLE FORM OF FTUDENTS"<<endl;
    cout<<left;
    cout<<"\n"<<setw(10)<<"ID"<<setw(25)<<"Name"<<setw(10)<<"sex"<<setw(10)<<"age"<<setw(10)<<"cgpa";
   
    for(int i=0; i<5;i++){
       cout<<"\n"<<setw(10)<<students[i].stdID
        <<setw(25)<<students[i].name
        <<setw(10)<<students[i].sex
        <<setw(10)<<students[i].age
        <<setw(10)<<students[i].cgpa;
        cout<<endl;
    }
     Student students1[3]={10,"tom",'m',21,4.0,11,"aye",'f',22,3.88,12,"lam",'m',23,3.6};
cout<<left;
    cout<<"\n"<<setw(10)<<"ID"<<setw(25)<<"Name"<<setw(10)<<"sex"<<setw(10)<<"age"<<setw(10)<<"cgpa";
   
    for(int i=0; i<5;i++){
         cout<<"\n"<<setw(10)<<students1[i].stdID
        <<setw(25)<<students1[i].name
        <<setw(10)<<students1[i].sex
        <<setw(10)<<students1[i].age
        <<setw(10)<<students1[i].cgpa;
        cout<<endl;
    }
    return 0;
}