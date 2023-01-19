public class MatrixMultiplication {

  // Function to multiply two matrices
  public static int[][] multiply(int[][] A, int[][] B) {
    int rowsA = A.length;
    int colsA = A[0].length;
    int rowsB = B.length;
    int colsB = B[0].length;
    int[][] result = new int[rowsA][colsB];

    // Check if the matrices can be multiplied
    if (colsA != rowsB) {
      System.out.println(
        "Error: The number of columns in matrix A must be equal to the number of rows in matrix B."
      );
      return result;
    }

    // Perform matrix multiplication
    for (int i = 0; i < rowsA; i++) {
      for (int j = 0; j < colsB; j++) {
        for (int k = 0; k < colsA; k++) {
          result[i][j] += A[i][k] * B[k][j];
        }
      }
    }

    return result;
  }

  // Function to print a matrix
  public static void printMatrix(int[][] matrix, String name) {
    System.out.println("Matrix " + name);
    for (int i = 0; i < matrix.length; i++) {
      for (int j = 0; j < matrix[0].length; j++) {
        System.out.print(matrix[i][j] + " ");
      }
      System.out.println();
    }
  }

  public static void main(String[] args) {
    int[][] A = { { 1, 2, 3 }, { 4, 5, 6 } };
    int[][] B = { { 7, 8 }, { 9, 10 }, { 11, 12 } };
    int[][] result = multiply(A, B);

    printMatrix(A, "A");
    printMatrix(B, "B");
    printMatrix(result, "Product");
  }
}
