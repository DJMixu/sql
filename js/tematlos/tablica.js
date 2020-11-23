let a = parseInt(prompt("Podaj A"));
let b = parseInt(prompt("Podaj A"));
let n = parseInt(prompt("Podaj A"));

for(let i; i<n;i++)
{
   let r = Math.random()*(a-b+1)+b;
    console.log("Wylosowano "+ r +"<br>")
}