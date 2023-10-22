#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <math.h>
/*Створити клас «куля», такий, що:
а) його екземпляр містить розмір радіусу.
b) його конструктор без параметра створює екземпляр зі значенням 0, а
конструктор з параметрами створює екземпляр з відповідним значенням
радіусу.
c) його методи дозволяють отримувати і присвоювати значення радіусу і
обчислювати значення об'єму.
d) функція print_val () виводить на екран значення його радіусу і об'єму.
e) дружня функція frd в якості параметрів отримує екземпляри двох куль і
повертає нову кулю, об’єм якої дорівнює сумі об’ємів цих двох куль.
Значення радіусу нової кулі має бути перерах*/

class ball {
private:
    double radius;
    double volume;

public:
    ball();
    ~ball();
    void setRadius();
    void calculateVolume();
    void print_val();
    friend ball addBalls(const ball& ball1, const ball& ball2);
};

ball::ball() {
    radius = 0;
    volume = 0;
}

ball::~ball() {
    cout << "class has been destroyed" << endl;
}

void ball::setRadius() {
    cout << "Enter radius:" << endl;
    cin >> radius;
}

void ball::calculateVolume() {
    volume = 4.0 / 3.0 * M_PI * pow(radius, 3);
}

void ball::print_val() {
    cout << "Radius: " << radius << endl;
    cout << "Volume: " << volume << endl;
}

ball addBalls(const ball& ball1, const ball& ball2) {
    ball newBall;
    double volumeSum = ball1.volume + ball2.volume; 
    newBall.radius =   pow((3.0 * (volumeSum)) / (4.0 * M_PI), 1.0 / 3.0);
    newBall.calculateVolume(); 
    return newBall;
}

int main() {
    ball ball1, ball2;
    ball1.setRadius();
    ball2.setRadius();
    ball1.calculateVolume();
    ball2.calculateVolume();

    cout << "Ball 1:" << endl;
    ball1.print_val();

    cout << "Ball 2:" << endl;
    ball2.print_val();

    ball sumBall = addBalls(ball1, ball2);

    cout << "Sum of Balls:" << endl;
    sumBall.print_val();

    return 0;
}
