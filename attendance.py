import math

def attendance_predictor():
    print("=" * 41)
    print("           ATTENDANCE PREDICTOR          ")
    print("=" * 41)

    total = int(input("Enter Total Classes Held: "))
    current = float(input("Enter Current Attendance (%): "))

    if total < 0 or current < 0 or current > 100:
        print("\n[ERROR] Invalid input! Please enter valid numbers.")
        return

    print("\nWhat will you do?")
    print("1) Attend more classes")
    print("2) Bunk more classes")

    choice = int(input("Enter choice (1 or 2): "))

    if choice not in (1, 2):
        print("\n[ERROR] Invalid choice! Please enter 1 or 2.")
        return

    if choice == 1:
        planned = int(input("How many classes do you plan to ATTEND: "))
    else:
        planned = int(input("How many classes do you plan to BUNK: "))

    if planned < 0:
        print("\n[ERROR] Invalid number of classes.")
        return

    attended = int((current / 100) * total)

    if choice == 1:
        attended += planned

    total += planned

    if attended > total:
        print("\n[ERROR] Logical error: Attended classes cannot exceed total classes.")
        return

    missed = total - attended
    predicted = (attended / total) * 100

    print("\n" + "=" * 41)
    print("           PREDICTION RESULT             ")
    print("=" * 41)
    print(f"Total Classes Held After Plan : {total}")
    print(f"Classes Attended               : {attended}")
    print(f"Classes Missed                 : {missed}")
    print(f"Predicted Attendance %         : {predicted:.2f}%")
    print("=" * 41)

    max_bunks = math.floor((attended / 0.75) - total)
    if max_bunks < 0:
        max_bunks = 0

    min_attend = 0
    if predicted < 75:
        min_attend = math.ceil((0.75 * total - attended) / 0.25)
        if min_attend < 0:
            min_attend = 0

    print("\n75% ATTENDANCE PLANNER:")
    print("-" * 25)
    print(f"You can safely bunk up to : {max_bunks} classes to maintain >= 75%")

    if predicted < 75:
        print(f"You need to attend at least: {min_attend} more classes to reach 75%.")
    else:
        print("Great! Your attendance is already above 75%.")

    print("=" * 41)
    print(" Stay consistent and plan smart! ")
    print("=" * 41)


attendance_predictor()
