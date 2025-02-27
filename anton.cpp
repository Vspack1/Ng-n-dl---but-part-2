#include <iostream>  
using namespace std;  

int min_of_three(int a, int b, int c) {  
    int min_val = a;  
    if (b < min_val) min_val = b;  
    if (c < min_val) min_val = c;  
    return min_val;  
}  

int minimum(int a, int b) {  
    return a < b ? a : b;  
}  

int maximum_sum(int k2, int k3, int k5, int k6) {  
    // Tìm số 256  
    int k256 = min_of_three(k2, k5, k6);  
    
    // Cập nhật số chữ số 2 còn lại  
    int k2_remaining = k2 - k256;  
    
    // Tìm số 32  
    int k32 = minimum(k3, k2_remaining);  
    
    // Tính tổng  
    return (256 * k256) + (32 * k32);  
}  

int main() {  
    int k2, k3, k5, k6;  
    cin >> k2 >> k3 >> k5 >> k6;  
    
    cout << maximum_sum(k2, k3, k5, k6) << endl;  
    return 0;  
}  