#include <iostream>  
using namespace std;  

int max_of_three(int a, int b, int c) {  
    int max_val = a;  
    if (b > max_val) max_val = b;  
    if (c > max_val) max_val = c;  
    return max_val;  
}  

string can_distribute(int a, int b, int c, int n) {  
    int total_money = a + b + c + n;  
    
    // Điều kiện cần  
    if (total_money % 3 != 0) {  
        return "NO";  
    }  
    
    // Điều kiện đủ  
    int target = total_money / 3;  
    if (max_of_three(a, b, c) > target) {  
        return "NO";  
    }  
    
    return "YES";  
}  

int main() {  
    int a, b, c, n;  
    cin >> a >> b >> c >> n;  
    
    cout << can_distribute(a, b, c, n) << endl;  
    return 0;  
}  