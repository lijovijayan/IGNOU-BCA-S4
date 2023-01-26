package Q1;
public class Book {

  private String title;
  private String author;
  private int pages;
  private String ISBN;
  private String publisher;
  private double price;

  // Default constructor
  public Book() {}

  // Parameterized constructor
  public Book(
    String title,
    String author,
    int pages,
    String ISBN,
    String publisher,
    double price
  ) {
    this.title = title;
    this.author = author;
    this.pages = pages;
    this.ISBN = ISBN;
    this.publisher = publisher;
    this.price = price;
  }

  // Getter and setter methods
  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public String getAuthor() {
    return author;
  }

  public void setAuthor(String author) {
    this.author = author;
  }

  public int getPages() {
    return pages;
  }

  public void setPages(int pages) {
    this.pages = pages;
  }

  public String getISBN() {
    return ISBN;
  }

  public void setISBN(String ISBN) {
    this.ISBN = ISBN;
  }

  public String getPublisher() {
    return publisher;
  }

  public void setPublisher(String publisher) {
    this.publisher = publisher;
  }

  public double getPrice() {
    return price;
  }

  public void setPrice(double price) {
    this.price = price;
  }

  public static void main(String[] args) {
    // Creating an object using the parameterized constructor
    Book book = new Book(
      "The Great Gatsby",
      "F. Scott Fitzgerald",
      180,
      "1234567890",
      "Penguin Books",
      12.99
    );

    // Printing the values of the attributes
    System.out.println("Title: " + book.getTitle());
    System.out.println("Author: " + book.getAuthor());
    System.out.println("Pages: " + book.getPages());
    System.out.println("ISBN: " + book.getISBN());
    System.out.println("Publisher: " + book.getPublisher());
    System.out.println("Price: " + book.getPrice());
  }
}


// Title: The Great Gatsby
// Author: F. Scott Fitzgerald
// Pages: 180
// ISBN: 1234567890
// Publisher: Penguin Books
// Price: 12.99
