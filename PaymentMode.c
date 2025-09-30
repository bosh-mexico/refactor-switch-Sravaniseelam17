#include <stdio.h>
#include "checkout.h"

// Function prototypes for payment processing
void processPayPal(double amount);
void processGooglePay(double amount);
void processCreditCard(double amount);
void processInvalid(double amount);

// Define function pointer type
typedef void (*PaymentProcessor)(double);

// Function pointer table
static PaymentProcessor processors[] = {
    processPayPal,     // PAYPAL
    processGooglePay,  // GOOGLEPAY
    processCreditCard, // CREDITCARD
    processInvalid     // INVALID
};

// Function implementations
void processPayPal(double amount) {
    printf("Processing payment...\n");
    printf("Payment Mode: PayPal\n");
    printf("Amount: %.2f\n", amount);
    printf("Placeholder: Integrate with PayPal API.\n\n");
}

void processGooglePay(double amount) {
    printf("Processing payment...\n");
    printf("Payment Mode: GooglePay\n");
    printf("Amount: %.2f\n", amount);
    printf("Placeholder: Integrate with GooglePay API.\n\n");
}

void processCreditCard(double amount) {
    printf("Processing payment...\n");
    printf("Payment Mode: CreditCard\n");
    printf("Amount: %.2f\n", amount);
    printf("Placeholder: Integrate with CreditCard API.\n\n");
}

void processInvalid(double amount) {
    (void)amount; // unused
    printf("Error: Unsupported or invalid payment mode.\n\n");
}

// Checkout function (no switch used)
void checkout(PaymentMode mode, double amount) {
    if (mode < PAYPAL || mode > INVALID) {
        processInvalid(amount);
    } else {
        processors[mode](amount);
    }
}
