#include <iostream>

using namespace std;

int main ()

{
    setlocale (LC_ALL, "ptb");
    float total, fabrica, trioEletrico, dirHidraulica, arCond, ipi, completo;
    char resposta;
    int escolha;
    total = 0;
    completo = 0;
    resposta = 's';
    
    cout << "Informe o valor de fábrica do veículo: ";
    cin >> fabrica;
    ipi = fabrica + ((8*fabrica)/100);
    cout << "O valor de fábrica é: R$" << fabrica << " reais" << endl;
    cout << "O valor do IPI é: " << ipi << endl;

    while (resposta == 's') 
    {
        cout << "Informe o adicional desejado" << endl;
        cout << "(0) Básico: " << endl;
        cout << "(1) Trio Elétrico (Trava, vidro e alarme): " << endl;
        cout << "(2) Ar condicionado: " << endl;
        cout << "(3) Direção hidráulica: " << endl;
        cout << "(4) Completo: " << endl;
        cin >> escolha; 

        if (escolha == 0)
        {
            total = ipi;
            resposta = 'n';
        }
        if (escolha == 1)
        {
            trioEletrico = fabrica + ((2*ipi)/100);
            total = total + fabrica;
        }
        if (escolha == 2)
        {
            arCond = fabrica + ((2*fabrica)/100);
            total = total + arCond;
        }
        if (escolha == 3)
        {
            dirHidraulica = fabrica + ((2*fabrica)/100);
            total = total + dirHidraulica;
        }
        if (escolha == 4)
        {
            completo = ipi - (fabrica + ((2*ipi)/100) + ((2*fabrica)/100) + ((2*fabrica)/100));
            //total = ipi - completo;
            resposta = 'n';
        }
        cout << "Deseja outro adicional? (s/n)" << endl;
        cin >> resposta;
    }
    cout << "Básico: R$" << ipi << " reais" << endl;
    cout << "Veículo com adicionais: R$" << total << " reais" << endl;
    cout << "Completo: R$" << completo << " reais" << endl;

    return 0;
}