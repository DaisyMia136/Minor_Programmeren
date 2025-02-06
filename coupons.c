#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes
float calc_coup_1(int aantal_stuks, float product_cost);
//float calc_coup_2();
//float calc_coup_3();


// main script
int main(void) 
{
   // vraag de hoeveelheid producten
   int aantal_stuks = get_int("Hoeveel stuks koop je? ");
   // vraag de prijs per stuk
   float product_cost = get_float("Wat is de prijs per stuk? ");
   
   // bereken elke prijs met de verschillende coupons 
   float price_coupon_1 = calc_coup_1(aantal_stuks, product_cost);
   
   // print de beste prijs
   printf("Met coupon 1 kost dat %f", price_coupon_1);
}

// functions 
// coupon 1 > elke derde is gratis
float calc_coup_1(int product_number, float product_cost) 
{
    int multiplier = product_number / 3; // how many sets of three are in the number of products
    float discount = multiplier * product_cost; // calculate the discount by multiplying the number of sets of three by the product cost
    float price_coupon_1 = product_number * product_cost - discount; // calculate the price when using the first coupon
    return price_coupon_1; // output is the price when coupon 1 is used
}

