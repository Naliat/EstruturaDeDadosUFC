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


## Santo Jota Marcelo

Jota Marcelo estava pensando em um método para ficar rico. Ele entrou na igreja de Santo Antônio e disse:

"Santo Antônio, eu estou muito preocupado com os pobres. Se você dobrar o dinheiro que eu estou no bolso, eu doarei X reais para os pobres."

Quando ele saiu da igreja e olhou no bolso, o dinheiro tinha dobrado. Em seguida, ele entrou em mais duas igrejas. Contudo, quando ele saiu da terceira igreja, depois que doou o dinheiro que estava no bolso, ele estava com os bolsos vazios.

Sua tarefa é descobrir com quanto de dinheiro ele entrou na primeira igreja.

**Entrada:**

A entrada possui dois inteiros N e C, separados por um espaço, representando o número de igrejas que Jota Marcelo entrou e o valor que seria doado para os pobres, respectivamente.

**Saída:**
```
3 20
```

Um inteiro representando a quantidade de dinheiro que Jota Marcelinho entrou na primeira igreja.

**Exemplo de Entrada**
```
17.5
```


## Padrões II

Considere a seguinte sequência de imagens:

![Padrões](https://github.com/Naliat/EstruturaDeDadosUFC/blob/main/Padr%C3%B5es2.jpeg)

Cada imagem na sequência é formada por um número de peças (uma peça pode ser um quadrado ou triângulo).

A tabela seguinte apresenta uma relação entre a ordem da imagem na sequência e o número total de peças utilizadas:

| ordem | 1 | 2 | 3 |
|-------|---|---|---|
| número de peças | 3 | 8 | 15 |

Faça um programa que recebe um inteiro n e devolve o número total de peças da n-ésima imagem da sequência.

**Entrada**

A entrada é composta por uma única linha contendo um inteiro n representando a posição de um padrão na sequência.

**Saída**

A saída é composta por uma única linha contendo o total de peças da n-ésima imagem da sequência.

**Exemplo de Entrada**
```
3
```
**Exemplo de Saída**
```
15
```



## Fibonacci I

Uma relação de recorrência é uma forma de definir os termos de uma sequência em relação aos valores dos termos anteriores. No caso dos coelhos de Fibonacci, qualquer mês conterá os coelhos que estavam vivos no mês anterior além de sua nova prole. Uma observação importante é que o número de descendentes em qualquer mês é igual ao número de coelhos que estavam vivos dois meses antes.

![Fibonacci](https://github.com/Naliat/EstruturaDeDadosUFC/blob/main/FibonacciRabbits1.jpg)



### Fibonacci

Como resultado, se Fn representa o número de pares de coelhos vivos após o n-ésimo mês, então obtemos a sequência de Fibonacci com termos que são definidos pela relação de recorrência Fn = Fn−1 + Fn−2 (com F1=F2=1 para iniciar a sequência). Embora a sequência tenha o nome de Fibonacci, ela era conhecida pelos matemáticos indianos há mais de dois milênios.

Faça um programa que calcula o número total de pares de coelhos que estarão presentes após n meses, se começarmos com 1 par e em cada geração, cada par de coelhos em idade reprodutiva produz uma ninhada de k pares de coelhos (em vez de apenas 1 par).

**Entrada**

A entrada é composta por uma única linha contendo dois inteiros (1 ≤ n ≤ 10) e (1 ≤ k ≤ 10)

**Saída**

A saída é composta por uma única linha contendo o número total de pares de coelhos que estão presentes após n meses, se começarmos com 1 par e em cada geração, cada par de coelhos em idade reprodutiva produz uma ninhada de k pares de coelhos.

**Exemplo de Entrada**
```
5 3
```
**Exemplo de Saida**
```
19
```



## Quadrado

Aragão está profundamente envolvido em seu aprendizado sobre recursão. Recentemente, ele fez uma descoberta fascinante: o cálculo de n² pode ser expresso de maneira recursiva por meio da seguinte fórmula iterativa: (n + 1)² = n² + 2n + 1, começando com 1² = 1 como caso base.

Empolgado com essa revelação, Aragão deseja desenvolver um algoritmo recursivo que não apenas calcule n², mas também mostre cada passo do processo. No entanto, ele enfrenta algumas dificuldades para elaborar tal algoritmo. É aí que entra a sua ajuda.

**Entrada**

A entrada é composta por uma única linha contendo um inteiro n.

**Saída**

A saída é composta por várias linhas mostrando o passo-a-passo do algoritmo recursivo.

**Exemplo de Entrada**

```
10
```

**Exemplo de Saída**
```
10^2 = 9^2 + 29 + 1 = ?
9^2 = 8^2 + 28 + 1 = ?
8^2 = 7^2 + 27 + 1 = ?
7^2 = 6^2 + 26 + 1 = ?
6^2 = 5^2 + 25 + 1 = ?
5^2 = 4^2 + 24 + 1 = ?
4^2 = 3^2 + 23 + 1 = ?
3^2 = 2^2 + 22 + 1 = ?
2^2 = 1^2 + 21 + 1 = ?
1^2 = 1
2^2 = 1^2 + 21 + 1 = 4
3^2 = 2^2 + 22 + 1 = 9
4^2 = 3^2 + 23 + 1 = 16
5^2 = 4^2 + 24 + 1 = 25
6^2 = 5^2 + 25 + 1 = 36
7^2 = 6^2 + 26 + 1 = 49
8^2 = 7^2 + 27 + 1 = 64
9^2 = 8^2 + 28 + 1 = 81
10^2 = 9^2 + 29 + 1 = 100
```


## Fibonacci II

Suponha agora os nossos coelhos não vivam para sempre e morrem depois de 3 meses. Contudo, os coelhos acasalam com um mês de idade e cada fêmea produz um novo par de coelhos a cada mês a partir do segundo mês.

***Fibonacci***

A imagem mostra que ao final de seis meses teremos apenas 4 pares de coelhos considerando que os coelhos morrem após 3 meses. Quantos pares de coelhos teremos ao final de n meses?

Desenvolva uma função recursiva f(n) que devolve o número de pares de coelhos após n meses considerando que os coelhos morrem depois de 3 meses.

**Entrada**

A entrada é composta por uma única linha contendo um único inteiro (1 ≤ n ≤ 40).

**Saída**

A saída é composta por uma única linha contendo o número total de pares de coelhos que estão presentes após n meses, se começarmos com 1 par e em cada geração, cada par de coelhos em idade reprodutiva produz um par de coelhos e eles morrem depois de 3 meses.

**Exemplo de Entrada**
```
6
```
**Exemplo de Saída**
```
4
```
**Exemplo de Entrada**
```
40
```
**Exemplo de Saída**
```
55405
```



## Padrões III

Considere as seguintes sequências de figuras geométricas:

![Padrões](https://github.com/Naliat/EstruturaDeDadosUFC/blob/main/Padroes.png)

Dado dois inteiros 3 ≤ n ≤ 20 e $ 1 m $, encontre o número de pontos da m-ésima figura da sequência Fn. Por exemplo, a segunda figura da sequência F3 é formada por 3 pontos.

**Entrada**

A entrada é composta por uma única linha contendo dois inteiros n e m representando o m-ésima figura da sequência Fn.

**Saída**

A saída é composta por uma única linha contendo o número total de pontos.

**Exemplo de Entrada**
```
6 2
```
**Exemplo de Saída**
```
6
```




