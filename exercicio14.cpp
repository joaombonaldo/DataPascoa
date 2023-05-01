#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "Digite um ano: (ex.: 2001, 2002, etc...)";
    int y;
    cin >> y;

    //Cálculo de Carl Friedrich Gauss
    double a = y % 19;
    double b = y / 100;
    double c = y % 100;
    double d = b / 4;
    int e = static_cast<int>(b) % 4;
    int g = static_cast<int>(8 * b + 13) / 25;
    int h = static_cast<int>(19 * a + b - d - g + 15) % 30;
    int j = static_cast<int>(c) / 4;
    int k = static_cast<int>(c) % 4;
    int m = static_cast<int>(a + 11 * h) / 319;
    int r = static_cast<int>(2 * e + 2 * j - k - h + m + 32) % 7;
    int n = static_cast<int>(h - m + r + 90) / 25;
    int p = static_cast<int>((h - m + r + n + 19)) % 32;

    //Transformação do mês (decimal) para mês (por extenso)
    string mes;
    if (n == 1) mes = "Janeiro";
    else if (n == 2) mes = "Fevereiro";
    else if (n == 3) mes = "Março";
    else if (n == 4) mes = "Abril";
    else if (n == 5) mes = "Maio";
    else if (n == 6) mes = "Junho";
    else if (n == 7) mes = "Julho";
    else if (n == 8) mes = "Agosto";
    else if (n == 9) mes = "Setembro";
    else if (n == 10) mes = "Outubro";
    else if (n == 11) mes = "Novembro";
    else mes = "Dezembro";

    //print do resultado
    if (y > 2023){
        cout << "No ano de " << y << " a pascoa vai ser dia " << p << " de " << mes << ".";
    } else {
        cout << "No ano de " << y << " a pascoa foi no dia " << p << " de " << mes << ".";
    }

}