#include <iostream>

using namespace std;

int main ()

{
    setlocale (LC_ALL, "ptb");
    float total, fabrica, trioEletrico, dirHidraulica, arCond, ipi, completo, desconto;
    char resposta;
    int escolha;
    total = 0;
    completo = 0;
    resposta = 's';
    
    cout << "Informe o valor de fábrica do veículo: ";
    cin >> fabrica;
    ipi = fabrica + ((8*fabrica)/100);
    cout << "Informe o valor de fábrica do veículo: R$" << fabrica << " reais" << endl;
    //cout << "O valor com IPI é: " << ipi << endl;
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
            break;
        }
        if (escolha == 1)
        {
            trioEletrico = ((2*ipi)/100);
            total = total + trioEletrico;
        }
        if (escolha == 2)
        {
            arCond = ((2*fabrica)/100);
            total = total + arCond;
        }
        if (escolha == 3)
        {
            dirHidraulica = ((2*fabrica)/100);
            total = total + dirHidraulica;
        }
        if (escolha == 4)
        {
            completo = ipi + ((2*ipi)/100) + ((2*fabrica)/100) + ((2*fabrica)/100);
            //total = ipi - completo;
            break;
        }
        cout << "Deseja outro adicional? (s/n)" << endl;
        cin >> resposta;
    }
    desconto = ((3.5*completo)/100);
    cout << "Veículo Básico: R$" << ipi << " reais" << endl;
    cout << "Veículo com adicionais: R$" << (ipi + total) << " reais" << endl;
    cout << "Desconto para veículo completo: R$" << desconto << endl;
    cout << "Completo: R$" << (completo - desconto) << " reais" << endl;

    return 0;
}