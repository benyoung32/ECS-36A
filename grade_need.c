#include <stdio.h>

int main () {
    /*
    char gradeWanted[] = "B";
    double percentNeeded = 80.0;
    double percentCurrent = 75.0;
    double weight = 20.0;
    */
    char gradeWanted[2];
    double percentNeeded;
    double percentCurrent;
    double weight;

    printf("Enter the grade you want in the class: ");
    scanf("%s", &gradeWanted);
    printf("\nEnter the percent you need to get that grade: ");
    scanf("%lf", &percentNeeded);
    printf("\nEnter your current percent in the class: ");
    scanf("%lf", &percentCurrent);
    printf("\nEnter the weight of the final: ");
    scanf("%lf", &weight);
    //printf("weight: %lf", weight);

    double currentPoints = percentCurrent * ((100.0 - weight)/ 100.0);
    double neededPoints = ((percentNeeded - currentPoints) / weight) * 100.0;
    printf("You need to get at least %.2f%% on the final to get a %s in the class.", neededPoints, gradeWanted);
    return 0;

}