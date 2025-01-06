# Product-price-calculator-with-bulk-discount.
**Overview**

This C++ program calculates the total price of a product after applying bulk discounts based on the quantity purchased. It is designed to handle basic bulk discount logic and provides a user-friendly interface for input and output.

**Features**

Calculates total price based on unit price and quantity.

Applies bulk discounts:

  20% discount for quantities of 100 or more.

  15% discount for quantities between 50 and 99.

  10% discount for quantities between 20 and 49.

  No discount for quantities below 20.

Ensures valid input for unit price and quantity.

Displays a detailed summary including the unit price, quantity, and final discounted price.

**How to Use**

Compile the program using a C++ compiler (e.g., g++):

  g++ -o product_price_calculator product_price_calculator.cpp

Run the executable:

  ./product_price_calculator

Follow the prompts to:

  Enter the unit price of the product.

  Enter the quantity of the product.

The program will display the total price after applying the appropriate discount.

**Example**

Input:

Enter the unit price of the product: $25.00
Enter the quantity of the product: 55

Output:

Summary:
Unit Price: $25.00
Quantity: 55
Total Price after Discount: $1168.75

**Program Logic**

Input Validation:

  Ensures the unit price and quantity are positive numbers.

Discount Calculation:

  Determines the discount rate based on the quantity purchased.

  Applies the discount to the total price.

Output:

  Displays a summary of the calculations.

**Customization**

To modify the discount rates or thresholds, update the calculatePrice function in the code:

  if (quantity >= 100) {
      discount = 0.20; // 20% discount
  } else if (quantity >= 50) {
      discount = 0.15; // 15% discount
  } else if (quantity >= 20) {
      discount = 0.10; // 10% discount
  }

**Requirements**

A C++ compiler (e.g., GCC, Clang, MSVC).

Basic knowledge of terminal/command prompt usage.

**Limitations**

The program assumes a single product type per execution.

No currency localization; all prices are displayed in USD.

**Future Enhancements**

Support for multiple product types in a single run.

Currency localization and formatting.

Enhanced error handling and user interface.
