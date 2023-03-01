#include <iostream>
#include <cmath>
using namespace std;

// Funciones para los programas:
void suma();
void resta();
void multiplicacion();
void division();
void par_impar();
void km_millas();
void m_pulgadas();
void lb_kg();
void palindromo();
void arabigo_romano();
void entero_letras();
void decimal_letras();
void tabla_multiplicar();
void tablas_multiplicar();
void grafica_multiplicacion();
void decimal_binario();
void decimal_hexadecimal();
void figuras_geometricas();
void mover_punto();
void cajero();
void hipotenusa();

// Función principal:
int main() {
    int opcion = 0;
    do {
        cout << "Menú principal:" << endl;
        cout << "1. Suma, Resta, Multiplicación y División de dos números." << endl;
        cout << "2. Determinar si un número es par o impar." << endl;
        cout << "3. Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa." << endl;
        cout << "4. Determinar si una palabra o un número es palíndromo." << endl;
        cout << "5. Conversión de números arábigos a romanos (mínimo 1,000)." << endl;
        cout << "6. Conversión de números enteros a letras." << endl;
        cout << "7. Conversión de números enteros con decimal a letras." << endl;
        cout << "8. Una tabla de multiplicar." << endl;
        cout << "9. Todas las tablas de multiplicar del 1 al 10." << endl;
        cout << "10. Crear de forma gráfica la multiplicación manual." << endl;
        cout << "11. Conversión de números decimales a binario." << endl;
        cout << "12. Conversión de números decimales a hexadecimales." << endl;
        cout << "13. Crear Figuras Geométricas Básicas." << endl;
        cout << "14. Mover un punto en toda la pantalla." << endl;
        cout << "15. Simulación de un Cajero (Autómata)." << endl;
        cout << "16. Calcular la hipotenusa." << endl;
        cout << "0. Salir." << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) 
         {
            case 1: suma(); break;
            case 2: par_impar(); break;
            case 3: km_millas(); break;
            case 4: palindromo(); break;
            case 5: arabigo_romano(); break;
            case 6: entero_letras(); break;
            case 7: decimal_letras(); break;
            case 8: tabla_multiplicar(); break;
            case 9: tablas_multiplicar(); break;
            case 10: grafica_multiplicacion(); break;
            case 11: decimal_binario(); break;
            case 12: decimal_hexadecimal(); break;
            case 13: figuras_geometricas(); break;
            case 14: mover_punto(); break;
            case 15: cajero(); break;
            case 16: hipotenusa(); break;
            case 0: cout << "Saliendo..." << endl; break;
            default: cout << "Opción inválida, seleccione otra opción." << endl;
         }
    } 
    while (opcion != 0);
    return 0;
}

// Funciones para los programas:

void suma() 
{
    double a, b;
    cout << "Ingrese dos números: ";
    cin >> a >> b;
    cout << "La suma es: " << a + b << endl;
}

void resta() 
{
    double a, b;
    cout << "Ingrese dos números: ";
    cin >> a >> b;
    cout << "La resta es: " << a - b << endl;
}

void multiplicacion() 
{
    double a, b;
    cout << "Ingrese dos números: ";
    cin >> a >> b;
    cout << "La multiplicación es: " << a * b << endl;
}

void division() 
{
    double a, b;
    cout << "Ingrese dos números: ";
    cin >> a >> b;
    if (b == 0) {
        cout << "No se puede dividir entre cero." << endl;
    } else {
cout << "La división es: " << a / b << endl;
}
}

void par_impar() {
int n;
cout << "Ingrese un número: ";
cin >> n;
if (n % 2 == 0) {
cout << "El número es par." << endl;
} else {
cout << "El número es impar." << endl;
}
}

void km_millas() {
double km;
cout << "Ingrese la cantidad en kilómetros: ";
cin >> km;
double millas = km * 0.621371;
cout << km << " kilómetros son " << millas << " millas." << endl;
}

void m_cm() {
double m;
cout << "Ingrese la cantidad en metros: ";
cin >> m;
double cm = m * 100;
cout << m << " metros son " << cm << " centímetros." << endl;
}

void lb_kg() {
double lb;
cout << "Ingrese la cantidad en libras: ";
cin >> lb;
double kg = lb * 0.453592;
cout << lb << " libras son " << kg << " kilogramos." << endl;
}

