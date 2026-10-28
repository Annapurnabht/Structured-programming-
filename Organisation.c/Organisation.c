#include <stdio.h>

struct Organisation {
    int orgID;
    int totalEmployees;
};

struct Employee {
    int id;
    int deptCode;
    float salary;
};

int main() {
    struct Organisation org;
    struct Employee emp[100];
    int choice, i, searchID;
    int count = 0;
    int found;

    do {
        printf("\n===== ORGANISATION MANAGEMENT =====\n");
        printf("1. Enter Organisation Details\n");
        printf("2. Display Organisation Details\n");
        printf("3. Add Employee\n");
        printf("4. Display All Employees\n");
        printf("5. Search Employee by ID\n");
        printf("6. Display total employees\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Organisation ID: ");
                scanf("%d", &org.orgID);
                printf("Enter Total Employee Capacity: ");
                scanf("%d", &org.totalEmployees);
                printf("Organisation details saved!\n");
                break;

            case 2:
                printf("\nOrganisation ID: %d\n", org.orgID);
                printf("Total Capacity: %d\n", org.totalEmployees);
                break;

            case 3:
                if (count < 100) {
                    printf("Enter Employee ID: ");
                    scanf("%d", &emp[count].id);
                    printf("Enter Dept Code (e.g. 101): ");
                    scanf("%d", &emp[count].deptCode);
                    printf("Enter Employee Salary: ");
                    scanf("%f", &emp[count].salary);
                    count++;
                    printf("Employee added successfully!\n");
                } else {
                    printf("Limit reached!\n");
                }
                break;

            case 4:
                if (count == 0) {
                    printf("No employees added yet.\n");
                } else {
                    printf("\n--- Employee Records ---\n");
                    for (i = 0; i < count; i++) {
                        printf("ID: %d | Dept Code: %d | Salary: %.2f\n", emp[i].id, emp[i].deptCode, emp[i].salary);
                    }
                }
                break;

            case 5:
                if (count == 0) {
                    printf("No records available.\n");
                } else {
                    printf("Enter Employee ID to search: ");
                    scanf("%d", &searchID);
                    found = 0;
                    for (i = 0; i < count; i++) {
                        if (emp[i].id == searchID) {
                            printf("Found -> ID: %d, Dept Code: %d, Salary: %.2f\n", emp[i].id, emp[i].deptCode, emp[i].salary);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Employee ID %d not found.\n", searchID);
                    }
                }
                break;

            case 6:
                printf("Total added employees: %d\n", count);
                break;

            case 0:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid option! Try again.\n");
        }
    } while (choice != 0);

    return 0;
}