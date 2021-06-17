#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> s;
    int q,xy[2];
    
    scanf("%d",&q);
    
    while(q--){
        scanf("%d %d",&xy[0],&xy[1]);
        if(xy[0]==1) s.insert(xy[1]);
        else if (xy[0]==2) s.erase(xy[1]);
        else {
            set<int>::iterator itr=s.find(xy[1]);
            if(itr!=s.end()) cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
    return 0;
}



