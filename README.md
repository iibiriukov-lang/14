#include <iostream> 
using namespace std;
int main() { 
//створюємо три змінні A, B, C типу int
    int A, B, C; 
//вводимо значення змінних A, B, C з клавіатури
    cin >> A >> B >> C; 
//переміщуємо значення
    int  temp = A;      
    A = C;
    C = B;        
    B = temp;     
//виводимо нові значення для а,в,с
    cout << "A = " << A << endl; 
    cout << "B = " << B << endl; 
    cout << "C = " << C << endl; 
//Завершуємо програму
    return 0; 
}
