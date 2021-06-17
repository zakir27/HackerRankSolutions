#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int n,temp,nd;
    vector<int> v;
    cin>>n;
    nd=n;
    
    //Inserting Data 
    while(nd--){
        cin>>temp;
        v.push_back(temp);
    }
    //Sorting    
    sort(v.begin(),v.end());
    
    //Printing Vector
    vector<int>::iterator it = v.begin();
    cout<<*it;
    ++it;
    while(it != v.end())
    {cout << ' ' << *it;
    ++it;}     
    
    return 0;
}
