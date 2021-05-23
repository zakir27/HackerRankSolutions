#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    //Decalaring variables
    string a,b;
    
    //Taking Input
    cin>>a>>b;
    
    //Prinitng Results
    cout<<a.length()<<" "<<b.length()<<"\n"<<(a+b)<<"\n"<<b[0]+a.substr(1,a.length())<<" "<<a[0]+b.substr(1,b.length());
     
    return 0;
}