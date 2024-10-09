#include <stdio.h>

int LerInt(){
  int numLido;
  scanf("%d", &numLido);

  return numLido;
}

int main(){

  int anterior, atual, cont, heCrescente;

  cont = LerInt();
  
  for(; cont>0; cont--){
    heCrescente = 0;
    anterior = LerInt();
    
    while(atual = LerInt(), atual!=-1 && anterior!=-1){
      if(anterior>atual){
        heCrescente = 1;
      }
      anterior = atual;
    }
    if(heCrescente==0) printf("sim\n");
    else printf("nao\n");
  }
  
  return 0;  
}
