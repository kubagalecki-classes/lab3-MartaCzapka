#include <iostream>
using namespace std;
class BytGeometryczny
{
public:
    virtual void id() const = 0;
};
class Figura : public BytGeometryczny
{
private:
    // protected:
    double pole;

public:
    Figura(double P) { pole = P; }
    // void   setP(double P) { pole = P; }
    double getP() const { return pole; }
    // virtual void id() const { cout << "Figura o polu: " << pole << "\n"; }
    virtual ~Figura() { cout << "niszcze Figure \n"; }
};
class Kolo : public Figura
{
public:
    Kolo(double r) : Figura{3.14 * r * r}
    {
        // pole = 3.14 * r * r;
        // setP(pole);
    }
    virtual void id() const override { cout << "Kolo o polu: " << getP() << "\n"; }
    // double p;
    virtual ~Kolo() { cout << "niszcze Kolo \n"; }
};
class Kwadrat : public Figura
{
public:
    Kwadrat(double a) : Figura{a * a}
    {
        // pole = a * a;
        // setP(pole);
    }
    void id() const override { cout << "Kwadrat o polu: " << getP() << "\n"; }
    // double p;
    virtual ~Kwadrat() { cout << "niszcze Kwadrat \n"; }
};
void id(const Figura& f)
{
    // f.id();
}
int main()
{
    // BytGeometryczny bytek; //nie mozna
    /*Kolo     k{3};
    Kwadrat  kw{2};
    Kwadrat  kp{1};
    Figura   fi = static_cast< Figura >(kp);
    Figura   Fig{2};
    */
    Figura* f = new Kwadrat{2};
    f->id();
    // delete f;
    if (dynamic_cast< Kwadrat* >(f) == 0) {
        cout << "nie kwadrat";
    }
    if (dynamic_cast< Kwadrat* >(f) != 0) {
        cout << "kwadrat";
    }
    // Kwadrat* kwad = dynamic_cast< Kwadrat* >(f);
    // Kolo*    kolo = dynamic_cast< Kolo* >(f);
    // kwad->id();
    // kolo->id(); // to tak ma byc?
    // double  poleKola = k.getP();
    // cout << poleKola << "\n";
    // double poleKwad = kw.getP();
    // cout << poleKwad << "\n";
    // k.id();
    // kw.id();
    // kp.id();
    // id(kp);
    // id(fi);
}
