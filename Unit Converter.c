#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void temperatureConverter();
void lengthConverter();
void weightConverter();
void massConverter();
void areaConverter();
void currencyConverter();
void speedConverter();
void angleConverter();
void pressureConverter();
void forceConverter();
void volumeConverter();
void timeConverter();


float celsiusToFahrenheit(float celsius);
float fahrenheitToCelsius(float fahrenheit);
float celsiusToKelvin(float celsius);
float kelvinToCelsius(float kelvin);
int main() {
    char category, retry;

    do {
        system("cls");

        printf("Welcome to Unit Converter!\n");
        printf("Choose a category:\n");
        printf("1. Temperature\n");
        printf("2. Length\n");
        printf("3. Weight\n");
        printf("4. Mass\n");
        printf("5. Area\n");
        printf("6. Currency\n");
        printf("7. Speed\n");
        printf("8. Angle\n");
        printf("9. Pressure\n");
        printf("F. Force\n");
        printf("V. Volume\n");
        printf("T. Time\n");
        printf("Enter your choice: ");
        scanf(" %c", &category);

        switch (category) {
            case '1':
                temperatureConverter();
                break;

            case '2':
                lengthConverter();
                break;

            case '3':
                weightConverter();
                break;
            case '4':
                massConverter();
                break;
            case '5':
                areaConverter();
                break;
            case '6':
                    currencyConverter();
                    break;
            case '7':
                    speedConverter();
                    break;
            case '8':
                    angleConverter();
                    break;
            case '9':
                    pressureConverter();
                    break;
            case 'F':
                    forceConverter();
                    break;
            case 'V':
                volumeConverter();
                break;
            case 'T':
                    timeConverter();
                    break;
            default:
                printf("Invalid choice.\n");
        }

        printf("\nDo you want to try another conversion? (y/n): ");
        scanf(" %c", &retry);

    } while (retry == 'y' || retry == 'Y');

    return 0;
}

void temperatureConverter() {
    
    int choice;
    float input, result;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &input);
            result = celsiusToFahrenheit(input);
            printf("Temperature in Fahrenheit: %.2f\n", result);
            break;

        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &input);
            result = fahrenheitToCelsius(input);
            printf("Temperature in Celsius: %.2f\n", result);
            break;

        case 3:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &input);
            result = celsiusToKelvin(input);
            printf("Temperature in Kelvin: %.2f\n", result);
            break;

        case 4:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &input);
            result = kelvinToCelsius(input);
            printf("Temperature in Celsius: %.2f\n", result);
            break;

        default:
            printf("Invalid choice.\n");
    }
}
float metersToFeet(float meters) {
    return meters * 3.28084;
}

float feetToMeters(float feet) {
    return feet / 3.28084;
}
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}
void lengthConverter() {
    

    int choice;
    float input, result;

    printf("Length Converter\n");
    printf("1. Meters to Feet\n");
    printf("2. Feet to Meters\n");
    printf("3. Kilometers to Miles\n");
    printf("4. Miles to Kilometers\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter length in meters: ");
            scanf("%f", &input);
            result = metersToFeet(input);
            printf("Length in feet: %.2f\n", result);
            break;

        case 2:
            printf("Enter length in feet: ");
            scanf("%f", &input);
            result = feetToMeters(input);
            printf("Length in meters: %.2f\n", result);
            break;

        case 3:
            printf("Enter length in kilometers: ");
            scanf("%f", &input);
            result = input * 0.621371;
            printf("Length in miles: %.2f\n", result);
            break;

        case 4:
            printf("Enter length in miles: ");
            scanf("%f", &input);
            result = input / 0.621371;
            printf("Length in kilometers: %.2f\n", result);
            break;

        default:
            printf("Invalid choice.\n");
    }
}
float kilogramsToPounds(float kilograms) {
    return kilograms * 2.20462;
}

float poundsToKilograms(float pounds) {
    return pounds / 2.20462;
}
void weightConverter() {
   

    int choice;
    float input, result;

    printf("Weight Converter\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("3. Grams to Ounces\n");
    printf("4. Ounces to Grams\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter weight in kilograms: ");
            scanf("%f", &input);
            result = kilogramsToPounds(input);
            printf("Weight in pounds: %.2f\n", result);
            break;

        case 2:
            printf("Enter weight in pounds: ");
            scanf("%f", &input);
            result = poundsToKilograms(input);
            printf("Weight in kilograms: %.2f\n", result);
            break;

        case 3:
            printf("Enter weight in grams: ");
            scanf("%f", &input);
            result = input * 0.03527396;
            printf("Weight in ounces: %.2f\n", result);
            break;

        case 4:
            printf("Enter weight in ounces: ");
            scanf("%f", &input);
            result = input / 0.03527396;
            printf("Weight in grams: %.2f\n", result);
            break;

        default:
            printf("Invalid choice.\n");
    }
}
float kilogramsToGrams(float kilograms) {
    return kilograms * 1000;
}

