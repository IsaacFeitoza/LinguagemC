int main(int argc, char const *argv[])
{
    int qtde;
    printf("Informe o número de alunos:\n>>");
    scanf("%d", &qtde);
 
  float notas[qtde];


  for (int i = 0; i < qtde; i++){
     printf("Informe a nota do %d aluno\n>>", (i+i));
     scanf("%f", &notas[i]);
 }
    
    
    
int soma = 0;
for (int i = 0; i < qtde; i++)
  soma += notas[i];
}   

printf("Média das notas é: %5.2f \n", (soma*1.0/qtde)); 
   
 return 0;

}
