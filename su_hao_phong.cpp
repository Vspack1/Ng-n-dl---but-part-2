#include <iostream>  
using namespace std;  

int calculate_total(int c[]) {  
    int total = 0;  
    for (int i = 0; i < 5; i++) {  
        total += c[i];  
    }  
    return total;  
}  

int find_initial_b(int c[]) {  
    int total = calculate_total(c);  
    
    // Điều kiện cần  
    if (total % 5 != 0 || total / 5 == 0) {  
        return -1;  
    }  
    
    return total / 5;  
}  

int main() {  
    int c[5];  
    
    for (int i = 0; i < 5; i++) {  
        cin >> c[i];  
    }  
    
    cout << find_initial_b(c) << endl;  
    return 0;  
}  