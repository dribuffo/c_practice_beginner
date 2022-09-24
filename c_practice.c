/*

This is my practice file for practicing the basics of C programming.
I have created an MMO money exchange rate calculator.

You enter how much money you have in one currency and it will tell you how much money 
you have in a different fictional video game currency.

To calculate this I looked at the cost of the earliest available 'bread' item from an
NPC store, taking the lowest price (ignoring any fame requirements the game may have).

Since some games have a singular currency (e.g. gil) and some games have a currency system with 3
different denomonations (e.g. copper, silver, and gold), we will convert all items to gold.

The examples used:
FFXI - White Bread = 184gil.
FFXIV - Walnut Bread = 26gil.
Guild Wars 2 - Loaf of Bread = 40 copper => 0.004 gold
ESO - Cyrodillic Corn Bread = 75 Septims
WoW - Freshly Baked Bread - 1 silver => 100 copper => 0.01 gold
LoTRO - Hard Biscuits - 6 copper => 0.00006 gold
*/
int xiGilToOthers(int gil)
{
    double xiTOxiv, xiTOgw, xiTOeso, xiTOwow, xiTOlotro;
    xiTOxiv = gil * (26 / 184); //gil to gil
    xiTOgw = gil * (0.004 / 184); //gil to copper
    xiTOeso = gil * (75 / 184); //gil to septims
    xiTOwow = gil * (0.01 / 184); //til to copper
    xiTOlotro = gil * (0.00006 / 184); //gil to copper

    double currencyArray[] = {xiTOxiv, xiTOgw, xiTOeso, xiTOwow, xiTOlotro};
    
    return currencyArray;
}

int main()
{


    return 0;
}