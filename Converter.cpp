#include <iostream.h>

int main() {
    int choice;
    double value, result;

    cout << "Unit Converter\n";
    cout << "1. Meters to Kilometers\n";
    cout << "2. Kilometers to Meters\n";
    cout << "3. Meters to Feet\n";
    cout << "4. Feet to Meters\n";
    cout << "5. Meters to Inches\n";
    cout << "6. Inches to Meters\n";
    cout << "7. Kilograms to Grams\n";
    cout << "8. Grams to Kilograms\n";
    cout << "9. Celsius to Fahrenheit\n";
    cout << "10. Fahrenheit to Celsius\n";
    cout << "11. Liters to Milliliters\n";
    cout << "12. Milliliters to Liters\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the value to convert: ";
    cin >> value;

    switch (choice) {
        // Length Conversions
        case 1:
            result = value / 1000;
            cout << value << " meters = " << result << " kilometers\n";
            break;
        case 2:
            result = value * 1000;
            cout << value << " kilometers = " << result << " meters\n";
            break;
        case 3:
            result = value * 3.28084;
            cout << value << " meters = " << result << " feet\n";
            break;
        case 4:
            result = value / 3.28084;
            cout << value << " feet = " << result << " meters\n";
            break;
        case 5:
            result = value * 39.3701;
            cout << value << " meters = " << result << " inches\n";
            break;
        case 6:
            result = value / 39.3701;
            cout << value << " inches = " << result << " meters\n";
            break;

        // Weight Conversions
        case 7:
            result = value * 1000;
            cout << value << " kilograms = " << result << " grams\n";
            break;
        case 8:
            result = value / 1000;
            cout << value << " grams = " << result << " kilograms\n";
            break;

        // Temperature Conversions
        case 9:
            result = (value * 9/5) + 32;
            cout << value << " degrees Celsius = " << result << " degrees Fahrenheit\n";
            break;
        case 10:
            result = (value - 32) * 5/9;
            cout << value << " degrees Fahrenheit = " << result << " degrees Celsius\n";
            break;

        // Volume Conversions
        case 11:
            result = value * 1000;
            cout << value << " liters = " << result << " milliliters\n";
            break;
        case 12:
            result = value / 1000;
            cout << value << " milliliters = " << result << " liters\n";
            break;

        default:
            cout << "Invalid choice!\n";
            break;
    }

    return 0;
}
