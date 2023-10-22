#include <iostream>


using namespace std;

class Trapezoid {
    double base1, base2, height;


public:
    Trapezoid();//Створення конструктора.
    ~Trapezoid();//Ствроення деструктора.
    void Info();//Оголошення функції в класі але її визначення буде записане пізніше.
    void print_sqrt();//Оголошення функції в класі але її визначення буде записане пізніше.
};

Trapezoid::Trapezoid() //ств. конструктора
{
    base1 = 0, base2 = 0, height = 0;
    cout << "Trapezoid is created " << endl;
}

Trapezoid::~Trapezoid() // ств. деструктора
{
    cout << "Trapezoid has been destroyed" << endl;
}
void Trapezoid::Info() { // фунція отримання даних
    cout << "Enter the first base" << endl;
    cin >> base1;
    cout << "Enter the second base" << endl;
    cin >> base2;
    cout << "Enter the height of trapezoid" << endl;
    cin >> height;
}
void Trapezoid::print_sqrt() { // площа
    double area = 0.5 * (base1 + base2) * height;
    cout << "bases are : " << base1 << " , " << base2 << " / height is " << height << endl;
    cout << "Area - " << area << endl;
}
int main()
{
    Trapezoid a, b;
    a.print_sqrt();
    b.Info();
    b.print_sqrt();


}
    