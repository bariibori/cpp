#include <iostream>
#include<cmath>
#include<cctype>
using namespace std;

int main(){
    double fnum,snum;
    char ch='T';
    cout<<ch<<" is lowercase?"<<islower(ch)<<endl;
    cout<<ch <<"is uppercase letter? "<<isupper(ch)<<endl;
    cout<<"uppercase oflatter a is  "<< (char)(toupper('a'))<<endl;
cout<<"lowwercase of latter a is"<<static_cast<char>(tolower('a'))<<endl;
cout<<"Enter two decimal nums: ";
cin>>fnum>>snum;
cout<<fnum<<"to the power of "<<snum<<"= "<<pow(fnum,snum)<<endl;
int num = -32;
 cout<<"Absolute value of"<<num<<"="<<abs(num)<<endl;
 cout<<"Square root of 28.00 ="<<sqrt(28.00)<<endl;

    return 0;
}
