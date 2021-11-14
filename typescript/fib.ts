function getFib(number: number) {
  let fibArray: number[] = [];
  fibArray[0] = 0;
  fibArray[1] = 1;

  let i: number = 2;
  while (i <= number) {
    fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
    i++;
  }

  return fibArray[number];
}

console.info(getFib(Number(process.argv[2])));
