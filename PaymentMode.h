#ifndef CHECKOUT_H
#define CHECKOUT_H

typedef enum {
    PAYPAL,
    GOOGLEPAY,
    CREDITCARD,
    INVALID
} PaymentMode;

void checkout(PaymentMode mode, double amount);

#endif
