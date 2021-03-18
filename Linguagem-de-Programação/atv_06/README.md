# Enunciado:

Usando os conceitos de subrotinas e coesão, estruturas de dados homogêneas (vetores) e heterogêneas (registros), crie um um programa em C que cadastre produtos e apresenta a lista de produtos cadastrados. Para isso crie um tipo TProduto através de um struct com os campos: nome, codbarras, custo, preco. Declare um vetor chamado listaProdutos com 10 posições para TProduto.
O programa deve apresentar um menu com as opções:
- 1. Cadastrar produto
- 2. Listar produtos
O programa de ter no mínimo duas subrotinas coesas uma para realizar o cadastro de produtos que irá preencher o vetor listaProdutos e outra subrotina para listar os produtos cadastrados no vetor.

# Livro:
 [Algoritmo Logica para Programacao de Computadores Edicao 24º](https://github.com/andrrff/CC/files/6094571/algoritmo_.Logica.para.programacao.de.computadores.edicao24.pdf.pdf)

# Build
`gcc main.c lib.c && ./a`

# Como usar

Se tiver alguma dúvida de como usar o code, ele funciona como uma sequência de cadastro de dados com no máximo 10 produtos suportados. 
Nele tem a opção de `cadastrar`, `listar`, `sair`:
- Cadastrar: Colocar os dados requeridos(nome, codbarra, custo e preco);
- Listar: Ver os produtos colocados no momento; 
- Sair: Finalizar o programa;

# Professor: [Emmanuel Silva Xavier](https://github.com/emmanuelXavier)
