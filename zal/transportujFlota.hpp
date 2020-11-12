#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    if(towar !=0)
    {
      int licznik_tow=0;
      int licznik_zagl=0;
      while(licznik_tow < towar)
      do{
        int temp_towar = 0;
        Statek* stateczek();
        temp_towar=stateczek.transportuj();
        licznik_tow = licznik_tow + temp_towar;
        if(dynamic_cast<Zaglowiec>(stateczek))
        licznik_zagl++;
        delete stateczek;
      }
      
    }
    return 0;
}