#include <stdio.h>
int main()
{
  float amount, discount, discountAmount,amountAfterDiscount;
  printf("Discount Calculator!!!\n");
  printf("Enter the Cost of Shopping:");
  scanf("%f",&amount);

  // Checking for a valid amount
  if(amount>0){
    // Calculating the discount,discountAmount and amountAfterDiscount based on the the cost of shopping
    if(amount>6000){
    discount = 0.5;
    discountAmount = amount*discount;
    amountAfterDiscount = amount - discountAmount;
  }else if(amount>4000){
    discount=0.3;
    discountAmount = amount*discount;
    amountAfterDiscount = amount - discountAmount;
  }else if(amount>=2000){
    discount = 0.2;
    discountAmount = amount*discount;
    amountAfterDiscount = amount - discountAmount;
  }else{
    discount=0;
    discountAmount = amount*discount;
    amountAfterDiscount = amount - discountAmount;
  }

  // Giving the Output to User
    printf("Actual Amount=%.2f\n",amount);
    printf("Saved Amount=%.2f\n",discountAmount);
    printf("Amount after Discount=%.2f\n",amountAfterDiscount);
  }else{
    printf("Please enter correct amount");
  }
}
