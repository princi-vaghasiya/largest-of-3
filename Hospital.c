#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int userType, choice, age, roomType = 0;
    char username[30], password[30], name[50], gender[10], city[30], phone[15], sickness[50], doctor[50];

    while (1) {
        printf("\nAre you:\n");
        printf("1. Patient\n");
        printf("2. Admin Staff\n");
        printf("Enter choice: ");
        scanf("%d", &userType);

        if (userType == 1) {
            printf("\nEnter Username: ");
            scanf("%s", username);
            printf("Enter Password: ");
            scanf("%s", password);
            printf("Login Successful!\n");

            while (1) {
                printf("\nPatient Dashboard\n");
                printf("1. View Personal Details (Available After Booking)\n");
                printf("2. Book Appointment\n");
                printf("3. View Visit History\n");
                printf("4. View Room Status\n");
                printf("5. View Bill\n");
                printf("6. Logout\n");
                printf("Enter choice: ");
                scanf("%d", &choice);

                if (choice == 1) {
                    printf("No appointment booked yet.\n");

                } else if (choice == 2) {
                    printf("\nEnter Name: ");
                    scanf("%s", name);
                    printf("Enter Age: ");
                    scanf("%d", &age);
                    printf("Enter Gender: ");
                    scanf("%s", gender);
                    printf("Enter City: ");
                    scanf("%s", city);
                    printf("Enter Phone No: ");
                    scanf("%s", phone);
                    printf("Enter Sickness: ");
                    scanf("%s", sickness);
                    printf("Enter Doctor's Name: ");
                    scanf("%s", doctor);
                    printf("Appointment booked successfully!\n");



                    FILE *fp = fopen("appointments.txt", "a");
                    fprintf(fp, "Name: %s\n", name);
                    fprintf(fp, "Age: %d\n", age);
                    fprintf(fp, "Gender: %s\n", gender);
                    fprintf(fp, "City: %s\n", city);
                    fprintf(fp, "Phone: %s\n", phone);
                    fprintf(fp, "Sickness: %s\n", sickness);
                    fprintf(fp, "Doctor: %s\n", doctor);
                    fprintf(fp, "-------------------------\n");
                    fclose(fp);

                     printf("Appointment booked successfully and saved to file!\n");

                } else if (choice == 3) {
                    printf("No history.\n");

                } else if (choice == 4) {
                    printf("\nSelect Room Type:\n");
                    printf("1. AC - Rs 5000\n");
                    printf("2. Non AC - Rs 3000\n");
                    printf("3. Personal Room - Rs 2500\n");
                    printf("4. General Ward - Rs 1000\n");
                    printf("5. ICU - Rs 10000\n");
                    printf("Enter choice: ");
                    scanf("%d", &roomType);
                    printf("Room booked successfully!\n");

                } else if (choice == 5) {
                    int prices[] = {0, 5000, 3000, 2500, 1000, 10000};
                    if (roomType == 0) {
                        printf("No room selected yet.\n");
                    } else {
                        printf("Total Bill: Rs %d\n", prices[roomType]);
                    }
                } else if (choice == 6) {
                    printf("Logging out\n");
                    break;
                } else {
                    printf("Invalid choice\n");
                }
            }

        } else if (userType == 2) {
            printf("\nEnter Admin Username: ");
            scanf("%s", username);
            printf("Enter Admin Password: ");
            scanf("%s", password);
            printf("Admin Login Successful!\n");

            while (1) {
                printf("\nAdmin Dashboard\n");
                printf("1. Manage Patient Records (Add/Delete)\n");
                printf("2. See Appointment Schedule\n");
                printf("3. Manage Doctors\n");
                printf("4. Room Management\n");
                printf("5. Financial Reports\n");
                printf("6. Logout\n");
                printf("Enter choice: ");
                scanf("%d", &choice);

                if (choice == 1) {
                    printf("Managing patient records (Add/Delete)\n");
                } else if (choice == 2) {
                    printf("\nAppointment Schedule:\n");
                    printf("10:00 AM - Mr. Raj\n");
                    printf("12:00 PM - Miss Sonakshi\n");
                    printf("11:00 PM - Miss sofia\n");
                    printf("9:00 AM - Mr.krishit\n");
                    printf("1:00 AM - Mr.rohanpreet\n");

                } else if (choice == 3) {
                    printf("Managing doctor schedules and details...\n");
                    printf("Dr.divyanshi sojitra   (dentist :- 10:00 AM to 6:00 PM)\n");
                    printf("Dr.ibrahim khan        (General :-10:00 AM to 6:00 PM)\n");
                    printf("Dr.rakshit mehta       (heart sergen:- ALL DAY)\n");
                    printf("Dr.Ragini shah         (orthopedic:- 9:00 AM to 8:00 PM)\n");
                    printf("Dr.krishn sharma       (MBBS,MD    :- 7:00 AM to 5:00 PM)\n");

                    
                } else if (choice == 4) {
                    printf("Managing room availability and allocation\n");
                    printf("AC ROOM Empty-4 , FULL-10 \n");
                    printf("NON AC ROOM Empty-34 , FULL-54 \n");
                    printf("private Empty 10 , FULL-15 \n");
                    printf("ICU Empty 2, FULL-3 \n");

                } else if (choice == 5) {
                    printf("Generating billing reports\n");

                } else if (choice == 6) {
                    printf("Logging out\n");
                    break;
                } else {
                    printf("Invalid choice!\n");
                }
            }
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}