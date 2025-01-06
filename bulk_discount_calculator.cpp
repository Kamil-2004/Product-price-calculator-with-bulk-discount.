#include <iostream>
#include <iomanip> // For setting precision
using namespace std;

int main() {
    // Logo printing
    string logo = R"(
   __    _     _)    __   )   __                                
  (, /    ) (, /|  /|     (, /    (_/__)     /)        /)             
    /---(     / | / |       /       /       _   // _      // _  / ___ 
 ) / _) ) /  |/  |  _/_     /       (((/(_(((/(((_()/ (_
(/ (     (/   '     (_ /       (___)                                

)";
    cout << logo << endl;

    // Variables to store product details
    double unitPrice;
    int quantity;

    // Input product details
    cout << "Enter the unit price of the product: $";
    cin >> unitPrice;

    cout << "Enter the quantity of the product: ";
    cin >> quantity;

    if (quantity <= 0 || unitPrice <= 0) {
        cout << "Invalid input. Quantity and unit price must be greater than zero." << endl;
        return 1;
    }

    // Function to calculate the total price with bulk discount
    auto calculatePrice = [](int quantity, double unitPrice) {
        double discount = 0.0;

        // Determine discount rate based on quantity
        if (quantity >= 100) {
            discount = 0.20; // 20% discount
        } else if (quantity >= 50) {
            discount = 0.15; // 15% discount
        } else if (quantity >= 20) {
            discount = 0.10; // 10% discount
        }

        double totalPrice = quantity * unitPrice;
        double discountAmount = totalPrice * discount;
        return totalPrice - discountAmount;
    };

    // Calculate total price with discount
    double finalPrice = calculatePrice(quantity, unitPrice);

    // Display results
    cout << fixed << setprecision(2); // Set precision for currency display
    cout << "\nSummary:\n";
    cout << "Unit Price: $" << unitPrice << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Total Price after Discount: $" << finalPrice << endl;

    return 0;
}
