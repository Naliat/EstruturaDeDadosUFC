## **Imprimindo Sufixos de uma Palavra**

Você precisa responder algumas questões fundamentais antes de começar o desenvolvimento de um algoritmo recursivo. Entre elas, temos:

- Qual é o caso base?
- Qual é a ação fundamental?
- Quantas vezes teremos uma chamada recursiva.

Considere o seguinte padrão de impressão:

```
4
3
2
1

```
No exemplo acima, estamos imprimindo todos os números em ordem decrescente de 4 até 1. Neste exemplo, vamos considerar que o caso base acontece quando o valor de `n` é igual a 0. A ação fundamental será imprimir um número e depois resolver o mesmo problema para o número anterior.

```cpp
void countDown(int n){
    if(n == 0){
        return;
    }else{
        cout << n << endl;
        countDown(n-1);
    }
}

```

```
4
3
2
1
1
2
3
4

```

```cpp
void countDownUp(int n){
    if(n == 0){
        return;
    }else{
        cout << n << endl;
        countDownUp(n-1);
        cout << n << endl;
    }
}
```
```
tailan
ailan
ilan
lan
an
n

```
```
void printTower(char * s){
    if(*s == '\0'){
        return;
    }else{
        printf("%s\n", s);
        printTower(s+1);
    }
}
```



## Coeficientes Binomiais

Os coeficientes binomiais são muito importantes para a resolução de vários problemas de contagem. Por exemplo,

C(n,k) representa o número de maneiras de escolher k elementos de um conjunto de n elementos.

C(n + k - 1,k) representa o número de maneiras de escolher k elementos de um conjunto de n elementos se repetições são permitidas.

Os coeficientes binomiais podem ser definidos usando a seguinte recursão:

![Descrição da imagem](https://github.com/Naliat/EstruturaDeDadosUFC/blob/main/Coeficientes%20Binomias%20formula.jpeg)


Sua tarefa é dado dois inteiros n e k, calcula C(n,k).

**Entrada**

A primeira linha contendo dois inteiros n e k.

**Saída**

Imprima uma linha contendo C(n,k).


**Exemplo de Entrada**
```
8 4
```
**Exemplo de Saída**
```
70
```

## Imprimindo Diagonal

Faça um programa que recebe uma palavra com até 100 caracteres e imprime a palavra em diagonal.

**Entrada**

A entrada é composta por uma única linha contendo uma palavra com até 100 caracteres.

**Saída**

A saída é composta por n linhas, sendo n o tamanho da palavra lida.

**Exemplo de Entrada**
```
tailan
```
**Exemplo de Saída**

```
t
 a
  i
   l
    a
     n
```

**Dica:**

```cpp
void diagonal(char * s, int k){
    if(*s == '\0'){
        return;
    }else{
        // Imprima k caracteres de espaço em branco
        // Imprima o primeiro caractere de s e pule a linha
        // Faça a chamada recursiva com o próximo caractere e incrementa k
    }
}
```


## Padrões I

O diagrama mostra os três primeiros padrões em uma sequência em que cada padrão possui um buraco quadrado no meio.

![Padrões](https://github.com/Naliat/EstruturaDeDadosUFC/blob/main/Padr%C3%B5ess1.jpeg)

### Padrões

Escreva uma função que, dado um inteiro n representando a posição de um padrão na sequência, calcule o número de quadrados sombreados.

**Entrada**

A entrada é composta por uma única linha contendo um inteiro n representando a posição de um padrão na sequência.

**Saída**

A saída é composta por uma única linha contendo o número de quadrados sombreados do n-ésimo padrão da sequência.

**Exemplo de Entrada**
```
1
```
**Exemplo de Saida**
```
20
```

A primeira imagem do padrão pode ser decomposto em 4 retângulos 1x2 e 4 figuras no formato de L.
![Padrõess](https://github.com/Naliat/EstruturaDeDadosUFC/blob/main/Padr%C3%B5es1.jpeg)




