#include<stdio.h>
int main(){
    int bookID, due date, returnDate, daysOverdue, fineRate = 0, fine amount;
    
    // Taking inputs
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    
    printf("Enter Due Date(as an integer in format YYYYMMDD): ");
    Scanf("%d", &due date);
    
    printf("Enter Return Date(as an integer in format YYYYMMDD): ");
    scanf("%d", & returndate);
    
    //Calculating the number of overdue days
    daysOverdue = returnDate - duedate;
    
    //Determining the fine rate using if-else statement 
    if (daysOverdue <= 7) {
      fineRate = 20;
    } else if (daysOverdue <= 14) {
      fineRate = 50;
    } else if (daysOverdue > 14) {
       fineRate = 100;
    }
    
    //calculating the total fine amount 
    fineAmount = fineRate * daysOverdue;
    
    //Displaying the result 
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh %d per day\n", fineRate);
    printf("Total Fine Amount: Ksh %d\n", fineAmount);
    
       return 0;
}       