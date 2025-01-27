#include <iostream>
using namespace std;


double input_a() {
    cout << "Введите число A: ";
    double a;
    cin >> a;
    return a;
}

double input_b() {
    cout << "Введите число B: ";
    double b;
    cin >> b;
    return b;
}

double sum(){
    return input_a() + input_b();
}

double diff(){
    return input_a() - input_b();
}


int main() {

    int choice;

    cout << "Меню:\n"; 
    cout << "1. Ввести A\n"; 
    cout << "2. Ввести B\n"; 
    cout << "3. Выполнить операцию +\n"; 
    cout << "4. Выполнить операцию -\n"; 
    cout << "0. Выход\n"; 
    cout << "Выберите пункт меню: "; 
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Введите A: " << input_a() << endl;
            break;
        case 2:
             cout << "Введите B: " << input_b() << endl;
            break;
        case 3:
             cout << sum() << endl;
             break;
        case 4:
             cout << diff() << endl;
             break;
        default:
            cout << "Некорректный ввод. Попробуйте ещё раз." << endl;
            return 1;

    return 0;
    }
}