class Plane{
    brand = "Boeing";
    model = "747";
    color = "white";
    price = 277000000;
    civil = true;
    cong = function(text){
        this.con = text;
    }
}

let plane = new Plane();
plane.cong("Congratulation");
console.log(plane.con);