#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Prototipos de funciones
void sumaRestaMultiplicacionDivision();
void determinarParImpar();
void convertirUnidades();
void determinarPalindromo();
void convertirArabigoRomano();
void convertirEnteroLetras();
void convertirDecimalLetras();
void tablaMultiplicar();
void todasTablasMultiplicar();
void graficaMultiplicacion();
void decimalBinario();
void decimalHexadecimal();
void crearFigurasGeometricas();
void moverPuntoPantalla();
void simulacionCajero();
void calcularHipotenusa();

int main() {
    int opcion = 0;
    do {
        // Mostrar menú y leer opción seleccionada
        cout << "Seleccione un programa:" << endl;
        cout << "1. Suma, Resta, Multiplicacion y Division de dos numeros" << endl;
        cout << "2. Determinar si un numero es par o impar" << endl;
        cout << "3. Convertir de unidades (kilometros/millas, metros/pulgadas, libras/kilos)" << endl;
        cout << "4. Determinar si una palabra o numero es palindromo" << endl;
        cout << "5. Convertir numeros arabigos a romanos (minimo 1,000)" << endl;
        cout << "6. Convertir numeros enteros a letras" << endl;
        cout << "7. Convertir numeros enteros con decimal a letras" << endl;
        cout << "8. Una tabla de multiplicar" << endl;
        cout << "9. Todas las tablas de multiplicar del 1 al 10" << endl;
        cout << "10. Crear de forma grafica la multiplicacion manual" << endl;
        cout << "11. Conversion de numeros decimales a binario" << endl;
        cout << "12. Conversion de numeros decimales a hexadecimales" << endl;
        cout << "13. Crear figuras geometricas basicas" << endl;
        cout << "14. Mover un punto en toda la pantalla" << endl;
        cout << "15. Simulacion de un Cajero (Automata)" << endl;
        cout << "16. Calcular la hipotenusa" << endl;
        cout << "0. Salir" << endl;
        cin >> opcion;

        // Ejecutar programa seleccionado
        switch (opcion) {
            case 1:
                sumaRestaMultiplicacionDivision();
                break;
            case 2:
                determinarParImpar();
                break;
            case 3:
                convertirUnidades();
                break;
            case 4:
                determinarPalindromo();
                break;
            case 5:
                convertirArabigoRomano();
                break;
            case 6:
                convertirEnteroLetras();
                break;
            case 7:
                convertirDecimalLetras();
                break;
            case 8:
                tablaMultiplicar();
                break;
            case 9:
                todasTablasMultiplicar();
                break;
            case 10:
                graficaMultiplicacion();
                break;
            case 11:
                decimalBinario();
                break;
            case 12:
                decimalHexadecimal();
                break;
            case 13:
                figurasGeometricas();
                break;
            case 14:
                puntoPant();
                break;
            case 15:
                simulacionCajero();
            case 16:
                calcularHipotenusa();
                break;
        }

// Funciones para los programas
void programa1() {
    float a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    cout << "Suma: " << a + b << endl;
    cout << "Resta: " << a - b << endl;
    cout << "Multiplicacion: " << a * b << endl;
    if (b != 0) {
        cout << "Division: " << a / b << endl;
    } else {
        cout << "No se puede dividir por cero" << endl;
    }
}

void programa2() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << "El numero es par" << endl;
    } else {
        cout << "El numero es impar" << endl;
    }
}

void programa3() {
    const float millas_por_kilometro = 0.621371;
    const float pulgadas_por_metro = 39.3701;
    const float kilos_por_libra = 0.453592;
    
    float cantidad;
    int opcion;
    cout << "Ingrese una cantidad: ";
    cin >> cantidad;
    cout << "Seleccione una opcion: " << endl;
    cout << "1. Convertir de kilometros a millas" << endl;
    cout << "2. Convertir de metros a pulgadas" << endl;
    cout << "3. Convertir de libras a kilos" << endl;
    cout << "4. Convertir de kilos a libras" << endl;
    cin >> opcion;
    switch(opcion) {
        case 1:
            cout << cantidad << " kilometros son " << cantidad * millas_por_kilometro << " millas" << endl;
            break;
        case 2:
            cout << cantidad << " metros son " << cantidad * pulgadas_por_metro << " pulgadas" << endl;
            break;
        case 3:
            cout << cantidad << " libras son " << cantidad * kilos_por_libra << " kilos" << endl;
            break;
        case 4:
            cout << cantidad << " kilos son " << cantidad / kilos_por_libra << " libras" << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
    }
}

void programa4() {
    string entrada;
    cout << "Ingrese una palabra o un numero: ";
    cin >> entrada;
    bool es_palindromo = true;
    int n = entrada.length();
    for (int i = 0; i < n / 2; i++) {
        if (entrada[i] != entrada[n - 1 - i]) {
            es_palindromo = false;
            break;
        }
    }
    if (es_palindromo) {
        cout << "Es palindromo" << endl;
    } else {
        cout << "No es palindromo" << endl;
    }
}

void programa5() {
    int n;
    cout << "Ingrese un numero entre 1000 y 3999: ";
    cin >> n;
    if (n < 1000 || n > 3999) {
        cout << "Numero fuera de rango" << endl
