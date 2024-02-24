//Greifarmplatte V4 mit Servo und Meßbalken
//funkt

include <lib/std.scad>


//Greifarmplatte
rotate([180, 0, 0]) {
    color( "black", 1.0 ) {


    linear_extrude(height = 3, center = true, convexity = 10)
import ("GreifarmplatteV4c.svg");
}
}
/*
translate(v = [22, -32, 4]) {
difference(){
     color( "red", 1.0 ) {
cuboid(
    [32,17,5], rounding=1,
    edges=[
    TOP+FRONT,
    TOP+BACK,
    TOP+LEFT,
    TOP+RIGHT,
    FRONT+RIGHT,
    FRONT+LEFT,
    BACK+LEFT,
    BACK+RIGHT
    ],
    $fn=60
);
    
     }   

 cube(size = [23,12,20], center = true);
    translate(v = [13.8, 0, -10]) {
 $fn=60;
 cylinder(20,0.9);
}  
    translate(v = [-13.8, 0, -10]) {
 $fn=60;
 cylinder(20,0.9);
}
}
}
*/  
/*

use <sg90.scad>;
use <fastener_1.scad>;
translate(v = [22, -32, -9.5]) { 
rotate([180, 180, 0]) {
sg90();
   
translate(v = [3, -4.7, 0 ]) {    
rotate([0, 180, -120]) {    
translate([5.5,0,-29.5])  sg90_f1();
   }
   }
}
}

translate(v = [16, -50, -10]) { 
cube(size = [1,50,50]);
}
*/





