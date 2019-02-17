//
//  main.c
//  homework4_Arrays
//
//  Created by Uzi on 11/27/18.
//  Copyright © 2018 Uzi. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    
        
        int loan,n,i;
        float Monthly_interest, rate, monthly_payment;
        float numerator, denominator;
        float paidPrincipal[n], balance[n], interest_paid[n];
    
    // get data from input
    printf("enter the the amount of loan:\n");
    scanf("%d", &loan);
    printf("enter interest rate per year:\n");
    scanf("%f",&rate);
    printf("enter the number of payements :\n");
    scanf("%d",&n);


    Monthly_interest = (rate /1200);
    
    numerator = ((Monthly_interest) * (powf((1 + Monthly_interest), n)));
    denominator = (powf((1 + Monthly_interest), n) -1);
    monthly_payment = (loan) * ((numerator) / (denominator));

    printf(" monthly payement should be: $%f\n\t", monthly_payment);
   //5 n =  n * 12;
    
    
    
    paidPrincipal[0] = monthly_payment - interest_paid[0];
    interest_paid[0] = loan * Monthly_interest;
    balance[0] =  loan - paidPrincipal[0];
    
    printf("================AMORTIZATION SCHEDULE================\n");
    printf("\n");
    printf("#\t payement\t Principal\t Interest\t Balance\t\n");
    
    
    for (i = 1; i <= n ; i++)
        
    {
        interest_paid[i] = balance[i -1] * monthly_payment;
        paidPrincipal[i] = monthly_payment - interest_paid[i - 1];
        balance[i] =  balance[i-1] - paidPrincipal[i];
        printf("%d\t.2%f\t.2%f\t%.2f\t%.2f",i,monthly_payment ,paidPrincipal[i], interest_paid[i],balance[i] );

        
    }

    return 0;
}
