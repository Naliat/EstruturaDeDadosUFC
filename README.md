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

