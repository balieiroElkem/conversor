#include "func.h"


int main(int argc, char **argv) {
    if (argc != 4) {
        printf("Algumentos faltando:\n");
        printf("conversor [dado inicial] [de sistema] [para sistema]");
        return 1;
    }

    argv[2] = toUpper(argv[2]);
    argv[3] = toUpper(argv[3]);

    if ((strcmp(argv[2], "C") == 0) || (strcmp(argv[2], "CELSIUS") == 0)) {
        if ((strcmp(argv[3], "F") == 0) || (strcmp(argv[3], "FAHRENHEIT") == 0)) {

            printf("%.2lf\n", celsiusToFahrenheit(atof(argv[1])));

        } else if ((strcmp(argv[3], "K") == 0) || (strcmp(argv[3], "KELVIN") == 0)) {

            printf("%.2lf\n", celsiusToKelvin(atof(argv[1])));
            
        } else {

            printf("Quarto argumento invalido.\n");
            return 1;
            
        }
    } else if ((strcmp(argv[2], "F") == 0) || (strcmp(argv[2], "FAHRENHEIT") == 0)) {
        if ((strcmp(argv[3], "C") == 0) || (strcmp(argv[3], "CELSIUS") == 0)) {

            printf("%.2lf\n", fahrenheitToCelsius(atof(argv[1])));
            
        } else if ((strcmp(argv[3], "K") == 0) || (strcmp(argv[3], "KELVIN") == 0)) {

            printf("%.2lf\n", fahrenheitToKelvin(atof(argv[1])));
            
        } else {

            printf("Quarto Argumento invalido.\n");
            return 1;
            
        }
    } else if ((strcmp(argv[2], "K") == 0) || (strcmp(argv[2], "KELVIN") == 0)) {
        if ((strcmp(argv[3], "C") == 0) || (strcmp(argv[3], "CELSIUS") == 0)) {

            printf("%.2lf\n", kelvinToCelsius(atof(argv[1])));
            
        } else if ((strcmp(argv[3], "K") == 0) || (strcmp(argv[3], "KELVIN") == 0)) {

            printf("%.2lf\n", kelvinToFahrenheit(atof(argv[1])));
            
        } else {

            printf("Quarto argumento invalido.\n");
            return 1;
            
        }
    } else {
        printf("Terceiro Argumento invalido.\n");
    }

    return 0;
}