#include <iostream>
using namespace std;
class Figura
{
    double pole;

public:
    void   setP(double P) { pole = P; }
    double getP() { return pole; }
};
class Kolo : public Figura
{
public:
    Kolo(double r)
    {
        pole = 3.14 * r * r;
        setP(pole);
    }
    double pole;
};
class Kwadrat : public Figura
{
public:
    Kwadrat(double a)
    {
        pole = a * a;
        setP(pole);
    }
    double pole;
};
int main()
{
    Kolo    k{3};
    Kwadrat kw{2};
    double  poleKola = k.getP();
    cout << poleKola << "\n";
    double poleKwad = kw.getP();
    cout << poleKwad << "\n";
}
