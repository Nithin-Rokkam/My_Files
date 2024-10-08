import java.math.BigDecimal;
import java.math.RoundingMode;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

public class FindPath {

    public static void main(String[] args) {
        Map<String, Double> parm = new HashMap<>();
        Scanner scanner = new Scanner(System.in);

        // Getting number of participants
        System.out.println("Enter the number of participants:");
        int numberOfParticipants = scanner.nextInt();
        scanner.nextLine(); // Consume the newline

        // Getting details from the user
        for (int i = 0; i < numberOfParticipants; i++) {
            System.out.println("Enter the name of participant " + (i + 1) + ":");
            String name = scanner.nextLine();

            System.out.println("Enter the balance of " + name + " (negative for amount to pay, positive for amount to receive):");
            Double balance = scanner.nextDouble();
            scanner.nextLine(); // Consume the newline

            parm.put(name, balance);
        }

        // Passing values to findPath Method
        List<String> transactions = findPath(parm);

        // Output the transactions
        for (String transaction : transactions) {
            System.out.println(transaction);
        }
        
        scanner.close();
    }

    public static List<String> findPath(Map<String, Double> details) {
        List<String> printBill = new ArrayList<>();

        while (true) {
            Double maxValue = Collections.max(details.values());
            Double minValue = Collections.min(details.values());

            if (maxValue.equals(minValue)) {
                break; // No more transactions needed
            }

            String maxKey = getKeyFromValue(details, maxValue);
            String minKey = getKeyFromValue(details, minValue);
            Double result = round(maxValue + minValue, 1);

            if (result >= 0.0) {
                printBill.add(minKey + " needs to pay " + maxKey + ": " + round(Math.abs(minValue), 2));
                details.put(maxKey, result);
                details.put(minKey, 0.0);
            } else {
                printBill.add(minKey + " needs to pay " + maxKey + ": " + round(Math.abs(maxValue), 2));
                details.put(maxKey, 0.0);
                details.put(minKey, result);
            }

            // Remove entries with zero balance to optimize the process
            details.values().removeIf(value -> value.equals(0.0));
        }

        return printBill;
    }

    public static String getKeyFromValue(Map<String, Double> hm, Double value) {
        for (Map.Entry<String, Double> entry : hm.entrySet()) {
            if (entry.getValue().equals(value)) {
                return entry.getKey();
            }
        }
        return null;
    }

    public static double round(double value, int places) {
        if (places < 0) throw new IllegalArgumentException();

        BigDecimal bd = new BigDecimal(Double.toString(value));
        bd = bd.setScale(places, RoundingMode.HALF_UP);
        return bd.doubleValue();
    }
}
