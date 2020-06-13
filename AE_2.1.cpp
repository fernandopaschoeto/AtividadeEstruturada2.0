#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main ()

{
    setlocale (LC_ALL, "ptb");
    float total, fabrica, trioEletrico, dirHidraulica, arCond, ipi, completo, desconto;
    //char resposta;
    int escolha;
    int opcao0 = 0;
    int opcao1 = 0;
    int opcao2 = 0;
    int opcao3 = 0;
    int opcao4 = 0;
    total = 0;
    completo = 0;
    //resposta = 's';

    cout << fixed << setprecision(2) << endl;
    cout << "Informe o valor de f�brica do ve�culo: ";
    cin >> fabrica;
    ipi = ((8*fabrica)/100);

    //while (resposta == 's')
    do
    {
        cout << "\nInforme o adicional desejado" << endl;
        cout << "(0) B�sico: " << endl;
        cout << "(1) Trio El�trico (Trava, vidro e alarme): " << endl;
        cout << "(2) Ar condicionado: " << endl;
        cout << "(3) Dire��o hidr�ulica: " << endl;
        cout << "(4) Completo: " << endl;
        cout << "(5) Encerrar Programa: " << endl;
        cin >> escolha;
        switch (escolha)
        {
        case 0:
            cout << "Ve�culo B�sico: R$" << fabrica+ipi << " reais" << endl;
            opcao0++;
            break;

        case 1:
            trioEletrico = ((2*(fabrica+ipi))/100);
            total = total + trioEletrico;
            cout << "Ve�culo com adicionais: R$" << (total+fabrica+ipi) << " reais" << endl;
            opcao1++;
            break;
        case 2:
            arCond = ((2*fabrica)/100);
            total = total + arCond;
            cout << "Ve�culo com adicionais: R$" << (total+fabrica+ipi) << " reais" << endl;
            opcao2++;
            break;
        case 3:
            dirHidraulica = ((2*fabrica)/100);
            total = total + dirHidraulica;
            cout << "Ve�culo com adicionais: R$" << (total+fabrica+ipi) << " reais" << endl;
            opcao3++;
            break;
        case 4:
            completo = (fabrica+ipi) + ((2*(fabrica+ipi))/100) + ((2*fabrica)/100) + ((2*fabrica)/100);
            desconto = ((3.5*completo)/100);
            cout << "Desconto para ve�culo completo: R$" << desconto << " reais" << endl;
            cout << "Completo: R$" << (completo - desconto) << " reais.\n" << endl;
            opcao4++;
            break;
        case 5:
            system("cls");
            desconto = ((3.5*completo)/100);
            cout << "\nValor de f�brica R$" << fabrica << " reais" << endl;
            cout << "Valor do IPI: R$" << ipi << " reais" <<endl;
            cout << "Ve�culo B�sico: R$" << fabrica+ipi << " reais\n\n" << endl;
            cout << "Ve�culo com adicionais: R$" << (total+fabrica+ipi) << " reais" << endl;
            cout << "Desconto para ve�culo completo: R$" << desconto << " reais" << endl;
            cout << "Completo: R$" << (completo - desconto) << " reais.\n" << endl;
            cout << "\nVoc� optou " << opcao0 << " vezes por ve�culo b�sico." << endl;
            cout << "Voc� optou " << opcao1 << " vezes por Trio El�trico." << endl;
            cout << "Voc� optou " << opcao2 << " vezes por Ar condicionado." << endl;
            cout << "Voc� optou " << opcao3 << " vezes por Dire��o hidraulica." << endl;
            cout << "Voc� optou " << opcao4 << " vezes por ve�culo completo. \n\n" << endl;
            break;
        default:
            cout << "\nValor Inv�lido!!" << endl;
        }
    }
    while (escolha != 5);
    system("pause");
    return 0;
}
