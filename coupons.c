#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes
float bereken_coupon1(int aantal_stuks, float prijs);
float bereken_coupon2(int aantal_stuks, float prijs);
//float bereken_coupon3(int aantal_stuks, float prijs);


// main script
int main(void) 
{
   // vraag de hoeveelheid producten
   int aantal_stuks = get_int("Hoeveel stuks koop je? ");
   // vraag de prijs per stuk
   float prijs = get_float("Wat is de prijs per stuk? ");
   
   // bereken elke prijs met de verschillende coupons 
   float price_coupon_1 = calc_coup_1(aantal_stuks, prijs);
   
   // print de beste prijs
   printf("Met coupon 1 kost dat %f", price_coupon_1);
}

// functions 
// coupon 1 > elke derde is gratis
float calc_coup_1(int aantal_stuks, float prijs) 
{
    int multiplier = aantal_stuks / 3; // how many sets of three are in the number of products
    float discount = multiplier * prijs; // calculate the discount by multiplying the number of sets of three by the product cost
    float price_coupon_1 = aantal_stuks * prijs - discount; // calculate the price when using the first coupon
    return price_coupon_1; // output is the price when coupon 1 is used
}

// coupon 2 > tweede halve prijs
float bereken_coupon2(int aantal_stuks, float prijs)
{ 
  int multiplier = aantal_stuks / 2; // how many sets of three are in the number of products  
  float fullprice_products = multiplier * prijs; //calculate the price of the full price fullprice_products
  float halfprice_products = multiplier * (prijs / 2); //calculate the price of the full price fullprice_products
}