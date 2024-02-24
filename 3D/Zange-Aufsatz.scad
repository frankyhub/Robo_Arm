translate(v = [0, 0, 0]) 
linear_extrude(height = 4  )
import ("Zange-Aufsatz.svg");


translate([60,20,-3])
color("red",alpha)
cylinder(3,2.5,2.5,$fn=60);

translate([60,32,-3])
color("green",alpha)
cylinder(3,2.5,2.5,$fn=60);

translate([40,44,-3])
color("blue",alpha)
cylinder(3,2.5,2.5,$fn=60);

translate([40,7.8,-3])
color("grey",alpha)
cylinder(3,2.5,2.5,$fn=60);