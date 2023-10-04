import java.time.LocalDate;

public class Student {
    private int id;
    private String name;
    private int batchId;

    public Student(int id, String name, int batchId) {
        this.id = id;
        this.name = name;
        this.batchId = batchId;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getBatchId() {
        return batchId;
    }

    public void setBatchId(int batchId) {
        this.batchId = batchId;
    }
}

public class Batch {
    private int id;
    private String programTitle;
    private LocalDate startDate;
    private LocalDate endDate;

    public Batch(int id, String programTitle, LocalDate startDate, LocalDate endDate) {
        this.id = id;
        this.programTitle = programTitle;
        this.startDate = startDate;
        this.endDate = endDate;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getProgramTitle() {
        return programTitle;
    }

    public void setProgramTitle(String programTitle) {
        this.programTitle = programTitle;
    }

    public LocalDate getStartDate() {
        return startDate;
    }

    public void setStartDate(LocalDate startDate) {
        this.startDate = startDate;
    }

    public LocalDate getEndDate() {
        return endDate;
    }

    public void setEndDate(LocalDate endDate) {
        this.endDate = endDate;
    }
}

public class App {
    public static void main(String[] args) {
        // Create an array to store three students
        Student[] students = new Student[3];

        // Create three student objects and add them to the array
        students[0] = new Student(1, "John", 101);
        students[1] = new Student(2, "Alice", 102);
        students[2] = new Student(3, "Bob", 101);

        // Display information about the students
        for (Student student : students) {
            System.out.println("Student ID: " + student.getId());
            System.out.println("Student Name: " + student.getName());
            System.out.println("Batch ID: " + student.getBatchId());
            System.out.println();
        }
    }
}

