//autor: Michał Majczek
var a=parseInt(prompt("Podaj a"));
var b=parseInt(prompt("Podaj b"));
if(a%2==0){
    if(b%2==0){
        if(a==b){
            document.write("liczby są równe")
        }else{
        if(a>b){
            document.write(a)
        }else{
            document.write(b)
        }
        }
    }else{
        document.write("b jest nieparzyste")
    }
}else if(b%2==0){
    document.write("A jest nieparzyste")
}else{
    document.write("obie są nie parzyste")
}
