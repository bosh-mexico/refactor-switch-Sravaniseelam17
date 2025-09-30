#include <stdio.h>
#include "checkout.h"

void runTests() {
    printf("=== Running Payment Checkout Tests ===\n\n");

    // Test Case 1: PayPal
    printf("Test Case 1: PayPal\n");
    checkout(PAYPAL, 150.75);

    // Test Case 2: GooglePay
    printf("Test Case 2: GooglePay\n");
    checkout(GOOGLEPAY, 299.99);

    // Test Case 3: CreditCard
    printf("Test Case 3: CreditCard\n");
    checkout(CREDITCARD, 500.00);

    // Test Case 4: Invalid Payment
    printf("Test Case 4: Invalid Mode\n");
    checkout(INVALID, 1000.00);

    printf("=== All Tests Completed ===\n");
}

int main() {
    runTests();
    return 0;
}
