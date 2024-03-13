#include<iostream>
using namespace std;
double val = 100;
double &f()
{
return val; // return reference to val 
//cannot return reference to local var only global 
}
int main()
{
double newval;
newval = f(); // assign value of val
f() = 99.1; // change val's value
// reference to val becomes
// target of assignment
 cout<<newval<<endl;
 cout<<val<<endl;
return 0; 
}