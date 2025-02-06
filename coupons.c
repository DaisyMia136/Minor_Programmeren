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
   float coupon_1 = calc_coup_1()
   
   // print de beste prijs
}

// functions 
// coupon 1 > elke derde is gratis
float calc_coup_1() 
{
    
}