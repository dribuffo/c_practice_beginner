# C Practice
<p> This is my repo for practicing beginner C projects. </p>

### Fantasy Currency Converter
<p>This fantasy currency converter, the user inputs which currency they have and then it calculates how much money that is worth in other 'lands.' This obviously has no real life implications and the math may not be the most accurate. </p>

###### Methodology
<p>The formula I'm using is (Currency_owned_in_A * Currency_converting_to_B) / Currency A. If we were to look at it stoicheometrically, we have Currency A * B in the numerator with Currency A in the denomonator. So A * B / A would just reduce down to only having B in the numerator which is what we are looking for. We can then go from there and plug in all the values. </p>

###### Implementation
<p>The program takes in an input integer to determine your starting money and then an input double as the value of how much money you have. Both of these come from the user via the terminal. For games that have a Gold/Silver/Copper denomonation or equivalent values are entered as x~xy~yz~z, where the x's are the values of gold, y's are the value of silver, and the z's are the value of copper. 
Onve you have the starting location of money (e.g. what game) and the value, the program then calls a function from an adjoining library that will calculate the values and return them as a double. Eventually an array will be implemented to store all currency conversions and a loop will then iterates through the array of currencies to output the converted currencies to the terminal. 
Currently implemented is converting FFXI's gil standard to FFXIV's gil, but plans to implement other games in the future.
 </p>

 ###### File Structure
 <p> Included in the file structure is going to be a header file and a library file for the conversion functions. You will have to compile both the library and the main .c file. Using -c before the file name you'll end up with a .o file which you can combine by compiling both .o together. Below I have listed the terminal commands in order I used.
 ```c
 gcc -c fantasy_currency_converter_libraries.c
 gcc -c fantasy_currency_converter.c
 gcc fantasy_currency_converter.o fantasy_currency_converter_libraries.o
 ```
 Then run the file with the ./a.out command in your terminal.
 </p>