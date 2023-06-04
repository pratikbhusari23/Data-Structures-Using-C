import java.util.*;
class Main {
    public static int busRemaining(int[][] busStations) {
        int remainingBuses = 1; // At least one bus will remain initially

        // Check each bus with all other buses for overlapping routes
        for (int i = 0; i < busStations.length; i++) {
            boolean overlapping = false;
            for (int j = 0; j < busStations.length; j++) {
                if (i != j) {
                    // Check if the buses have overlapping routes
                    if (busStations[i][0] <= busStations[j][1] && busStations[i][1] >= busStations[j][0]) {
                        overlapping = true;
                        break; // No need to check further if overlap found
                    }
                }
            }
            if (!overlapping) {
                remainingBuses++;
            }
        }

        return remainingBuses;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        // Input for busStation
        int busStationRows = in.nextInt();
        int busStationCols = in.nextInt();

        int[][] busStations = new int[busStationRows][busStationCols];
        for (int i = 0; i < busStationRows; i++) {
            for (int j = 0; j < busStationCols; j++) {
                busStations[i][j] = in.nextInt();
            }
        }

        int result = busRemaining(busStations);
        System.out.println(result);

        in.close();
    }
}
