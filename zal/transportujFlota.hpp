#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    if(towar !=0)
    {
      unsigned int licznik_tow=0;
      unsigned int zaglowce=0;
      Zaglowiec* test_zagl;
      while(licznik_tow < towar)
      {
        int temp_towar = 0;
        Stocznia sto{};
        Statek* stateczek = sto();
        temp_towar=stateczek->transportuj();
        licznik_tow = licznik_tow + temp_towar;
        if(test_zagl = dynamic_cast<Zaglowiec*>(stateczek))
       {
          zaglowce=zaglowce+1;
        }
        delete stateczek;
      }
      return zaglowce;
    }
    return 0;
}