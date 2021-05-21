#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,k,temp;
    
    //Taking first line
    scanf("%d %d", &n, &q);
    
    vector<vector<int>>a(n),query(q);
    
    //Taking in array a
    for(int j=0;j<n;j++){
        scanf("%d",&k);
        
        for(int i=0;i<k;i++){
             scanf("%d",&temp);
             a[j].push_back(temp);
        }
    }

    //Taking in query and printing result
    for(int j=0;j<q;j++){
             scanf("%d %d",&k,&temp);
             query[j].push_back(k);
             query[j].push_back(temp);
             printf("%d\n",a[query[j][0]][query[j][1]]);
        }
    
    
    return 0;
}