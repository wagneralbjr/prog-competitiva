#include <bits/stdc++.h>

using namespace std;


int main () {   
    int t;

    cin >> t;
    getchar();
    while ( t--) {
       
       getchar();
       char nome[50];
       map<string,int> floresta;
       int total = 0;
       while(scanf("%[^\n]s",nome) > 0 ) {
           // printf("%s\n",nome);
           string nome_conv(nome);
           
           if (floresta.find(nome) != floresta.end() ){
                floresta[nome]+=1;     
           }
           else {
                floresta[nome] = 1;
           }
           total++;
         getchar();
       }
       for ( auto elem : floresta ) {
            cout <<  elem.first << " ";
            printf("%.4lf\n",double(elem.second)*100/double(total) );
       
       }
       if( t != 0)
          printf("\n");
    
    }


    return 0 ;
}
