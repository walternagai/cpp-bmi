#include <iostream>
using namespace std;

int main() {
  // crie duas variáveis com os nomes: peso e altura
  float peso, altura;
  
  // crie uma variável com o nome: imc
  float imc;
  
  // leia um valor para a variável peso
  cin >> peso;
  
  // leia um valor para a variável altura
  cin >> altura;
  
  // calcule o valor do imc a partir da fórmula
  imc = peso / (altura * altura);
  
  // mostre o valor do imc calculado
  cout << imc;
  
  return 0;
}
