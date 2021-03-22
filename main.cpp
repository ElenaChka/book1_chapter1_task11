// Программа с функцией для перевода скорости из м/с в км/ч
#include <iostream>
using namespace std;
const double raznitsa =3.6;
double funkVvoda ()
{
    double zn_mc;
    cout << " Vvedite skorost v m/c: ";
    cin >> zn_mc;
    return zn_mc;
}
double funkRascheta ( double mc)
{
    double res;
    res = mc * raznitsa;
    return res;
}
void funkVivoda (double kmh)
{
    cout << " Skorost v km/h: " << kmh;
}
int main ()
{
    double mc;
    double kmh;
    mc = funkVvoda();
    kmh = funkRascheta( mc);
    funkVivoda(kmh);
}
