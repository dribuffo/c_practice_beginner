/*

This is my practice file for practicing the basics of C programming.
I have created an MMO money exchange rate calculator.

You enter how much money you have in one currency and it will tell you how much money 
you have in a different fictional video game currency.

To calculate this I looked at the cost of the earliest available 'bread' item from an
NPC store, taking the lowest price (ignoring any fame requirements the game may have).

Since some games have a singular currency (e.g. gil) and some games have a currency system with 3
different denomonations (e.g. copper, silver, and gold), we will convert all items to gold.

The examples implemented:
FFXI - White Bread = 184gil.
FFXIV - Walnut Bread = 26gil.

Currencies to be added later:
Guild Wars 2 - Loaf of Bread = 40 copper => 0.004 gold
ESO - Cyrodillic Corn Bread = 75 Septims
WoW - Freshly Baked Bread - 1 silver => 100 copper => 0.01 gold
LoTRO - Hard Biscuits - 6 copper => 0.00006 gold
*/
#include <stdio.h>
#include <stdlib.h>
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

int main()
{
    //initialize variables
    int country;
    double currency, convertedCurrency;

    //user input for country code
    printf("Please enter the choice of starting country currency.\n");
    printf("For Vana'Diel gil, input 1\n");
    printf("For Eorzea gil, input 2\n");
    scanf("%d", &country);

    switch(country)
    {
        case 1:
            printf("Please enter your amount of gil from Vana'Diel.\n");
            scanf("%lf", &currency);
            convertedCurrency = xiGilToXIV(currency);
            printf("You have %f money in Eorzean gil.\n", convertedCurrency);
            break;
        case 2:
            printf("Please enter your amount of gil from Eorzea.\n");
            scanf("%lf", &currency);
            convertedCurrency = xivGilToXI(currency);
            printf("You have %f money in Vana'diel gil.\n", convertedCurrency);
            break;
        default:
            printf("That is an invalid input");
            break;
    }

    return 0;
}