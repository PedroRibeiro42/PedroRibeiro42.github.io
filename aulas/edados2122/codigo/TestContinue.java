// -----------------------------------------------------------
// Estruturas de Dados 2021/2022 (CC1007) - DCC/FCUP
// http://www.dcc.fc.up.pt/~pribeiro/aulas/edados2122/
// -----------------------------------------------------------
// Instrucoes de Ciclo: continue
// Ultima alteracao: 04/02/2019
// -----------------------------------------------------------

class TestContinue {
   public static void main(String[] args) {
      for (int i=1; i<=4; i++) {
         System.out.println("[antes] i = " + i);
         if (i > 2) continue;
         // Linha seguinte so sera executada quando i <= 2
         System.out.println("[depois] i = " + i); 
      }
   }
}
