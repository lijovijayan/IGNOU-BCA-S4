abstract class BankAccount {

  private String accountNumber;
  private double balance;

  public BankAccount(String accountNumber) {
    this.accountNumber = accountNumber;
    this.balance = 0.0;
  }

  public String getAccountNumber() {
    return this.accountNumber;
  }

  public double getBalance() {
    return this.balance;
  }

  public void deposit(double amount) {
    this.balance += amount;
  }

  public void withdraw(double amount) {
    if (amount > this.balance) {
      System.out.println("Insufficient funds!");
    } else {
      this.balance -= amount;
    }
  }

  public abstract void endOfMonth();
}

class SavingsAccount extends BankAccount {

  private double interestRate;

  public SavingsAccount(String accountNumber, double interestRate) {
    super(accountNumber);
    this.interestRate = interestRate;
  }

  public void endOfMonth() {
    double interest = this.getBalance() * (this.interestRate / 12);
    this.deposit(interest);
  }
}

class CheckingAccount extends BankAccount {

  private double overdraftLimit;

  public CheckingAccount(String accountNumber, double overdraftLimit) {
    super(accountNumber);
    this.overdraftLimit = overdraftLimit;
  }

  public void endOfMonth() {
    if (this.getBalance() < 0) {
      double fees = this.getBalance() * (-1) * 0.1;
      this.withdraw(fees);
    }
  }
}

public class Main {
  public static void main(String[] args) {
      SavingsAccount savingsAccount = new SavingsAccount("123456", 0.05);
      CheckingAccount checkingAccount = new CheckingAccount("789012", -500);

      savingsAccount.deposit(1000);
      savingsAccount.withdraw(500);
      System.out.println("Savings Account Balance: " + savingsAccount.getBalance());
      savingsAccount.endOfMonth();
      System.out.println("Savings Account Balance after end of month: " + savingsAccount.getBalance());

      checkingAccount.deposit(1000);
      checkingAccount.withdraw(1500);
      System.out.println("Checking Account Balance: " + checkingAccount.getBalance());
      checkingAccount.endOfMonth();
      System.out.println("Checking Account Balance after end of month: " + checkingAccount.getBalance());
  }
}


// Output:

// Savings Account Balance: 500.0
// Savings Account Balance after end of month: 525.0
// Checking Account Balance: -500.0
// Checking Account Balance after end of month: -550.0