#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int>m;
    
    int q,qi,y;
    string x;
    map<string,int>::iterator itr;
    
    scanf("%d",&q);
    
    while(q--){
        scanf("%d",&qi);
        cin>>x;
        if(qi==1){
            scanf("%d",&y);
            itr=m.find(x);
            
            if(itr==m.end()) m.insert(make_pair(x,y));
            else m[x]=m[x] +y;
        }
       
        else if(qi==2) m.erase(x);
        
        else cout<<m[x]<<"\n";
    }
    return 0;
}



