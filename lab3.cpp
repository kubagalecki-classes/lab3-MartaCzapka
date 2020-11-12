#include <iostream>
using namespace std;
class Figura
{
private:
    // protected:
    double pole;

public:
    Figura(double P) { pole = P; }
    // void   setP(double P) { pole = P; }
    double getP() { return pole; }
    void   id() const { cout << "Figura o polu: " << pole << "\n"; }
};
class Kolo : public Figura
{
public:
    Kolo(double r) : Figura{3.14 * r * r}
    {
        // pole = 3.14 * r * r;
        // setP(pole);
    }
    void id() { cout << "Kolo o polu: " << getP() << "\n"; }
    // double p;
};
class Kwadrat : public Figura
{
public:
    Kwadrat(double a) : Figura{a * a}
    {
        // pole = a * a;
        // setP(pole);
    }
    void id() { cout << "Kwadrat o polu: " << getP() << "\n"; }
    // double p;
};
void id(const Figura& f)
{
    f.id();
}
int main()
{
    Kolo    k{3};
    Kwadrat kw{2};
    Kwadrat kp{1};
    Figura  f = static_cast< Figura >(kp);
    Figura  Fig{2};
    // double  poleKola = k.getP();
    // cout << poleKola << "\n";
    // double poleKwad = kw.getP();
    // cout << poleKwad << "\n";
    k.id();
    kw.id();
    kp.id();
    id(f);
}
