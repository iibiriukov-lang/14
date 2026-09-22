//Begin14 Дано змінні A, B, C. Змінити їх значення, перемістивши вміст A в B, B - в C, C -в A, і вивести нові значення змінних A, B, C.

#include <iostream> 
using namespace std;
int main() { 
    //створюємо змінні
    int A, B, C; 
    //вводимо значення змінних
    cin >> A >> B >> C; 
    //переміщуємо значення
    int  temp = A;      
    A = C;
    C = B;        
    B = temp;     
    //виводимо нові значення
    cout << "A = " << A << endl; 
    cout << "B = " << B << endl; 
    cout << "C = " << C << endl; 

    return 0; 
}

//Begin11 Дана довжина L окружності. Знайти її радіус R і площу S круга, обмеженого циколом, враховуючи, що L = 2 ·π· R, S = π · R2. Значення π вважати рівним 3.14.

#include <iostream>
using namespace std;
int main() {
    //створюємо змінні
    double L, R, S;
    const double PI = 3.14;
    //вводимо значення змінної
    cout << "Введіть довжину кола (L): ";
    cin >> L;
    //рахуємо
    R = L / (2 * PI);
    S = PI * R * R;
    //відповідь
    cout << "\n--- Результати розрахунку ---" << endl;
    cout << "Радіус кола (R) = " << R << endl;
    cout << "Площа круга (S) = " << S << endl;

    return 0;
}

//Begin31 Дано катети прямокутного трикутника a і b. Знайти квадрат гіпотенузи c2 = a2 +b2.

#include <iostream>
using namespace std;
int main() {
    //створюємо змінні
    double A, B;
    //вводимо значення змінних
    cout << "Введіть коефіцієнт A (A != 0): ";
    cin >> A;
    
    cout << "Введіть коефіцієнт B: ";
    cin >> B;
    //рахуємо
    double x = -B / A;
    //відповідь
    cout << "Розв'язок рівняння x = " << x << endl;
    
    return 0;
}
