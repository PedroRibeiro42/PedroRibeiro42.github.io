// -----------------------------------------------------------
// Estruturas de Dados 2021/2022 (CC1007) - DCC/FCUP
// http://www.dcc.fc.up.pt/~pribeiro/aulas/edados2122/
// -----------------------------------------------------------
// Implementacao do TAD Deque usando lista duplamente ligada
// Ultima alteracao: 06/04/2018
// -----------------------------------------------------------

public class LinkedListDeque<T> implements MyDeque<T> {
   private DoublyLinkedList<T> list;

   LinkedListDeque() { list = new DoublyLinkedList<T>();}
   
   public void addLast(T v)  { list.addLast(v); }
   public void addFirst(T v) { list.addFirst(v); }
   public T removeFirst() {
      T ans = list.getFirst();
      list.removeFirst();
      return ans;
   }
   public T removeLast() {
      T ans = list.getLast();
      list.removeLast();
      return ans;
   }
   public T first() { return list.getFirst();}
   public T last() { return list.getLast();}
   public int size() {return list.size();}
   public boolean isEmpty() {return list.isEmpty();}

   public String toString() {return list.toString();}
}
