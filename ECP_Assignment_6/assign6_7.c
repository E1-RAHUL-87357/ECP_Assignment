#include <stdio.h>
#include <string.h>

// Arrays for number names
const char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
const char *teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
const char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
const char *thousands[] = {"", "Thousand", "Million", "Billion"};

// Function to convert numbers less than 1000 to words
void convert_less_than_thousand(int number, char *result) {
    if (number == 0) {
        strcat(result, "Zero");
        return;
    }

    if (number >= 100) {
        strcat(result, ones[number / 100]);
        strcat(result, " Hundred ");
        number %= 100;
    }

    if (number >= 20) {
        strcat(result, tens[number / 10]);
        strcat(result, " ");
        number %= 10;
    }

    if (number >= 10) {
        strcat(result, teens[number - 10]);
        strcat(result, " ");
        number = 0;
    }

    if (number > 0) {
        strcat(result, ones[number]);
        strcat(result, " ");
    }
}

// Function to convert a number to words
void number_to_words(int number, char *result) {
    if (number == 0) {
        strcat(result, "Zero");
        return;
    }

    char buffer[100] = "";
    int segment = 0;

    if (number == 0) {
        strcat(result, "Zero");
        return;
    }

    while (number > 0) {
        if (number % 1000 != 0) {
            char temp[100] = "";
            convert_less_than_thousand(number % 1000, temp);
            strcat(temp, thousands[segment]);
            strcat(temp, " ");
            strcat(temp, buffer);
            strcpy(buffer, temp);
        }
        number /= 1000;
        segment++;
    }

    strcat(result, buffer);
}

int main() {
    int num;
    char result[500] = "";

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0 || num > 999999999) {
        printf("Number out of range. Please enter a number between 0 and 999,999,999.\n");
        return 1;
    }

    number_to_words(num, result);

    // Print result
    printf("Number in words: %s\n", result);

    return 0;
}







































