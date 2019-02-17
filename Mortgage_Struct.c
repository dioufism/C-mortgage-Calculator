//
//  main.c
//  homework4_structures
//
//  Created by Uzi on 11/27/18.
//  Copyright © 2018 Uzi. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    struct {
        
     int loan,n,i;
    float Monthly_interest, rate, monthly_payment;
    float numerator, denominator;
    float paidPrincipal, balance, interest_paid;
        

    } var;
    
    // get data from input
    printf("enter the the amount of loan:\n");
    scanf("%d", &var.loan);
    printf("enter interest rate per year:\n");
    scanf("%f",&var.rate);
    printf("enter the number of payements :\n");
    scanf("%d",&var.n);


    var.Monthly_interest = (var.rate /1200);
    
    //printf("the monthly interest is: %f\n", Monthly_interest);
   var. numerator = ((var.Monthly_interest) * (powf((1 + var.Monthly_interest), var.n)));
    var.denominator = (powf((1 + var.Monthly_interest), var.n) -1);
    
    var.monthly_payment = (var.loan) * ((var.numerator) / (var.denominator));
    printf(" monthly payement should be: $%f\n\t", var.monthly_payment);
    
    var.i = 1;
    for (var.i; var.i<= var.n; var.i++) {
        var.interest_paid = var.loan * var.Monthly_interest * var.i ;
        var.paidPrincipal =  var.monthly_payment - var.interest_paid;
        var.balance =   var.monthly_payment - var.balance;
        printf("%d\t%f\t%f\t%f\t%f",var.i,var.monthly_payment ,var.paidPrincipal, var.interest_paid,var.balance );
        printf("\n");
    }
}
