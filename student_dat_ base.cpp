#include <stdio.h>
int main() {
    int n, m;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter the number of subjects: ");
    scanf("%d", &m);
	 int marks[n][m];


    for (int i = 0; i < n; i++) {
        printf("Enter marks for student %d:\n", i + 1);
        for (int j = 0; j < m; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
        
    }

    
    int minMarks[m];
    for (int j = 0; j < m; j++) {
        minMarks[j] = marks[0][j];
        for (int i = 1; i < n; i++) {
            if (marks[i][j] < minMarks[j]) {
                minMarks[j] = marks[i][j];
            }
        }
    }

    
    printf("\nMinimum marks in each subject:\n");
    for (int j = 0; j < m; j++) {
        printf("Subject %d: %d\n", j + 1, minMarks[j]);
    }

      return 0;
}
