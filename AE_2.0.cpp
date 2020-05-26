#include <iostream>
#include <iomanip>

using namespace std;

int main ()


{
    setlocale (LC_ALL, "ptb");
    float total, fabrica, trioEletrico, dirHidraulica, arCond, ipi, completo, desconto;
    char resposta;
    int escolha;
    int opcao1 = 0;
    int opcao2 = 0;
    int opcao3 = 0;
    total = 0;
    completo = 0;
    resposta = 's';
    
    cout << fixed << setprecision(2) << endl;
    cout << "Informe o valor de fábrica do veículo: ";
    cin >> fabrica;
    ipi = ((8*fabrica)/100);
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
            total = fabrica + ipi;
            break;
        }
        if (escolha == 1)
        {
            trioEletrico = ((2*(fabrica+ipi))/100);
            total = total + trioEletrico;
            opcao1++;
        }
        if (escolha == 2)
        {
            arCond = ((2*fabrica)/100);
            total = total + arCond;
            opcao2++;
        }
        if (escolha == 3)
        {
            dirHidraulica = ((2*fabrica)/100);
            total = total + dirHidraulica;
            opcao3++;
        }
        if (escolha == 4)
        {
            completo = (fabrica+ipi) + ((2*(fabrica+ipi))/100) + ((2*fabrica)/100) + ((2*fabrica)/100);
            //total = ipi - completo;
            break;
        }
       /* else
        {
            cout << "Operação Inválida!!" << endl;
        }
        */
        cout << "Deseja outro adicional? (s/n)" << endl;
        cin >> resposta;
    }
    desconto = ((3.5*completo)/100);
    cout << "Veículo Básico: R$" << fabrica+ipi << " reais" << endl;
    cout << "Valor do IPI: R$" << ipi << " reais" <<endl;
    cout << "Veículo com adicionais: R$" << (total+fabrica+ipi) << " reais" << endl;
    cout << "Você optou " << opcao1 << " vezes o Trio Elétrico." << endl;
    cout << "Você optou " << opcao2 << " Vezes o Ar condicionado." << endl;
    cout << "Você optou " << opcao3 << " Vezes a Direção hidraulica." << endl;
    cout << "Desconto para veículo completo: R$" << desconto << endl;
    cout << "Completo: R$" << (completo - desconto) << " reais" << endl;

    return 0;
}