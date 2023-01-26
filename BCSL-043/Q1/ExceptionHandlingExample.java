package Q1;
public class ExceptionHandlingExample {

  public static void main(String[] args) {
    try {
      int a = 5 / 0;
    } catch (ArithmeticException e) {
      System.out.println("Division by zero exception caught");
    } finally {
      System.out.println("This block will always execute");
    }
  }
}
// Output:
// Division by zero exception caught
// This block will always execute
