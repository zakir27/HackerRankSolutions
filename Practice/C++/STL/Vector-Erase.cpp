#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //Defining Variable
    int n,del[3];
    scanf("%d",&n);
    
    vector<int> v(n);
    
    //receiving input
    for(int i=0;i<n+3;i++){
        if(i<n) scanf("%d", &v[i]);
        else scanf("%d",&del[i-n]);
    }
    
    //Erasing data
    v.erase(v.begin()+del[0]-1);
    v.erase(v.begin()+del[1]-1,v.begin()+del[2]-1);
    
    //Printing Size
    printf("%d\n",v.size());
    
    //Printing Final Vector
    for(int i=0;i<v.size();i++)
        printf("%d ",v[i]);
    
    return 0;
}
