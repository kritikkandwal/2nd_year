import java.util.Scanner;

class CGPACalculator {
    // Attributes to store grades
    private double[] grades;
    private int numSubjects;

    // Default Constructor
    public CGPACalculator() {
        numSubjects = 5;  // Default number of subjects
        grades = new double[numSubjects];
    }

    // Parameterized Constructor
    public CGPACalculator(int numSubjects) {
        this.numSubjects = numSubjects;
        grades = new double[numSubjects];
    }

    // Copy Constructor
    public CGPACalculator(CGPACalculator other) {
        this.numSubjects = other.numSubjects;
        this.grades = other.grades.clone(); // Copying grades array
    }

    // Method to input grades
    public void inputGrades() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the grades for " + numSubjects + " subjects:");
        for (int i = 0; i < numSubjects; i++) {
            System.out.print("Subject " + (i + 1) + ": ");
            grades[i] = scanner.nextDouble();
        }
    }

    // Method to calculate CGPA
    public double calculateCGPA() {
        double sum = 0;
        for (double grade : grades) {
            sum += grade;
        }
        return sum / numSubjects;
    }

    // Method to display CGPA
    public void displayCGPA() {
        double cgpa = calculateCGPA();
        System.out.println("Your CGPA is: " + cgpa);
    }

    public static void main(String[] args) {
        // Using default constructor
        CGPACalculator cgpa1 = new CGPACalculator();
        cgpa1.inputGrades();
        cgpa1.displayCGPA();

        // Using parameterized constructor
        CGPACalculator cgpa2 = new CGPACalculator(3);  // 3 subjects
        cgpa2.inputGrades();
        cgpa2.displayCGPA();

        // Using copy constructor
        CGPACalculator cgpa3 = new CGPACalculator(cgpa2);
        cgpa3.displayCGPA();
    }
}

