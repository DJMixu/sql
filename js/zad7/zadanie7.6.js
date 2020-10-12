//autor: Michał Majczek
var a=parseInt(prompt("Podaj rok"));
if(a%4==0 && a%100!=0 || a%400==0){
    document.write("Przestepny")
}else{
    document.write("Nieprzestepny")
}