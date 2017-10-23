QUADRO 01 _

	#include<iostream>
	#include<vector>	// pra usar o vector precisa fazer o include
	using namespace std;
	int main(){
		int vet[100];
		vector<int> v;	// vector<int>v; Cria um vetor sem posição alguma , enquanto vector<int>v(100);  Cria um vetor inicial de 100 posições
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
	#include<algorithm>		// include para inserir os algoritmos de ordenação
	int main(){
		vector<int> v;
		int num;
		while(cin>>num)
			v.push_back(num);
		sort(v.begin(), v.end());
		stable_sort(v.begin(), v.end());     // Ordenação estável, o que seria ? Ordenação de elementos em que não tem dado simples (int, double, float), caso queira ordenar structs, por exemplo. Struct não é um dado simples. Como ordenar os dados da struct ? É possível fazer um vector de struct. 

	}

		/*    

			Exemplo de ordenação estável:		

	 Não ordenado:
			   < 3 ; 5 >
			   < 1 ; 2 >
			   < 1 ; 4 >
			_______________
	 
	 Ordenado de forma estável:

			   < 1 ; 2 >
			   < 1 ; 4 >
			   < 3 ; 5 >	

	*/

QUADRO 03 _

	#include<iostream>
	#include<vector>
	#include<algorithm>
	struct dados{
		int id; string nome;
	}
	int main(){
		vector<dados> v;
		int num; string str; dados aux;
		cin >> num >> str;
		aux.id = num;
		aux.nome = str;
		v.push_back(aux);   	// insere a variável aux do tipo dados no vetor

	}

	/*

	REDEFINIÇÃO DA FUNÇÃO CMP (Função comparação simples já encontra-se pré-definida)
	
	bool cmp(dados a, dados b){
		return(a.id < b.id || a.id == b.id && a.nome < b.nome);
	}
	
	sort(v.begin(), v.end(), cmp);
	
		// Exemplo: 
	  	//		30 , Jose, ...
		//		25 , Maria, ...

	*/
















