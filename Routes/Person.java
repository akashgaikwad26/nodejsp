public class Person {
    private String name;
    private int age;

    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public void displayInfo() {
        System.out.println("Name: " + name + ", Age: " + age);
    }

    // Getter method with no setter to simulate a warning
    public int getAge() {
        return age;
    }

    public String getName() {
        return name;
    }
}
