public class Student {
    private String name;
    private int age;

    public Student(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Method that may trigger a bug if `name` is null
    public void printDetails() {
        if (name != null && !name.isEmpty()) {
            System.out.println("Student Name: " + name + ", Age: " + age);
        } else {
            System.out.println("Student name is not available.");
        }
    }
}
