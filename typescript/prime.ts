function getPrimeNumbers() {
  let number = 2;
  let arrayPrime: number[] = [];
  while (number < 200) {
    let is_prime = true;
    for (let i = 2; i < number; i++) {
      if (number % i == 0) {
        is_prime = false;
      }
      if (i == number - 1 && is_prime == true) {
        arrayPrime.push(number);
      }
    }
    number++;
  }

  return arrayPrime;
}

console.info(getPrimeNumbers());
