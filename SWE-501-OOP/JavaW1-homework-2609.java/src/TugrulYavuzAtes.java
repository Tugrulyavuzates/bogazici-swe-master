import java.util.Arrays;
import java.util.Scanner;

public class TugrulYavuzAtes {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the first number:");
        int a = scanner.nextInt();
        System.out.println("You've entered: " + a);
        System.out.println("Please enter the second number: ");
        int b = scanner.nextInt();
        System.out.println("You've entered: " + b);
        System.out.println("Please enter the third number: ");
        int c = scanner.nextInt();
        System.out.println("You've entered: " + c);

        int[] numbers = {a, b, c};
/*
        Arrays.sort(numbers);
        System.out.print("Here is your sorted array in ascending order : "+numbers[0]+", "+ numbers[1]+", "+numbers[2] );
*/
        Arrays.sort(numbers);
        System.out.println("Here is the sorted array :"  + " " + Arrays.toString(numbers));
        /*  just for practice
        Arrays.sort(numbers);
        sout("Here is the sorted array :"  + " " + Arrays.toString(numbers));
         */
    }
}