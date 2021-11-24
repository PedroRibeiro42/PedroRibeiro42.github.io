// -----------------------------------------------------------
// Estruturas de Dados 2021/2022 (CC1007) - DCC/FCUP
// http://www.dcc.fc.up.pt/~pribeiro/aulas/edados2122/
// -----------------------------------------------------------
// Instrucoes Condicionais: if else
// Ultima alteracao: 04/02/2019
// -----------------------------------------------------------

public class TestIfElse {
   public static void main(String[] args) {
      int testscore = 76;
      char grade;

      if (testscore >= 90) {
         grade = 'A';
      } else if (testscore >= 80) {
         grade = 'B';
      } else if (testscore >= 70) {
         grade = 'C';
      } else if (testscore >= 60) {
         grade = 'D';
      } else {
         grade = 'F';
      }
    
      System.out.println("Grade = " + grade);
   }
}
