QUADRO 01 _

	#include<iostream>
	#include<vector>	// pra usar o vector precisa fazer o include
	using namespace std;
	int main(){
		int vet[100];
		vector<int>v;	// vector<int>v; Cria um vetor sem posição alguma , enquanto vector<int>v(100);  Cria um vetor inicial de 100 posições
		int num;
		while (cin >> num, num != 0)
			v.push_back(num); 	// Cria uma nova posição se o a variável num é diferente de 0 (insere elemento)
	


	/*  

	   for (int i=0; i < v.size();i++)
		cout << v[i];

	    (Forma de funcionamento do vector expressa abaixo)

	   for (vector<int>::iteratorit= v.begin();it!=v.end();it++)
		cout << *it << endl;
	   v.erase(v.begin());			// Apaga o primeiro elemento do vetor 
	   v.erase(v.begin()+2);		// Apaga o terceiro elemento do vetor
	   v.erase(v.begin()+2, v.end());	// Apaga do terceiro elemento do vetor até o elemento final do vetor
	   v.clear();				// Apaga o vetor inteiro. REMOVE O VETOR DA MEMÓRIA. 'FREE' no vetor
	
	*/

QUADRO 02 _

#include<iostream>
#include<vector>
#include<algorithm>



