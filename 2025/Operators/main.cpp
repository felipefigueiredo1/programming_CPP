#include <iostream>

using namespace std;

int main()
{

    // OPERADORES ARITMETICOS BINÁRIOS

    cout << "OPERADORES ARITMÉTICOS BINÁRIOS \n";

    int var;
    cout << var; // lixo aleatorio

    int n1, n2;

    float result;

    n1 = 10;
    n2 = 20;

    result = n1 + n2;

    cout << "\n"; cout << result;

    result = n1 * n2;
    cout << "\n"; cout << result;

    result = (float) n1 / n2; // cast explicito, transformando a variavel para float explicitamente
    cout << "\n"; cout << result;

    // resto da divisao abaixo
    result = n1 % n2;
    cout << "\n"; cout << result;

    // OPERADORES ARITMETICOS UNÁRIOS

    int n = 30;

    cout << "OPERADORES ARITMÉTICOS UNÁRIOS \n";

    // OPERADORES PREFIX & POSTFIX

    // PREFIX, incrementam ou decrementam antes de remover a referencia ao objeto

    ++n;

    // POSTFIX, incremental ou decremental após fazer referencia ao objeto

    cout << n++; // = 31;

    cout << "\n";

    cout << n; // = 32;

    cout << "\n";

    n--; n--;

    cout << n; // 29;

    // Prioridade no calculo

    n = (10 + 20) / 2; // Primeiro a soma depois a divisão

    cout << "\n"; cout << n;


    return 0;
}
