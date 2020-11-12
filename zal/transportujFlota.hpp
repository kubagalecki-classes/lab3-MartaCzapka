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
        stateczek();
        if(dynamic_cast<Zaglowiec*>(stateczek) != 0)
          licznik_zagl++;
        temp_towar=stateczek->transportuj();
        licznik_tow = licznik_tow + temp_towar;
        delete stateczek;
      }
      
    }
    return 0;
}