float gramsToKilograms(float grams) {
    return grams / 1000;
}
void massConverter() {
  

    int choice;
    float input, result;

    printf("Mass Converter\n");
    printf("1. Kilograms to Grams\n");
    printf("2. Grams to Kilograms\n");
    printf("3. Kilograms to Milligrams\n");
    printf("4. Milligrams to Kilograms\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter mass in kilograms: ");
            scanf("%f", &input);
            result = kilogramsToGrams(input);
            printf("Mass in grams: %.2f\n", result);
            break;

        case 2:
            printf("Enter mass in grams: ");
            scanf("%f", &input);
            result = gramsToKilograms(input);
            printf("Mass in kilograms: %.2f\n", result);
            break;

        case 3:
            printf("Enter mass in kilograms: ");
            scanf("%f", &input);
            result = input * 1000000; // 1 kilogram = 1,000,000 milligrams
            printf("Mass in milligrams: %.2f\n", result);
            break;

        case 4:
            printf("Enter mass in milligrams: ");
            scanf("%f", &input);
            result = input / 1000000; // 1 milligram = 0.000001 kilograms
            printf("Mass in kilograms: %.2f\n", result);
            break;

        default:
            printf("Invalid choice.\n");
    }
}
float squareMetersToSquareFeet(float squareMeters) {
    return squareMeters * 10.7639;
}

float squareFeetToSquareMeters(float squareFeet) {
    return squareFeet / 10.7639;
}

