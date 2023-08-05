#include <stdio.h>
int Km_To_M();
int M_to_cm();
int Cm_to_Mlm();

int main()
{
    int i;
    printf("!!!Welcome to unit conversion!!!"\n);
    printf("Choose your desired option:: \n");
    printf("1. Kilometer to meter\n");    
    printf("2. Meter to centimeter\n");    
    printf("3. Centimeter to millimeter\n");

    scanf("%d", &i);

    switch(i)
    {
        case 1: 
        printf("Kilometer to meter conversion::\n");
        Km_To_M();
        break;

        case 2: 
        printf("Meter to Centimeter conversion::\n");
        M_to_cm();
        break;

        case 3: 
        printf("Centimeter to Millimeter conversion::\n");
        Cm_to_Mlm();
        break;

        default:
        printf("Please choose a valid option.");
    }
    return 0;
}

int Cm_to_Mlm(){
    float centim;
    printf("Enter the units in centi meter:: ");
    scanf("%f", &centim);

    float millimeter = centim * 10;
    printf("\n<==SOlution:: ==>\n");
    printf("\nYou have successfully converted centimeter's unit to millimeter.\n\nSo, \"%.2f cm\" in millimeter is \"%.2f mm\".\n",centim, millimeter);
    return 0;
}

int Km_To_M()
{
    float kilom;
    printf("Enter the units in kilo meter:: ");
    scanf("%f", &kilom);

    float meter = kilom * 1000;
    printf("\n<==SOlution:: ==>\n");
    printf("\nYou have successfully converted kilometer's unit to meter.\n\nSo, \"%.2f km\" in meter is \"%.2f m\".\n",kilom, meter);
    return 0;
}

int M_to_cm()
{
    float m;
    printf("Enter the units in meter:: ");
    scanf("%f", &m);

    float centimeter = m * 100;
    printf("\n<==SOlution:: ==>\n");
    printf("\nYou have successfully converted meter's unit to centimeter.\n\nSo, \"%.2f m\" in centimeter is \"%.2f cm\".\n",m, centimeter);
    return 0;
}