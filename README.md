# Casamento-de-Strings
Implementação: Casamento de Strings com Autômatos Finitos na linguagem C

# Subpalavra
A lógica utilizada para este algoritmo é baseada na teoria dos autômatos finitos. Ao compararmos um caractere da fita com o caractere da palavra, o programa decidirá se irá passar de um estado ao outro.

Armazenar na variavel TAMANHO, o comprimento da string 'palavra':
```
for(i=0; palavra[i]!='\0' ; i++)
       tamanho++;
 ```      
Armazenar na variavel TAMANHO2, o comprimento da string 'fita': 
```
for(i=0; fita[i]!='\0' ; i++)
    tamanho2++;
```

A ideia deste laço de repetição é iterar a cada caractere da string 'palavra' e fazer testes, isto é: A cada iteração, irá verificar se o primeiro caractere da nossa fita, é igual ao caractere atual da palavra. Caso seja igual, irá entrar em um novo laço, este que percorre até o fim da string 'fita'. Enquanto os caracteres forem iguais, o valor de 'aux' irá incrementar, tanto quanto o valor de 'j'. Desta maneira irá sendo feita as comparações da string 'fita' e 'palavra' até que se chegue ao final do tamanho da 'fita'. Neste segundo laço, caso algum dos caracteres testados não for igual, irá sair do laço da 'fita' e continuará iterando pelo laço da'palavra'. 
Se o laço de 'palavra' chegar ao fim e não ter ao menos uma iteração do laço 'fita', significa que a 'palavra' não contem a subpalavra de 'fita'. Caso o laço de 'fita' seja iterado até seu final, significa que todos os caracteres são iguais, assim incrementei um ao valor da variável 'aceita'. Se o valor dela for igual a zero, então não existe subpalavra, se o valor for um, então existe subpalavra.
```
for(i=0 ; i < tamanho ; i++)
    {
        if(fita[0]==palavra[i]){
            aux = i;
            for(j=0 ; j < tamanho2 ; j++){
                if(fita[j]==palavra[aux]){
                    aux++;
                }else{
                    break;
                }
            }

            if(j==tamanho2)
            {
                aceita++;
            }
        }
    }
```