void kg_lb() {
double kg;
cout << "Ingrese la cantidad en kilogramos: ";
cin >> kg;
double lb = kg * 2.20462;
cout << kg << " kilogramos son " << lb << " libras." << endl;
}

void palindromo() {
string palabra;
cout << "Ingrese una palabra o número: ";
cin >> palabra;
bool es_palindromo = true;
int tam = palabra.length();
for (int i = 0; i < tam / 2; i++) {
if (palabra[i] != palabra[tam - i - 1]) {
es_palindromo = false;
break;
}
}
if (es_palindromo) {
cout << palabra << " es palíndromo." << endl;
} else {
cout << palabra << " no es palíndromo." << endl;
}
}

void arabigo_romano() {
int num;
cout << "Ingrese un número entre 1,000 y 3,999: ";
cin >> num;
if (num < 1000 || num > 3999) {
cout << "Número inválido." << endl;
} else {
string romano = "";
int unidades = num % 10;
int decenas = (num / 10) % 10;
int centenas = (num / 100) % 10;
int millares = num / 1000;
// Millares
for (int i = 0; i < millares; i++) {
romano += "M";
}
// Centenas
if (centenas == 9) {
romano += "CM";
} else if (centenas >= 5) {
romano += "D";
for (int i = 0; i < centenas - 5; i++) {
romano += "C";
}
} else if (centenas == 4) {
romano += "CD";
} else {
for (int i = 0; i < centenas; i++) {
romano += "C";
}
}
// Decenas
if (decenas == 9) {
romano += "XC";
} else if (decenas >= 5) {
romano += "L";
for (int i = 0; i < decenas - 5; i++) {
romano += "X";
}
} else if (decenas == 4) {
romano += "XL";
} else {
for (int i = 0; i < decenas; i++) {
romano += "X";
}
}
// Unidades
if (unidades == 9) {
romano += "IX";
} else if (unidades >= 5) {
romano += "V";
for (int i = 0; i < unidades - 5; i++) {
romano += "I";
}
} else if (unidades == 4) {
romano += "IV";
} else {
for (int i = 0; i < unidades; i++) {
romano += "I";
}
}
cout << num << " en números romanos es: " << romano << endl;
}
}

void entero_letras() {
long long int n;
cout << "Ingrese un número entero: ";
cin >> n;
if (n < 0) {
cout << "El número debe ser positivo." << endl;
} else if (n == 0) {
cout << "cero" << endl;
} else if (n > 999999999) {
cout << "El número es demasiado grande." << endl;
} else {
string unidades[10] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
string decenas[10] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
string especiales[10] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
string centenas[10] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};
string grupo[4] = {"", "mil", "millones", "mil millones"};
int grupos[4] = {0, 1000, 1000000, 1000000000};
string letras = "";
int cnt_grupo = 0;
while (n > 0) {
int grupo_actual = n % 1000;
if (grupo_actual > 0) {
if (cnt_grupo > 0) {
letras = grupo[cnt_grupo] + " " + letras;
}
int c = grupo_actual / 100;
int d = (grupo_actual % 100) / 10;
int u = grupo_actual % 10;
if (c > 0) {
letras = centenas[c] + " " + letras;
}
if (d == 1) {
letras = especiales[u] + " " + letras;
} else {
if (d > 0) {
letras = decenas[d] + " " + letras;
}
if (u > 0) {
letras = unidades[u] + " " + letras;
}
}
}
n /= 1000;
cnt_grupo++;
}
cout << "El número en letras es: " << letras << endl;
}
}

void decimal_letras() {
double n;
cout << "Ingrese un número decimal: ";
cin >> n;
if (n < 0) {
cout << "El número debe ser positivo." << endl;
} else if (n == 0) {
cout << "cero" << endl;
} else {
int entero = (int)n;
int decimal = (int)((n - entero) * 100);
string entero_letras = "";
string decimal_letras = "";
if (entero > 0) {
stringstream ss;
ss << entero;
string entero_str = ss.str();
int longitud = entero_str.length();
for (int i = 0; i < longitud; i++) {
int d = entero_str[i] - '0';
if (longitud - i == 7) {
if (d > 1) {
entero_letras += entero_unidades[d] + " millones ";
} else if (d == 1) {
entero_letras += "un millón ";
