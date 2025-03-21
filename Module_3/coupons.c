#include <stdio.h>
#include <cs50.h>
#include <math.h>


// function prototypes
float bereken_coupon1(int aantal_stuks, float prijs);
float bereken_coupon2(int aantal_stuks, float prijs);
float bereken_coupon3(int aantal_stuks, float prijs);


// main script
int main(void) 
{
   // vraag de hoeveelheid producten
   int aantal_stuks = get_int("Hoeveel stuks koop je? ");
   // vraag de prijs per stuk
   float prijs = get_float("Wat is de prijs per stuk? ");
   
   // bereken elke prijs met de verschillende coupons 
   // coupon 1
   float price_coupon_1 = bereken_coupon1(aantal_stuks, prijs);
   // Afronden coupon 1
   float price_coupon_1_100 = price_coupon_1 * 100; //620
   float price_coupon_1_round = round(price_coupon_1_100);
   price_coupon_1 = price_coupon_1_round / 100;
   //printf("%f\n", price_coupon_1);
   
   // coupon 2
   float price_coupon_2 = bereken_coupon2(aantal_stuks, prijs);
   // afronden coupon 2
   float price_coupon_2_100 = price_coupon_2 * 100; //620
   float price_coupon_2_round = round(price_coupon_2_100);
   price_coupon_2 = price_coupon_2_round / 100;
   //printf("%f\n", price_coupon_2);
   
   // coupon 3
   float price_coupon_3 = bereken_coupon3(aantal_stuks, prijs);
   // afronden coupon 3
   float price_coupon_3_100 = price_coupon_3 * 100; //620
   float price_coupon_3_round = round(price_coupon_3_100);
   price_coupon_3 = price_coupon_3_round / 100;
   //printf("%f\n", price_coupon_3);
   
   // print de beste prijs
   if (price_coupon_1 < price_coupon_2 && price_coupon_1 < price_coupon_3)
   { 
       printf("Met coupon 1 kost dat %.2f\n", price_coupon_1);
   } 
//   else if (price_coupon_1 == price_coupon_2)
//   { 
//       printf("Met coupon 1 kost dat %.2f\n", price_coupon_1);
//   } 
//   else if (price_coupon_2 == price_coupon_3)
//   { 
//       printf("Met coupon 2 kost dat %.2f\n", price_coupon_2);
//   }
   else if (price_coupon_3 == price_coupon_1)
   {
       printf("Met coupon 3 kost dat %.2f\n", price_coupon_3);
   } 
   
   else if (price_coupon_2 < price_coupon_1 && price_coupon_2 < price_coupon_3)
   { 
   printf("Met coupon 2 kost dat %.2f\n", price_coupon_2);
   } 
    else if (price_coupon_3 < price_coupon_1 && price_coupon_3 < price_coupon_2)
   { 
   printf("Met coupon 3 kost dat %.2f\n", price_coupon_3);
   }
}

// functions 
// coupon 1 > elke derde is gratis
float bereken_coupon1(int aantal_stuks, float prijs) 
{
    int multiplier = aantal_stuks / 3; // how many sets of three are in the number of products
    float discount = multiplier * prijs; // calculate the discount by multiplying the number of sets of three by the product cost
    float price_coupon_1 = aantal_stuks * prijs - discount; // calculate the price when using the first coupon
    return price_coupon_1; // output is the price when coupon 1 is used
}

// coupon 2 > tweede halve prijs
float bereken_coupon2(int aantal_stuks, float prijs)
{ 
    int multiplier = aantal_stuks / 2; // the number of products that get a discount
    int remainder = aantal_stuks - multiplier; // the number of products that don't get a discount
    float fullprice_products = remainder * prijs; // calculate the price of the full price products
    float halfprice_products = multiplier * (prijs / 2); // calculate the price of the half price products
    float price_coupon_2 = fullprice_products + halfprice_products; 
    return price_coupon_2;
}

// coupon 3 > stapel korting
float bereken_coupon3(int aantal_stuks, float prijs)
{ 
    // set defaults
    float discount = 0; 
    if (aantal_stuks == 1)
    { 
        discount = prijs / 20;
    } 
    else if (aantal_stuks == 2)
    {
        discount = prijs / 10;
    }
    else if (aantal_stuks == 3)
    {
        discount = prijs / 5;
    } 
    else 
    {
        discount = prijs / 10 * 3;
        
    }
    float price_coupon_3 = aantal_stuks * (prijs - discount);
    return price_coupon_3;

} 