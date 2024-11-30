# Descrição do Trabalho

Neste trabalho prático, o objetivo é implementar um programa em linguagem C que leia uma imagem no formato PGM e utilize a técnica de compactação **Run-Length** para compactar ou descompactar a imagem. O algoritmo Run-length (ou RLE) é uma técnica para comprimir cadeias de caracteres onde existem sequências longas de caracteres repetidos.  

O princípio do funcionamento dessa codificação é simples: Quando temos a ocorrência de uma repetição contínua de determinado caractere, por exemplo, `AAAAAAAAAAAA`, é possível substituir sua representação pelo par `(12, A)`, precedido por um identificador e resultando em uma string do tipo `@ A 12` (assumindo neste exemplo que o identificador é o caractere `@`).  

Perceba, nos exemplos de entrada e saída, que nem sempre é vantajosa a substituição dos caracteres da imagem. Discuta e infira quando isso acontece.

- Saiba mais sobre o Run-length: [Codificação Run-length](https://pt.wikipedia.org/wiki/Codifica%C3%A7%C3%A3o_run-length)

---

# Entrada e saída de dados

O programa deve ser executado em linha de comando, com os nomes dos arquivos de entrada e saída sendo passados pelo argumento da execução do código. Exemplos:

```bash
./runlength entrada.pgm saida.pgmc

ou

./runlength entrada.pgmc saida.pgm
```
### Explicação dos Exemplos

- **Exemplo 1:**  
  `entrada.pgm` é uma imagem de entrada do tipo **P2** e `saida.pgmc` é o arquivo compactado do tipo **P8**.

- **Exemplo 2:**  
  `entrada.pgmc` é o arquivo compactado do tipo **P8** e `saida.pgm` é o arquivo de imagem descompactado do tipo **P2**.

---

### Funcionalidades do Programa

- **Compactação:**  
  - Deverá receber uma imagem do tipo **P2** e transformar em uma imagem compactada do tipo **P8**.

- **Descompactação:**  
  - Deverá receber uma imagem compactada do tipo **P8** e transformar em uma imagem do tipo **P2**.
