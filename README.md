# Sistema de Cadastro de Cidades - Super Trunfo Países

Este projeto em C implementa um sistema de cadastro de cidades para um jogo no estilo **Super Trunfo** com o tema **Países**. Cada cidade cadastrada contém atributos básicos como código, nome, população, área, PIB e número de pontos turísticos. Além disso, o sistema calcula e exibe propriedades adicionais, como a **Densidade Populacional** e o **PIB per Capita** com base nos dados fornecidos.

## Funcionalidades

- **Cadastro de Cidades**: O usuário pode inserir dados para uma cidade, como:
  - Código da cidade (por exemplo, A01, B02).
  - Nome da cidade.
  - População (número de habitantes).
  - Área da cidade em km².
  - PIB da cidade em bilhões de unidades monetárias.
  - Número de pontos turísticos.

- **Propriedades Calculadas**:
  - **Densidade Populacional**: Calculada dividindo a população pela área da cidade (habitantes por km²).
  - **PIB per Capita**: Calculado dividindo o PIB total pela população, fornecendo uma estimativa de produção econômica por habitante.

## Exemplo de Entrada e Saída

### Entrada
O sistema solicita ao usuário que insira os seguintes dados para cada cidade:

Digite o código da cidade (ex: A01): A01 Digite o nome da cidade: São Paulo Digite a população da cidade: 12345678 Digite a área da cidade em km²: 1521.11 Digite o PIB da cidade em bilhões: 700.5 Digite o número de pontos turísticos: 5

### Saída
Após inserir os dados, o sistema exibirá as informações cadastradas, incluindo as propriedades calculadas:

Dados da cidade cadastrada: Código: A01 Nome: São Paulo População: 12345678 Área: 1521.11 km² PIB: 700.50 bilhões Número de pontos turísticos: 5 Densidade Populacional: 8112.99 habitantes/km² PIB per Capita: 56715.05 unidades monetárias

## Como Compilar e Executar

Para compilar o programa, utilize um compilador C como o GCC:


gcc -o cadastro_cidades cadastro_cidades.c
Após a compilação, execute o programa:


./cadastro_cidades

Requisitos
Um compilador de C (GCC, Clang, etc.)
Conhecimentos básicos de entrada e saída em C.
Explicação das Novas Funcionalidades
Densidade Populacional: Calculada dividindo a população pela área, exibida em habitantes por quilômetro quadrado.
PIB per Capita: Calculado dividindo o PIB total (em unidades monetárias) pela população, fornecendo uma estimativa da riqueza gerada por habitante.
Melhorias Futuras
Suporte para cadastrar múltiplas cidades.
Implementação de um banco de dados simples para armazenar as cidades.
Expansão para outros atributos relevantes, como IDH, localização geográfica, etc.
Autor
Desenvolvido por Gabriel.