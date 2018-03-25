#include <bits/stdc++.h>
using namespace std;

int main () {
    int t ;
    
    while(cin >>t , t){
        deque<int> pilha;
        vector<int> lista;
        for (int i = t; i >= 1; i--){
            pilha.push_back(i);
        
        }
        while ( pilha.size() > 1){
            lista.push_back( pilha.back());
            pilha.pop_back();
            pilha.push_front( pilha.back());
            pilha.pop_back();
        }
        cout << "Discarded cards:";
        for ( int i = 0 ; i < lista.size() ; i++){
            printf(" %d",lista[i]);
            if (i != lista.size() - 1) printf(",");

        }
        printf("\n");
        printf("Remaining card: %d\n",pilha.back());

    }

    


    return 0;
}
