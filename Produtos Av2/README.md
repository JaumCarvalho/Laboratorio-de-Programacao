# PARADIGMA FUNCIONAL X PARADIGMA IMPERATIVO EM JAVASCRIPT

JavaScript, sendo uma linguagem versátil e poderosa, permite aos desenvolvedores adotarem diferentes paradigmas de programação para atender às necessidades específicas de seus projetos. Dois desses paradigmas amplamente utilizados são o paradigma funcional e o paradigma imperativo. Cada um desses paradigmas tem suas próprias características distintas, abordagens de resolução de problemas e estilos de codificação.

O paradigma funcional em JavaScript baseia-se no conceito de funções como cidadãs de primeira classe, o que significa que as funções são tratadas como qualquer outro tipo de dado. Nesse paradigma, o código é escrito de forma a evitar efeitos colaterais e a enfatizar a imutabilidade dos dados sempre que possível. Em JavaScript, isso é alcançado principalmente por meio de funções de ordem superior, como `map`, `reduce`, `filter` e outras, que permitem operações em coleções de dados de forma declarativa e expressiva.

Por outro lado, o paradigma imperativo em JavaScript segue uma abordagem mais procedural, na qual o código é escrito como uma sequência de instruções que modificam o estado do programa conforme são executadas. Nesse paradigma, o foco principal está na manipulação direta das variáveis e no controle do fluxo de execução por meio de estruturas como loops e condicionais.

As funções `map`, `reduce`, `filter` são representações claras do paradigma funcional em JavaScript. Elas permitem que você processe e transforme dados de forma enxuta e concisa, sem a necessidade de criar loops explícitos ou modificar variáveis diretamente. Em vez disso, você define uma função que descreve a transformação desejada e a aplica aos elementos de uma coleção de dados, produzindo um resultado esperado.

Em contraste, ao adotar o paradigma imperativo, o código pode se tornar mais verboso e propenso a erros, especialmente em situações complexas. Isso ocorre porque o desenvolvedor precisa gerenciar explicitamente o estado do programa e acompanhar as mudanças nas variáveis ao longo do tempo.

Em resumo, tanto o paradigma funcional quanto o paradigma imperativo têm seu lugar em JavaScript, e a escolha entre eles muitas vezes depende das necessidades específicas do projeto, da preferência do desenvolvedor e do estilo de codificação preferido. Ao compreender e aplicar eficazmente esses paradigmas, os desenvolvedores podem escrever código mais limpo, modular e robusto em JavaScript.

## Comparação com as funções filter, reduce e map

## Função filter()
A função filter() é usada para criar um novo array com todos os elementos que passam em um teste implementado pela função fornecida.

### Exemplo funcional:
```
const array = [1, 2, 3, 4, 5];
const evenNumbers = array.filter(num => num % 2 === 0);
console.log(evenNumbers); // Output: [2, 4]
```

### Exemplo imperativo:
```
function filter(array, callback) {
  const filteredArray = [];
  for (let i = 0; i < array.length; i++) {
    if (callback(array[i])) {
      filteredArray.push(array[i]);
    }
  }
  return filteredArray;
}

const array = [1, 2, 3, 4, 5];
const evenNumbers = filter(array, num => num % 2 === 0);
console.log(evenNumbers); // Output: [2, 4]
```
<hr>

## Função reduce()
A função reduce() é utilizada para reduzir os elementos de um array a um único valor, aplicando uma função acumuladora que processa cada elemento sequencialmente.

### Exemplo funcional:
```
const array = [1, 2, 3, 4];
const sum = array.reduce((acc, curr) => acc + curr, 0);
console.log(sum); // Output: 1
```
### Exemplo imperativo:
```
function reduce(array, callback, initialValue) {
  let accumulator = initialValue !== undefined ? initialValue : array[0];
  for (let i = initialValue !== undefined ? 0 : 1; i < array.length; i++) {
    accumulator = callback(accumulator, array[i]);
  }
  return accumulator;
}

const array = [1, 2, 3, 4];
const sum = reduce(array, (acc, curr) => acc + curr, 0);
console.log(sum); // Output: 10
```
<hr>

## Função map()
A função map() é usada para iterar sobre cada elemento de um array e aplicar uma função a cada elemento, retornando um novo array com os resultados das chamadas dessa função.

### Exemplo funcional:
```
const array = [1, 2, 3];
const doubled = array.map(num => num * 2);
console.log(doubled); // Output: [2, 4, 6]
```
### Exemplo imperativo:
```
function map(array, callback) {
  const newArray = [];
  for (let i = 0; i < array.length; i++) {
    newArray.push(callback(array[i]));
  }
  return newArray;
}

const array = [1, 2, 3];
const doubled = map(array, num => num * 2);
console.log(doubled); // Output: [2, 4, 6]
```
