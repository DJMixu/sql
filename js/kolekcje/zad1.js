let strojKosmonaty = new Set();
strojKosmonaty.add('Kask');
strojKosmonaty.add('Okulary');
strojKosmonaty.add('Skafander');
strojKosmonaty.add('Papier toaletywy');
strojKosmonaty.delete('Okulary');
if(strojKosmonaty.has('Okulary')==true)
{
    console.log("Ma okulary"); 
}else
{
    console.log("Nie ma okulary"); 
}

if(strojKosmonaty.has('Kask')==true)
{
    console.log("Ma kask"); 
}
else
{
    console.log("Nie ma kask"); 
}
console.log("Rozmiar kolekcji to "+strojKosmonaty.size);