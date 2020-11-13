#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    if(towar !=0)
    {
      unsigned int licznik_tow=0;
      unsigned int zaglowce=0;
      while(licznik_tow < towar)
      {
        int temp_towar = 0;
        Stocznia sto{};
        Statek* stateczek = sto();
        Tankowiec* stateczek_t = stateczek;
        Zaglowiec* stateczek_z = stateczek;
        if(dynamic_cast<Zaglowiec*>(stateczek_z))
       {
         temp_towar=stateczek_z->transportuj();
         temp_towar=stateczek_z->transportuj();
         licznik_tow = licznik_tow + temp_towar;
          zaglowce=zaglowce+1;
          delete stateczek_z;
        }
        if(dynamic_cast<Tankowiec*>(stateczek_t))
       {
         temp_towar=stateczek_t->transportuj();
         temp_towar=stateczek_t->transportuj();
         licznik_tow = licznik_tow + temp_towar;
          delete stateczek_t;
        }
      
      }
      return zaglowce;
    }
    return 0;
}