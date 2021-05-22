#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    
    //Decalaring Variables
    vector<int> result;
    int lengthstr=1, temp;
    char ch;
    
    //String to StringStream
    stringstream ss(str);
    \
    //Counting number of elements using commas
    for(int i = 0; i < str.length(); i++) {  
        if(str[i]==',')  
            lengthstr++;  
    }
    
    //storing in result vector
    while(lengthstr--){
        ss>>temp>>ch;
        result.push_back(temp);
    }
   
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}