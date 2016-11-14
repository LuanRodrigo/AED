#include <iostream>

using namespace std;

int main()
{
    int funcionario;
    float horasT,salario,valorH;

        cout << " Digite o numero do funcionario:";
        cin >> funcionario;
        cout << " Digite o numero d ehoras trabalhadas:";
        cin >> horasT;
        cout << " Digite o valor que recebe por hora:";
        cin >> valorH;


        salario = valorH *horasT;

        cout << "O funcionario " << funcionario << " recebe " << salario;

    return 0;
}
