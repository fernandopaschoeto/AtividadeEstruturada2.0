#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main ()

{
    setlocale (LC_ALL, "ptb");
    float total, fabrica, trioEletrico, dirHidraulica, arCond, ipi, completo, desconto;
    char resposta;
    int escolha;
    int opcao0 = 0;
    int opcao1 = 0;
    int opcao2 = 0;
    int opcao3 = 0;
    int opcao4 = 0;
    total = 0;
    completo = 0;
    resposta = 's';
    
    cout << fixed << setprecision(2) << endl;
    cout << "Informe o valor de fábrica do veículo: ";
    cin >> fabrica;
    ipi = ((8*fabrica)/100);
        
    //while (resposta == 's') 
    do
    {
        cout << "\nInforme o adicional desejado" << endl;
        cout << "(0) Básico: " << endl;
        cout << "(1) Trio Elétrico (Trava, vidro e alarme): " << endl;
        cout << "(2) Ar condicionado: " << endl;
        cout << "(3) Direção hidráulica: " << endl;
        cout << "(4) Completo: " << endl;
        cout << "(5) Encerrar Programa: " << endl;
        cin >> escolha; 
        switch (escolha)
        {
        case 0:
            cout << "Veículo Básico: R$" << fabrica+ipi << " reais" << endl;
            opcao0++;
            break;

        case 1:
            trioEletrico = ((2*(fabrica+ipi))/100);
            total = total + trioEletrico;
            cout << "Veículo com adicionais: R$" << (total+fabrica+ipi) << " reais" << endl;
            opcao1++;
            break;
        case 2:
            arCond = ((2*fabrica)/100);
            total = total + arCond;
            cout << "Veículo com adicionais: R$" << (total+fabrica+ipi) << " reais" << endl;
            opcao2++;
            break;
        case 3:
            dirHidraulica = ((2*fabrica)/100);
            total = total + dirHidraulica;
            cout << "Veículo com adicionais: R$" << (total+fabrica+ipi) << " reais" << endl;
            opcao3++;
            break;
        case 4:
            completo = (fabrica+ipi) + ((2*(fabrica+ipi))/100) + ((2*fabrica)/100) + ((2*fabrica)/100);
            desconto = ((3.5*completo)/100);
            cout << "Desconto para veículo completo: R$" << desconto << " reais" << endl;
            cout << "Completo: R$" << (completo - desconto) << " reais.\n" << endl;
            opcao4++;
            break;
        case 5:
            system("cls");
            desconto = ((3.5*completo)/100);
            cout << "\nValor de fábrica R$" << fabrica << " reais" << endl;
            cout << "Valor do IPI: R$" << ipi << " reais" <<endl;
            cout << "Veículo Básico: R$" << fabrica+ipi << " reais\n\n" << endl;
            cout << "Veículo com adicionais: R$" << (total+fabrica+ipi) << " reais" << endl;
            cout << "Desconto para veículo completo: R$" << desconto << " reais" << endl;
            cout << "Completo: R$" << (completo - desconto) << " reais.\n" << endl;
            cout << "\nVocê optou " << opcao0 << " vezes por veículo básico." << endl;
            cout << "Você optou " << opcao1 << " vezes por Trio Elétrico." << endl;
            cout << "Você optou " << opcao2 << " vezes por Ar condicionado." << endl;
            cout << "Você optou " << opcao3 << " vezes por Direção hidraulica." << endl;
            cout << "Você optou " << opcao4 << " vezes por veículo completo. \n\n" << endl;
            break;
        default:
            cout << "\nValor Inválido!!" << endl;
        }
    } 
    while (escolha != 5);
    system("pause");
    return 0;
}