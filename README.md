# Product-price-calculator-with-bulk-discount.
This is a simple C++ program that calculates the total price of products after applying bulk discounts. It includes a cool ASCII logo at the start of the program for a nice touch.

## Features
- **ASCII Logo**: Displays an attractive ASCII logo when the program starts.
- **Bulk Discount Calculation**: Automatically applies discounts based on the quantity of products:
  - **20% Discount**: For orders of 100 or more items.
  - **15% Discount**: For orders between 50 and 99 items.
  - **10% Discount**: For orders between 20 and 49 items.
- **User-Friendly Input**: Prompts the user to enter unit price and quantity, with input validation.

## Usage
1. Compile the program using any C++ compiler.
   ```bash
         g++ -o bulk_discount_calculator bulk_discount_calculator.cpp


2. Run the program.
        ./bulk_discount_calculator

3. Follow the prompts:

    Enter the unit price of the product.
    Enter the quantity of the product.
    The program will display:

    The unit price.
    The quantity.
    The total price after the discount is applied.


## Prerequisites
    A C++ compiler (e.g., GCC, Clang, or Visual Studio C++).
    Basic understanding of running programs in the terminal.


## Contributing
Feel free to fork this repository and contribute improvements, such as:

    Adding support for different discount schemes.
    Enhancing the logo with new ASCII art.
    Extending the program to handle multiple products.
