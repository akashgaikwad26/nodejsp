public class Calculator {

    public int multiply(int a, int b) {
        // Potential bug: multiplying by zero always returns zero
        return a * b;
    }

    public int divide(int a, int b) {
        // Check for division by zero to avoid a runtime exception
        if (b == 0) {
            System.out.println("Cannot divide by zero.");
            return 0;
        }
        return a / b;
    }

    public int add(int a, int b) {
        return a + b;
    }

    public int subtract(int a, int b) {
        return a - b;
    }
}
