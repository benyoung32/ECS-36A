        // branch based on output unit
#include <stdio.h>
#include <ctype.h>



double convertTemp(double temp, char unit, char newUnit) {
    // branch based on input unit
    if (unit == 'C') {
        // branch based on output unit
        if (newUnit == 'C') {
            return temp;
        }
        else if (newUnit == 'F') {
            return (temp + 9.0/5) + 32;
        }
        else {
            return (temp + 273.15);
        }
    }
    else if (unit == 'F') {
        // branch based on output unit
        if (newUnit == 'C') {
            return (temp - 32) * 5.0/9;
        }
        else if (newUnit == 'F') {
            return temp;
        }
        else {
            return (temp - 32) * 5.0/9 + 273.15;
        }
    }
    else {
        if (newUnit == 'C') {
            return temp - 273.15;
        }
        else if (newUnit == 'F') {
            return (temp - 273.15) * 9.0/5 + 32;
        }
        else {
            return temp;
        }

    }
}

int main() {
    char unit;
    char newUnit;
    double temp;
    
    // get temp and inital unit from user
    printf("Enter the temperature followed by its unit (F, C, or K): ");
    scanf("%lf%c", &temp, &unit);
    unit = toupper(unit); // always make upper case
    
    // get new unit from user
    printf("Enter the new unit (F, C, or K): ");
    scanf(" %c", &newUnit);
    // printf("%d%c%c", temp, unit, newUnit);
    newUnit = toupper(newUnit); // always make upper case
    
    double newTemp = convertTemp(temp, unit, newUnit); // call helper function
    
    // printf("%lf", convertTemp(100.0, 'C', 'C'));
    // output new temp 
    printf("%.2lf%c is %.2lf%c", temp, unit, newTemp, newUnit);
    return 0;
}