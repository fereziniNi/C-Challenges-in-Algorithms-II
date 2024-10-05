  
**Trabalho Prático 03 \- Placar do Boliche**

**Descrição do Trabalho:**  
O boliche é um esporte praticado com uma bola pesada e tem como objetivo lançar a bola por uma pista, derrubar 10 pinos do lado oposto da pista dispostos em formação triangular ([https://www.infoescola.com/esportes/boliche/](https://www.infoescola.com/esportes/boliche/)).  
A fórmula da contagem de pontos no boliche tem as seguintes variáveis ([https://boliche.com.br/esporte-boliche/contagem-dos-pontos-no-boliche/](https://boliche.com.br/esporte-boliche/contagem-dos-pontos-no-boliche/)):

* Os pontos são a soma dos pinos derrubados.  
* Exceto quando fizer *strike* (derrubar 10 pinos na 1ª bola) ou *spare* (derrubar 10 pinos nas duas bolas jogadas)  
* Se fizer *strike* ganha bônus nas 2 bolas jogadas a seguir. Se fizer *spare* ganha bônus na próxima bola jogada. O bônus é igual ao número de pinos derrubados.

A pontuação de uma partida pode ir de zero (quando nenhum pino é derrubado nas dez jogadas ou “frames”) até o máximo possível de 300 pontos, ou seja, 12 “*strikes*” consecutivos. Supostamente, como cada partida tem 10 “frames” (jogadas), só seriam possíveis 10 “*strikes*”. Porém, se o jogador derrubar todos os pinos no primeiro arremesso do 10º “frame”, tem o direito de jogar mais duas bolas, podendo completar 12 “*strikes*” numa mesma linha.

Faça um programa que leia a quantidade de pinos derrubados por um praticante de boliche em cada jogada e imprima:

1. a sequência de pinos derrubados (de acordo com os exemplos de entrada e saída e as anotações de contagem de pontos \- [https://boliche.com.br/esporte-boliche/contagem-dos-pontos-no-boliche/](https://boliche.com.br/esporte-boliche/contagem-dos-pontos-no-boliche/));  
2. a pontuação final do jogador.

Dica: Para testar seu programa, sugere-se utilizar o seguinte simulador de pontos:

* [https://www.bowlinggenius.com/](https://www.bowlinggenius.com/) 

**Formato de entrada e saída:**

* **Entrada**:  
  * A entrada é composta por apenas uma linha que contém uma sequência de números inteiros. Cada número inteiro representa quantos pinos foram derrubados naquela jogada.  
* **Saída**:  
  * A saída deve ter duas linhas: a primeira o placar, conforme apresentado nos exemplos do final desse arquivo, em que cada frame é separado por uma barra vertical, um strike é representado por um X e o spare representando por uma /; a segunda linha da saída deve ser a pontuação que o jogar obteve.

**Observações importantes:**

* Este trabalho possui peso 1\.  
* O trabalho deve ser feito em grupos de no máximo três pessoas.  
* A data de entrega estará informada no moodle.  
  * Para entregar o trabalho, você deverá submeter o link para o repositório no GitHub.  
    * Coloque o nome dos integrantes no arquivo README  
* A submissão deve ser feita por apenas um integrante do grupo.  
* Plágios terão nota zero.

**Exemplos de entrada e saída:**  
Exemplo 1:

| Entrada | 1 4 4 5 6 4 5 5 10 0 1 7 3 6 4 10 2 8 6 |
| :---- | :---- |
| **Saída** | 1 4 | 4 5 | 6 / | 5 / | X \_ | 0 1 | 7 / | 6 / | X \_ | 2 / 6 133 |

Exemplo 2:

| Entrada | 10 10 10 10 10 10 10 10 10 10 10 10 |
| :---- | :---- |
| **Saída** | X \_ | X \_ | X \_ | X \_ | X \_ | X \_ | X \_ | X \_ | X \_ | X X X 300 |

Exemplo 3:

| Entrada | 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 |
| :---- | :---- |
| **Saída** | 1 1 | 1 1 | 1 1 | 1 1 | 1 1 | 1 1 | 1 1 | 1 1 | 1 1 | 1 1  20 |

Exemplo 4:

| Entrada | 0 0 0 0 0 0 0 0 0 0 0 0 0 0 10 2 3 0 0 |
| :---- | :---- |
| **Saída** | 0 0 | 0 0 | 0 0 | 0 0 | 0 0 | 0 0 | 0 0 | X \_ | 2 3 | 0 0  20 |

Exemplo 5:

| Entrada | 1 1 2 8 1 1 5 5 5 1 1 1 1 1 1 1 1 1 9 1 2 |
| :---- | :---- |
| **Saída** | 1 1 | 2 / | 1 1 | 5 / | 5 1 | 1 1 | 1 1 | 1 1 | 1 1 | 9 / 2  56 |

Exemplo 6:

| Entrada | 1 9 2 8 3 7 4 6 5 5 6 4 7 3 8 2 9 1 10 0 1 |
| :---- | :---- |
| **Saída** | 1 / | 2 / | 3 / | 4 / | 5 / | 6 / | 7 / | 8 / | 9 / | X 0 1  155 |

