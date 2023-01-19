public class MultithreadingExample {
    public static void main(String[] args) {
      Thread thread1 = new Thread(new Task1());
      thread1.start();
  
      Thread thread2 = new Thread(new Task2());
      thread2.start();
    }
  
    static class Task1 implements Runnable {
      @Override
      public void run() {
        for (int i = 1; i <= 5; i++) {
          System.out.println("Thread 1: " + i);
          try {
            Thread.sleep(1000);
          } catch (InterruptedException e) {
            e.printStackTrace();
          }
        }
      }
    }
  
    static class Task2 implements Runnable {
      @Override
      public void run() {
        for (int i = 1; i <= 5; i++) {
          System.out.println("Thread 2: " + i);
          try {
            Thread.sleep(1000);
          } catch (InterruptedException e) {
            e.printStackTrace();
          }
        }
      }
    }
  }
  

// Output:

// Thread 1: 1
// Thread 2: 1
// Thread 1: 2
// Thread 2: 2
// Thread 1: 3
// Thread 2: 3
// Thread 1: 4
// Thread 2: 4
// Thread 1: 5
// Thread 2: 5
