#include <stdio.h>

int main() {
  char cargo;
  int senha;

  printf("digite seu cargo:\n ");
  scanf("%c", &cargo);

  printf("digite sua senha:\n");
  scanf("%d",&senha);

  if(cargo =='A' && senha == 1234){
      printf("seja bem vindo adm");
  }else{
  printf("voce nao pode acessar esse site");
}
    return 0;
}
