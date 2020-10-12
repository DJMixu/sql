//autor: Michał Majczek
var a=parseInt(prompt("Podaj a"));
if(a>9 && a<100){
    if(a%2==0){
        document.write("parzysta 2 cyfrowa")
    }else{
        document.write("nieparzysta 2 cyfrowa")
    }
}else{
    document.write("nie 2 cyfrowa")
}
