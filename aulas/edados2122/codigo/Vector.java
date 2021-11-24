// -----------------------------------------------------------
// Estruturas de Dados 2021/2022 (CC1007) - DCC/FCUP
// http://www.dcc.fc.up.pt/~pribeiro/aulas/edados2122/
// -----------------------------------------------------------
// Implementa o TAD Vector
// Ultima alteracao: 10/03/2018
// -----------------------------------------------------------

public class Vector {
   // Atributos
   private double x, y;

   // Construtor
   Vector(double x0, double y0) {
      x = x0;
      y = y0;
   }

   //Conversao de um vector para String
   @Override 
   public String toString() {
      return "(" + x + "," + y + ")";
   }
   
   public Vector add(Vector v) {
      return new Vector(x + v.x, y + v.y);
   }

   public Vector sub(Vector v) {
      return new Vector(x - v.x, y - v.y);
   }

   public double magnitude() {
      return Math.sqrt(x*x + y*y);
   }

   public Vector scale(double c) {
      return new Vector(x*c,y*c);
   } 
}
