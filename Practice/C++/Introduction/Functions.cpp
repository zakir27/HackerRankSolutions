#include <iostream>
#include <cstdio>

//Added alorithm header
#include<algorithm>
using namespace std;

//Created a comparision function
bool comp(int a, int b){
    return (a < b);
}

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int p, int q, int r,int s){
    
    return max({p,q,r,s},comp);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}