void areaConverter() {


    int choice;
    float input, result;

    printf("Area Converter\n");
    printf("1. Square Meters to Square Feet\n");
    printf("2. Square Feet to Square Meters\n");
    printf("3. Acres to Square Meters\n");
    printf("4. Square Meters to Acres\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter area in square meters: ");
            scanf("%f", &input);
            result = squareMetersToSquareFeet(input);
            printf("Area in square feet: %.2f\n", result);
            break;

        case 2:
            printf("Enter area in square feet: ");
            scanf("%f", &input);
            result = squareFeetToSquareMeters(input);
            printf("Area in square meters: %.2f\n", result);
            break;

        case 3:
            printf("Enter area in acres: ");
            scanf("%f", &input);
            result = input * 4046.86; // 1 acre = 4046.86 square meters
            printf("Area in square meters: %.2f\n", result);
            break;

        case 4:
            printf("Enter area in square meters: ");
            scanf("%f", &input);
            result = input / 4046.86; // 1 square meter = 0.000247105 acres
            printf("Area in acres: %.6f\n", result);
            break;

        default:
            printf("Invalid choice.\n");
    }
}
void currencyConverter() {
    system("cls");

    int choice;
    float input, result;

    printf("Currency Converter\n");
    printf("1. USD to Euro\n");
    printf("2. USD to Japanese Yen\n");
    printf("3. USD to Chinese Yuan\n");
    printf("4. USD to Indian Rupee\n");
    printf("5. INR to USD");
    printf("6. INR to ");
    printf("7. INR to ");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter amount in USD: ");
            scanf("%f", &input);
            result = input * 0.84; // 1 USD = 0.84 Euro (as of the knowledge cutoff date)
            printf("Amount in Euro: %.2f\n", result);
            break;

        case 2:
            printf("Enter amount in USD: ");
            scanf("%f", &input);
            result = input * 114.04; // 1 USD = 114.04 Japanese Yen (as of the knowledge cutoff date)
            printf("Amount in Japanese Yen: %.2f\n", result);
            break;

        case 3:
            printf("Enter amount in USD: ");
            scanf("%f", &input);
            result = input * 6.37; // 1 USD = 6.37 Chinese Yuan (as of the knowledge cutoff date)
            printf("Amount in Chinese Yuan: %.2f\n", result);
            break;

        case 4:
            printf("Enter amount in USD: ");
            scanf("%f", &input);
            result = input * 74.62; // 1 USD = 74.62 Indian Rupee (as of the knowledge cutoff date)
            printf("Amount in Indian Rupee: %.2f\n", result);
            break;

        default:
            printf("Invalid choice.\n");
    }
}
void speedConverter() {
    system("cls");

    int choice;
    float input, result;

    printf("Speed Converter\n");
    printf("1. Meters per Second to Kilometers per Hour\n");
    printf("2. Kilometers per Hour to Meters per Second\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter speed in meters per second: ");
            scanf("%f", &input);
            result = input * 3.6; // 1 m/s = 3.6 km/h
            printf("Speed in kilometers per hour: %.2f\n", result);
            break;

        case 2:
            printf("Enter speed in kilometers per hour: ");
            scanf("%f", &input);
            result = input / 3.6; // 1 km/h = 1/3.6 m/s
            printf("Speed in meters per second: %.2f\n", result);
            break;

        default:
            printf("Invalid choice.\n");
    }
}
void angleConverter() {
    system("cls");

    int choice;
    float input, result;

    printf("Angle Converter\n");
    printf("1. Degrees to Radians\n");
    printf("2. Radians to Degrees\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter angle in degrees: ");
            scanf("%f", &input);
            result = input * 0.0174533; // 1 degree = 0.0174533 radians
            printf("Angle in radians: %.6f\n", result);
            break;

        case 2:
            printf("Enter angle in radians: ");
            scanf("%f", &input);
            result = input * 57.2958; // 1 radian = 57.2958 degrees
            printf("Angle in degrees: %.2f\n", result);
            break;

        default:
            printf("Invalid choice.\n");
    }
}
void pressureConverter() {
    system("cls");

    int choice;
    float input, result;

    printf("Pressure Converter\n");
    printf("1. Pascals to Atmospheres\n");
    printf("2. Atmospheres to Pascals\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter pressure in Pascals: ");
            scanf("%f", &input);
            result = input * 9.86923e-6; // 1 Pascal = 9.86923e-6 Atmospheres
            printf("Pressure in Atmospheres: %.6f\n", result);
            break;

        case 2:
            printf("Enter pressure in Atmospheres: ");
            scanf("%f", &input);
            result = input / 9.86923e-6; // 1 Atmosphere = 1 / 9.86923e-6 Pascals
            printf("Pressure in Pascals: %.2f\n", result);
            break;

        default:
            printf("Invalid choice.\n");
    }
}
void forceConverter() {
    system("cls");

    int choice;
    float input, result;

    printf("Force Converter\n");
    printf("1. Newtons to Pounds\n");
    printf("2. Pounds to Newtons\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter force in Newtons: ");
            scanf("%f", &input);
            result = input * 0.224809; // 1 Newton = 0.224809 Pounds
            printf("Force in Pounds: %.2f\n", result);
            break;

        case 2:
            printf("Enter force in Pounds: ");
            scanf("%f", &input);
            result = input / 0.224809; // 1 Pound = 1 / 0.224809 Newtons
            printf("Force in Newtons: %.2f\n", result);
            break;

        default:
            printf("Invalid choice.\n");
    }
}
void volumeConverter() {
    system("cls");

    int choice;
    float input, result;

    printf("Volume Converter\n");
    printf("1. Liters to Gallons\n");
    printf("2. Gallons to Liters\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter volume in Liters: ");
            scanf("%f", &input);
            result = input * 0.264172; // 1 Liter = 0.264172 Gallons
            printf("Volume in Gallons: %.2f\n", result);
            break;

        case 2:
            printf("Enter volume in Gallons: ");
            scanf("%f", &input);
            result = input / 0.264172; // 1 Gallon = 1 / 0.264172 Liters
            printf("Volume in Liters: %.2f\n", result);
            break;

        default:
            printf("Invalid choice.\n");
    }
}
void timeConverter() {
    system("cls");

    int choice;
    float input, result;

    printf("Time Converter\n");
    printf("1. Seconds to Minutes\n");
    printf("2. Minutes to Hours\n");
    printf("3. Hours to Days\n");
    printf("4. Days to Weeks\n");
    printf("5. Weeks to Months\n");
    printf("6. Months to Years\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter time in seconds: ");
            scanf("%f", &input);
            result = input / 60; // 1 minute = 60 seconds
            printf("Time in minutes: %.2f\n", result);
            break;

        case 2:
            printf("Enter time in minutes: ");
            scanf("%f", &input);
            result = input / 60; // 1 hour = 60 minutes
            printf("Time in hours: %.2f\n", result);
            break;

        case 3:
            printf("Enter time in hours: ");
            scanf("%f", &input);
            result = input / 24; // 1 day = 24 hours
            printf("Time in days: %.2f\n", result);
            break;

        case 4:
            printf("Enter time in days: ");
            scanf("%f", &input);
            result = input / 7; // 1 week = 7 days
            printf("Time in weeks: %.2f\n", result);
            break;

        case 5:
            printf("Enter time in weeks: ");
            scanf("%f", &input);
            result = input / 4.34524; // 1 month = 4.34524 weeks
            printf("Time in months: %.2f\n", result);
            break;

        case 6:
            printf("Enter time in months: ");
            scanf("%f", &input);
            result = input / 12; // 1 year = 12 months
            printf("Time in years: %.2f\n", result);
            break;

        default:
            printf("Invalid choice.\n");
    }
}