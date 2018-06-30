# Casamento-de-Strings
Implementação: Casamento de Strings com Autômatos Finitos na linguagem C

# Subpalavra
A lógica utilizada para este algoritmo é baseada na teoria dos autômatos finitos. Ao compararmos um caractere da fita com o caractere da palavra, o programa decidirá se irá passar de um estado ao outro.

Armazenar na variavel TAMANHO, o comprimento da string 'palavra':
```c
for(i=0; palavra[i]!='\0' ; i++)
       tamanho++;
 ```      
Armazenar na variavel TAMANHO2, o comprimento da string 'fita': 
```c
for(i=0; fita[i]!='\0' ; i++)
    tamanho2++;
```
A principal idéia deste algoritmo é iterar pela string 'palavra' até encontrar um caractere que seja igual ao primeiro caractere da string 'fita'. Quando for encontrado estes caracteres iguais, irá entrar em um novo laço de repetição que agora itera pela string 'fita'. Neste laço será comparado os caracteres da 'palavra' e 'fita'. A cada teste positivo, serão testados os caracteres consecutivos dos testados anteriormente. Os testes serão feitos até acabar a string 'fita'. Caso um teste de negativo, o laço é fechado e continua-se a iterar pela string 'palavra'. Para aceitar a entrada, foi criada a variável 'aceita', que terá seu valor incrementado caso o valor de 'j' percorra todos os caracteres da fita. 
```c
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
Caso 'aceita' tiver algum valor armazenado, a entrada é aceita, senão, a entrada é rejeitada.
```c
if(aceita!=0)
    {
        printf("\nEntrada aceita => [%s] - contem a subpalavra '%s'", palavra, fita);
    }else{
        printf("\nEntrada rejeitada => [%s] - nao contem a subpalavra '%s'", palavra, fita);
    }
```
# Prefixo

Semelhante a função de subpalavra. A idéia é comparar os caracteres, um por um, e verificar se são iguais. Neste caso, não é necessário armazenar o tamanho da string 'palavra', pois o prefixo sempre será no começo dela.

Checar o tamanho da nossa fita: 
```c
for(i=0; fita[i]!='\0' ; i++)
    {
       tamanho++;
    }
```

O primeiro passo é chegar se os primeiros caracteres da 'fita' e da 'palavra' são iguais. Se não forem iguais, já não teremos um prefixo na palavra e a entrada é rejeitada. Caso forem iguais, agora precisamos apenas comparar os caracteres consecutivos. Para isto, iteramos pela string 'fita', comparando caracter por caracter. Se alguma iteração falhar, consequentemente, os caracteres não são iguais, assim não existe o prefixo. 
```c
if(fita[0]==palavra[0]){
        aux = 0;
        for(i=0 ; i < tamanho ; i++)
        {
            if(fita[i]==palavra[aux])
            {
                aux++;
            }else{
                printf("\nEntrada rejeitada => [%s] - nao contem o prefixo '%s'", palavra, fita);
                exit(0);
            }
        }
    }else{
        printf("\nEntrada rejeitada => [%s] - nao contem o prefixo '%s'", palavra, fita);
    }
```
Existirá prefixo quando a quantidade de iterações for igual ao tamanho da string 'fita'.
```c
if(aux==tamanho){
        printf("\nEntrada aceita => [%s] - contem o prefixo '%s'", palavra, fita);
    }
```
