#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes
float calc_coup_1();
float calc_coup_2();
float calc_coup_3();


// main script
int main(void) 
{
   // vraag de hoeveelheid producten
   int product_number = get_int("Hoeveel stuks koop je? ");
   // vraag de prijs per stuk
   float product_cost = get_float("Wat is de prijs per stuk? ");
   
   // bereken elke prijs met de verschillende coupons 
   float price_coupon_1 = calc_coup_1(product_number, product_cost);
   
   // print de beste prijs
}

// functions 
// coupon 1 > elke derde is gratis
float calc_coup_1() 
{
    int multiplier = product_number / 3;
    float discount = multiplier * float product_cost;
    //int paid_products = product_number * multiplier;
    price_coupon_1 = product_number * product_cost - discount;
    
    
    return price_coupon_1;
}