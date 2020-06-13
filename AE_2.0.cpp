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

    while (resposta == 's')
    {
        cout << "\nInforme o adicional desejado" << endl;
        cout << "(0) Básico: " << endl;
        cout << "(1) Trio Elétrico (Trava, vidro e alarme): " << endl;
        cout << "(2) Ar condicionado: " << endl;
        cout << "(3) Direção hidráulica: " << endl;
        cout << "(4) Completo: " << endl;
        cin >> escolha;
        //Finaliza o loop caso escolha básico ou completo.
        if (escolha == 0)
        {
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
            break;
        }
        if (escolha > 4 || escolha < 0)
        {
            cout << "/nValor Inválido!!" << endl;
        }
        /*
        Limpar a tela de escolha Linux
        system ("clear");
        Limpar a tela de escolha Windows
        system ("cls")
        */
        cout << "\nDeseja outro adicional? (s/n)" << endl;
        cin >> resposta;
    }
    desconto = ((3.5*completo)/100);
    cout << "\nValor de fábrica R$" << fabrica << " reais" << endl;
    cout << "Veículo Básico: R$" << fabrica+ipi << " reais" << endl;
    cout << "Valor do IPI: R$" << ipi << " reais" <<endl;
    cout << "Veículo com adicionais: R$" << (total+fabrica+ipi) << " reais" << endl;
    cout << "Desconto para veículo completo: R$" << desconto << " reais" << endl;
    cout << "Completo: R$" << (completo - desconto) << " reais" << endl;
    cout << "\nVocê optou " << opcao1 << " vezes por Trio Elétrico." << endl;
    cout << "Você optou " << opcao2 << " Vezes por Ar condicionado." << endl;
    cout << "Você optou " << opcao3 << " Vezes por Direção hidraulica.\n\n" << endl;

    return 0;
}
