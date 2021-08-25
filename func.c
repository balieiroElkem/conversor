#include "func.h"

double celsiusToFahrenheit(double c) {
    return 1.8*c + 32;
}

double fahrenheitToCelsius(double f) {
    return (f - 32) / 1.8;
}

double celsiusToKelvin(double c) {
    return c + 273;
}

double kelvinToCelsius(double k) {
    return k - 273;
}

double fahrenheitToKelvin(double f) {
    return (f - 32) * 5/9 + 273.15;
}

double kelvinToFahrenheit(double k) {
    return (k - 273.15) * 9/5 + 32;
}