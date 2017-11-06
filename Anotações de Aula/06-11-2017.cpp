[Quadro 01_]

	#include<iostream>
  #include<stack>
  using namespace std;
  int main(){
    stack<int> P;
    int n;
    for (int i = 0; i < 100 ; i++){               // Para inserir 100 elementos
      cin >> n;
      p.push(n);                                  // Insere n na pilha
    }
    while(!p.empty()){
      n = p.top();                              // Ver quem está no topo e devolve o valor na variável n
      cout << n << endl;
      p.pop();                                  // Retira o elemento do topo da pilha
    }
  }

[Quadro 02_]

	#include<iostream>
  #include<queue>
  using namespace std;
  int main(){
    queue<int> P;
    int n;
    for (int i = 0; i < 100 ; i++){               // Para inserir 100 elementos
      cin >> n;
      p.push(n);                                  // Insere n na fila
    }
    while(!p.empty()){
      n = p.front();                              // Ver quem está na frente da fila e devolve o valor na variável n
      cout << n << endl;
      p.pop();                                  // Retira o elemento do topo da pilha
    }
  }
