# Estruturas de dados em linguagem C
Um computador é uma máquina que realiza a manipulação e o processamento de dados de uma determinada entrada, respondendo a essas operação com uma determinada saída. Tal processamento baseia-se principalmente em um código limpo e bem estruturado, mas também em como tais dados são disposto e organizados, ou seja, como estão **alocados na memória**.<br>
O presente repositório aborda às principais formas de alocação dinâmica de memória, sintetizando conceitos e apresentando as principais ferramentas da linguagem C# a ser utilizada pelo desenvolvedor. Ainda no repositório, são demonstrados os códigos de **listas**, **filas**, **pilhas**, **árvores binárias**, **busca linear**, **busca binária** e entre outras estruturas.

## Conceitos básicos 
### Alocação de memória dinâmica x estática
Inicialmente, antes de se adentrar na construção de um código, é necessário compreender quais tipos de operações serão realizadas com os dados, bem como a natureza das mesmas. 
A alocação de memória em um computador pode ser dividida em **estática** e **dinâmica**, diferenciando-se principalmente em quais "tempos" ocorrem cada uma.
- **Alocação de memória estática:** ocorre em tempo de compilação. No momento que uma variável ou estrutura é declarada, é necessário informar o seu tipo e tamanho. Realizado esse tipo de alocação, quando o programa está em execução, os espaços de memória necessários para o processamento das variáveis e estruturas estáticas são reservados e utilizados até o fim da execução do programa;
- **Alocação de memória dinâmica:** ocorre em tempo de execução. As variáveis e estruturas apenas são declaradas, mas não têm seus tamanhos definidos. Assim, nenhum espaço de memória será reservado assim que o programa seja executado, desde que não tenha sido requisitado por operações do próprio programa, após ser executado;<br>
**Exemplo:** arrays (vetores e matrizes) são estruturas alocadas de forma estática na memória. Após terem sidos declaradas e o programa compilado, tornam-se imutáveis em toda a execução do programa.

### Alocação dinâmica de memória em linguagem C
A alocação de memória em linguagem C baseia-se na estruturação e manipulação de **structs**, **ponteiros** e **funções** que operam e trabalham com os mesmos. Mas afinal, o que é cada um desses conceitos?
- As **structs**, também chamadas de registros, definem tipos de dados que agrupam variáveis sob um mesmo tipo de dado. Organizam em sua estrutura, demais estruturas e variáveis de tipos de dados iguais ou diferentes;
- Os **ponteiros** são variáveis que armazenam o endereço de memória, de uma respectiva estrutura ou variável. Também chamados de apontadores, podem ser compreendidos com "algo" que aponta para alguém na memória;
- As **funções para alocação de memória** são 4 no total, pertencentes a biblioteca stdlib.h;

## Funções para alocação dinâmica de memória
Como anteriormente mencionado, a biblioteca stdlib.h dispõe de 4 funções para alocação de memória, sendo elas: **malloc()**, **calloc()**, **realloc()** e **free()**. A finalide para uso de cada uma:
- **malloc():** é a função responsável por alocar um espaço na memória. Como parâmetro da função, deve se informar qual o tamanho do espaço a ser alocado, e ela irá retornar um endereço que deve ser armazenado em uma variável do tipo ponteiro;
- **calloc():** realiza a mesm operação que a função malloc(), no entanto não irá incializar o espaço alocado;
- **realloc():** é a função responsável por realocar um espaçamento de memória anteriormente alocado. Como parâmetro ela recebe o ponteiro retornado pela função malloc() e o novo tamanho que a estrutura deve ter;
- **free():** é a função responsável por liberar a área que anteriormente foi alocada e utilizada. Como parâmetro, a funçã recebe o ponteiro da área que não se deseja mais utilizar;

## Principais estruturas de dados 
As estruturas de dados fornecem a apresentação dos dados, que devem ser de fácil compreensão para que o desenvolvedor, bem como o usuário, possam realizar uma implementação eficiente das operações necessárias no sistema. As estruturas de dados fornecem uma maneira fácil de organizar, recuperar, processar e armazenar os dados do programa.

Entre as principais estruturas, destacam-se as **listas**, **filas**, **pilas** e **árvores binárias**. Cada uma possui a sua especificidade, no  entanto, a construção de todas se baseiam em todos os tópicos abordados até o momento.
- **Listas:** é uma estrutura de dado na qual cada elemento, exceto o primeiro e o último, possuem ligação com seu antecessor e sucessor, concectados por ponteiros. Uma das propriedades das listas é seu acesso rândomico, bem como a remoção e inserção de um elemento em qualquer posição da mesma;
- **Filas:** é uma estrutura de dados similar às listas, no entanto com uma versatilidade bem menor. Nas filas, a inserção só é permitida no final, após cada elemento já disposto anteriormente. Já a remoção, por sua vez, ocorre apenas no início da fila;
- **Pilhas:** é uma estrutura de dados similar as anteriores, porém com uma versatilidade ainda menor. A inserção de elementos, bem como a sua remoção, ocorrem apenas em uma das extremidades;
- **Árvores-binárias:** são estruturas de dados utilizadas para representar estruturas hierárquicas. Possuem folhas, nós e nodos, todos interliados por ponteiros, assim como as estruturas anteriores;