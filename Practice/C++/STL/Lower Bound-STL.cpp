#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    //Defining variables
    int n,q,qi;
    scanf("%d",&n);
    
    vector<int> v(n);
    
    //receiving input vector
    for(int i=0;i<n;i++){
        if(i<n) scanf("%d", &v[i]);
        }
    //receiving number of queries
    scanf("%d",&q);  
    
    //Defining vector iterator
    vector<int>::iterator it;
       
    for(int i=0;i<q;i++){
        
        //Receiving queries one at a time
        scanf("%d", &qi);
        
        //Finding lower bound
        it=lower_bound (v.begin(), v.end(), qi);
        
        //Printing the result for that query
        if(qi==*it) cout<<"Yes "<<(it-v.begin()+1)<<"\n";
        else cout<<"No "<<(it-v.begin()+1)<<"\n";
            
    }
    
    return 0;
}
