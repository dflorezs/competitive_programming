#include <stdio.h>

void solve(float);

int main() {
    float amount;
    scanf("%f", &amount);
    solve(amount);
    return 0;
}
/* Validates the range where the quantity is and prints the corresponding discount.*/
void solve(float amount) {
  if(amount < 500) printf("%0.2f", amount);
  else if(500 <= amount && amount <= 1000) printf("%0.2f", 0.95 * amount);
  else if(1001 <= amount && amount <= 7000) printf("%0.2f", 0.89 * amount);
  else if(7001 <= amount && amount <= 15000) printf("%0.2f", 0.82 * amount); 
  else if(15000 < amount) printf("%0.2f", 0.75 * amount);
}
