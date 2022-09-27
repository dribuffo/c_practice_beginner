#include "fantasy_currency_converter_libraries.h"

int xiGilToXIV(int gil)
{
    //future implementation: xiTOgw, xiTOeso, xiTOwow, xiTOlotro;
    double xiTOxiv = gil * 26 / 184; 
    
    return xiTOxiv;
}

int xivGilToXI(int gil)
{
    //future implementation: xiTOgw, xiTOeso, xiTOwow, xiTOlotro;
    double xivTOxi = gil * 184 / 26;
    
    return xivTOxi;
}
