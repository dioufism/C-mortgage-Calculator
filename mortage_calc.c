#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int principal,n;
    float Monthly_interest, rate;
    float monthly_payment;
    float numerator, denominator;
    
    // get data from input
    printf("enter the the amount of loan:\n");
    scanf("%d", &principal);
    printf("enter interest rate per year:\n");
    scanf("%f",&rate);
    printf("enter the number of payements :\n");
    scanf("%d",&n);
    

    
    printf("the number ofpayement is %d",n);

    //update n
    Monthly_interest = (rate /1200);
    
    //printf("the monthly interest is: %f\n", Monthly_interest);
    numerator = ((Monthly_interest) * (powf((1 + Monthly_interest), n)));
    denominator = (powf((1 + Monthly_interest), n) -1);
    
    monthly_payment = (principal) * ((numerator) / (denominator));
    printf(" monthly payement should be: $%f\n\t", monthly_payment);

    // reinitialize n to 5 in this case n nis back to 5
      n = n/12;
    float paidPrincipal, paidInterest, newBalance;
    int i = 1;
    while (i < 3) {
        
        if(i == 1 )
        {
            paidPrincipal = principal * rate;
            return paidPrincipal
    }
        else {
            paidPrincipal = principal * (i - 1) * rate;
        }
        printf("the principal amount paid is: %f", paidPrincipal);
        i++;
        
            <#statements#>
        }
    return 0;
}
