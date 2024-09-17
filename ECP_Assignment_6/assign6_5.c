#include <stdio.h>
#include <string.h>
#include <ctype.h>

void decimal_to_roman(int num, char *result) {
    struct {
        int value;
        const char *numeral;
    } roman[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
        {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    result[0] = '\0'; 

    for (int i = 0; i < sizeof(roman) / sizeof(roman[0]); i++) {
        while (num >= roman[i].value) {
            strcat(result, roman[i].numeral);
            num -= roman[i].value;
        }
    }
}

int roman_to_decimal(const char *roman) {
    struct {
        char symbol;
        int value;
    } roman_values[] = {
        {'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10},
        {'V', 5}, {'I', 1}
    };

    int total = 0;
    int prev_value = 0;

    for (int i = strlen(roman) - 1; i >= 0; i--) {
        char c = toupper(roman[i]);
        int value = 0;

        for (int j = 0; j < sizeof(roman_values) / sizeof(roman_values[0]); j++) {
            if (roman_values[j].symbol == c) {
                value = roman_values[j].value;
                break;
            }
        }

        if (value < prev_value) {
            total -= value;
        } else {
            total += value;
        }
        prev_value = value;
    }

    return total;
}

int main() {
    int num;
    char roman[50];

     printf("Enter a decimal number (1-3999): ");
    scanf("%d", &num);

    if (num < 1 || num > 3999) {
        printf("Number out of range. Please enter a number between 1 and 3999.\n");
        return 1;
    }

    decimal_to_roman(num, roman);
    printf("Roman numeral: %s\n", roman);

     printf("Enter a Roman numeral: ");
    scanf("%s", roman);

    int decimal = roman_to_decimal(roman);
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
















































