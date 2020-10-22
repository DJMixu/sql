let suma = 0;
let liczby = [12, 3, 5, 10, 5, 5];
for(let i=0; i<liczby.length; i++){
    suma = suma + liczby[i];
}
console.log(suma);
for(let liczba of liczby){
    console.log(liczba);
}