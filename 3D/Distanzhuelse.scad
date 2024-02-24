   color( "blue", 1.0 ) {
  translate(v = [17.8, -12, 1.5]) {
$fn=60;
      
      
difference() {
    
cylinder(h = 6, d = 13); //V1=7mm V2=6mm
  translate(v = [0, 0, -2]) { 
          cylinder(h = 10, d = 3);
  }
}
}
}
