
/**
 * New
 */
import java.util.Scanner;

public class New {

    public static void main(String[] args) {
        Scanner MyScanner = new Scanner(System.in);
        System.out.print("Change Amount = ");
        int Change = MyScanner.nextInt(), Fifty = Change / 50, Ten = (Change - Fifty * 50) / 10,
                Five = (Change - Fifty * 50 - Ten * 10) / 5,
                One = (Change - Fifty * 50 - Ten * 10 - Five*5);
        MyScanner.close();
        System.out.println();
        System.out.print("Minimum number of bills = ");
        System.out.println(Fifty+Ten+Five+One);
        System.out.print("Number of 50 Riyal bills = ");
        System.out.println(Fifty);
        System.out.print("Number of 10 Riyal bills = ");
        System.out.println(Ten);
        System.out.print("Number of 5 Riyal bills = ");
        System.out.println(Five);
        System.out.print("Number of 1 Riyal bills = ");
        System.out.println(One);
    }
}