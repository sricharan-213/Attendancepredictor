#include <stdio.h>
#include <math.h>

int main() {
    int total, planned, attended, missed;
    float current, predicted;
    int choice;

    printf("=========================================\n");
    printf("           ATTENDANCE PREDICTOR          \n");
    printf("=========================================\n");

    printf("Enter Total Classes Held: ");
    scanf("%d", &total);

    printf("Enter Current Attendance (%%): ");
    scanf("%f", &current);

    if (total < 0 || current < 0 || current > 100) {
        printf("\n[ERROR] Invalid input! Please enter valid numbers.\n");
        return 1;
    }

    printf("\nWhat will you do?\n");
    printf("1) Attend more classes\n");
    printf("2) Bunk more classes\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2) {
        printf("\n[ERROR] Invalid choice! Please enter 1 or 2.\n");
        return 1;
    }

    printf("How many classes do you plan to ");
    if (choice == 1) {
        printf("ATTEND: ");
    } else {
        printf("BUNK: ");
    }
    scanf("%d", &planned);

    if (planned < 0) {
        printf("\n[ERROR] Invalid number of classes.\n");
        return 1;
    }

    attended = (int)((current / 100.0) * total);

    if (choice == 1) {
        attended += planned;
    }
    // Whether attend or bunk, total classes will increase
    total += planned;

    if (attended > total) {
        printf("\n[ERROR] Logical error: Attended classes cannot exceed total classes.\n");
        return 1;
    }

    missed = total - attended;
    predicted = (attended / (float)total) * 100.0;

    printf("\n=========================================\n");
    printf("           PREDICTION RESULT              \n");
    printf("=========================================\n");
    printf("Total Classes Held After Plan : %d\n", total);
    printf("Classes Attended               : %d\n", attended);
    printf("Classes Missed                 : %d\n", missed);
    printf("Predicted Attendance %%         : %.2f%%\n", predicted);
    printf("=========================================\n");

    // Planner for 75% target
    int max_bunks = (int)floor((attended / 0.75) - total);
    if (max_bunks < 0) max_bunks = 0;

    int min_attend = 0;
    if (predicted < 75.0) {
        min_attend = (int)ceil((0.75 * total - attended) / 0.25);
        if (min_attend < 0) min_attend = 0;
    }

    printf("\n75%% ATTENDANCE PLANNER:\n");
    printf("-------------------------\n");
    printf("You can safely bunk up to : %d classes to maintain >= 75%%\n", max_bunks);

    if (predicted < 75.0) {
        printf("You need to attend at least: %d more classes to reach 75%%.\n", min_attend);
    } else {
        printf("Great! Your attendance is already above 75%%.\n");
    }

    printf("=========================================\n");
    printf(" Stay consistent and plan smart! \n");
    printf("=========================================\n");

    return 0;
}
