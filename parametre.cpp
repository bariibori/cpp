#include<iostream>
using namespace std;
double val = 100;
double &x()
{
return val; // return reference to val 
//cannot return reference to local var only global 
}
int main()
{
double newval;
newval = x(); // assign value of val
x() = 99.1; // change val's value
// reference to val becomes
// target of assignment
 cout<<newval<<endl;
 cout<<val<<endl;
return 0; 
}