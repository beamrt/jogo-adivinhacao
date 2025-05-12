#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    unsigned seed = time(0);

    int num, chances, num1;
    char letra;

    srand(seed);
    num = rand()%50;

    cout << "Escolha o nivel que voce quer jogar: A facil ou B dificil" << endl;
    cin >> letra;

        if (letra == 'a' || letra == 'A') {
            chances = 10;

        cout << "Tente adivinhar o número correto (1 a 50): " << endl;

        while((num1 != num) && (chances > 0)){

        cin >> num1;

           if(num1 < num){
            cout << "Numero incorreto" << endl;
            cout << "Palpite baixo" << endl;
            chances--;
            cout << "Você tem " << chances << " tentativa(s)" << endl;
            } else if(num1 > num) {
                cout << "Numero incorreto" << endl;
                cout << "Palpite alto" <<  endl;
                chances--;
                cout << "Você tem " << chances << " tentativa(s)" << endl;
            } else if (num1 == num) {
                cout << "Numero correto, parabéns! " << endl;
            }
        }

    }else if (letra == 'b' || letra == 'B'){
        chances = 3;

        cout << "Tente adivinhar o número correto (1 a 50): " << endl;

        while((num1 != num) && (chances > 0)){

        cin >> num1;
           if(num1 < num){
            cout << "Numero incorreto" << endl;
            cout << "Palpite baixo" << endl;
            chances--;
            cout << "Você tem " << chances << " tentativa(s)" << endl;
            } else if(num1 > num) {
                cout << "Numero incorreto" << endl;
                cout << "Palpite alto" <<  endl;
                chances--;
                cout << "Você tem " << chances << " tentativa(s)" << endl;
            } else if (num1 == num) {
                cout << "Numero correto, parabéns! " << endl;
            }
        }
            }



    return 0;
}
