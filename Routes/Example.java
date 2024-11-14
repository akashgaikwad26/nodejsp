public class Example {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
        int result = add(5, 10);
        System.out.println("Result: " + result);
    }

    // Method with unused parameter to trigger a warning
    public static int add(int a, int b) {
        int unusedVar = 0; // Unused variable
        return a + b;
    }
}
