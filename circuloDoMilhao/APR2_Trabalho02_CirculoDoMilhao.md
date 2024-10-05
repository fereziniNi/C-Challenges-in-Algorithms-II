# APR2 - Algoritmos e Programação 2

## Trabalho Prático 02 - Círculo do milhão

### Descrição do Trabalho:

Há N pessoas sentadas formando um círculo. As pessoas são numeradas ordenadamente, de 1 a N. No centro do círculo há um bilionário que gosta de distribuir milhões por aí. Ele vai escolher uma pessoa para ganhar um milhão. Para isso ele vai eliminar do círculo N - 1 pessoas, seguindo duas regras:

* O bilionário elimina uma pessoa do círculo e sempre pula a seguinte, até sobrar apenas uma pessoa, que é a ganhadora do prêmio.
* O bilionário sempre começa eliminando a pessoa de número 2.

Por exemplo: Considerando N = 1000, o bilionário elimina a pessoa número 2, seguida da 4, 6, 8,...., 996, 998, 1000. Nesse momento, ele pula a número 1 e elimina a pessoa número 3, número 7 e assim sucessivamente.

Dado esse cenário, faça um programa que dado o número N de pessoas do círculo o programa informa:

1. Qual o número da pessoa que irá ganhar o prêmio; e
2. Qual a x-ésima pessoa a ser eliminada

### Formato de Entrada e Saída

**Entrada:**
* A primeira linha contém um número inteiro N, representando o número total de pessoas.
* A segunda linha contém um número inteiro X, representando a posição da pessoa a ser encontrada.

**Saída:**
* A primeira linha indica a X-ésima pessoa a ser eliminada.
* A segunda linha indica o número da pessoa ganhadora.

### O que será avaliado:
* Corretude da solução
* Qualidade da implementação
* Nomenclatura adequada de variáveis e funções
* Uso adequado da memória

### Observações importantes:
* Este trabalho possui peso 1.
* O trabalho deve ser feito em grupos de no máximo 3 pessoas.
* A data de entrega será informada no Moodle.
* Para entregar o trabalho, submeta o link para o repositório no GitHub.
* Coloque o nome dos integrantes no arquivo README.
* A submissão deve ser feita por apenas um integrante do grupo.
* Plágios terão nota zero.

| Entrada | Saída |
|---|---|
| 10 1 | Eliminação 1: 2 <br> Ganhadora: 5 |
| 20 5 | Eliminação 5: 10 <br> Ganhadora: 9 |
| 13 9 | Eliminação 9: 9 <br> Ganhadora: 11 |
| 8 7 | Eliminação 7: 5 <br> Ganhadora: 1 |