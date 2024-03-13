# USO DE FOR LOOPS "DESNECESSÁRIOS" EM JAVASCRIPT - PARADIGMA FUNCIONAL X PARADIGMA IMPERATIVO
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