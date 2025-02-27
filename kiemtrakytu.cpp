#include <iostream>  
#include <string>  
using namespace std;  

string check_characters(int n) {  
    int c_count = 0;  
    int plus_count = 0;  
    
    for (int i = 0; i < n; i++) {  
        char kitu;  
        cin >> kitu;  
        
        if (kitu == 'C') c_count++;  
        if (kitu == '+') plus_count++;  
    }  
    
    return (c_count >= 1 && plus_count >= 2) ? "YES" : "NO";  
}  

int main() {  
    int n;  
    cin >> n;  
    
    cout << check_characters(n) << endl;  
    return 0;  
}  