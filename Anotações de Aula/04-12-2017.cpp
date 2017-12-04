#include<map>
int main(){
  map<string,int> m;
  for (int i = 0; i < 10; i++)
  {
    string nome;
    int num;
    cin >> nome >> num;
    m[nome] = num;
  }
  m["Ana"]++;
  int aux = m["Paulo"];
  if(m.find("Ana") != m.end()) // ou m.count("Ana")
      m.remove("Ana");  // -> pode ser iterator também
  if(!m.empty())
      m.clear();
  map<string,int>::it;
  for (it = m.begin(); it != m.end() ; it++ )
    cout << (*it).first << ' ' << (*it).second;

}
