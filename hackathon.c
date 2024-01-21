//Code for a Hackathon Event 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Structure Creation
struct  structure_Hackathon
{
    char *day;
    char *event_id;
    char *number_of_events;
    char *number_of_participants_per_event;
    char *event_wise_revenue;
    char *day_wise_revenue;
}HKT1,HKT2,HKT3,HKT4,HKT5;

void disp(char *name ,char *event_id , char *day,char *number_of_events)
{
    float t;
    int choice;
    do {
        printf("\n===== Hackathon Management System =====\n");
        printf("1. About Event, Day and charges\n");
        printf("2. Register Participant\n");
        printf("3. Display Participants\n");
        printf("4. Generate Day-wise Report\n");
        printf("5. Generate Event-wise Report\n");
        printf("6. Generate Consolidated Report\n");
        printf("7.Total Revenue Generated\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1 :
            printf("Day1\n");
            printf("HKT8854,HKT8855,HKT8856\n");
            printf("$5.00\n");
    
            printf("Day2\n");
            printf("HKT8857,HKT8858,HKT8859\n");
            printf("$20.00\n");

            printf("Day3\n");
            printf("HKT8860,HKT8861,HKT8862\n");
            printf("$50.00\n");
    
            printf("Day4\n");
            printf("HKT8863,HKT8864,HKT8865\n");
            printf("$80.00\n");

            printf("Day5\n");
            printf("HKT8866,HKT8867,HKT8868\n");
            printf("$55.00\n");            
            break;

            case 2:
                // Register participant
                
                printf("Whats the time: ");
                scanf("%f",&t);
                if(t>=9 && t<= 10)
                {
                printf("\nEnter participant details:\n");
                 char *name;
                 char *day;
                 char *event_id;
                printf("Name: ");
                scanf("%s", name);
                printf("Event Id: ");
                scanf("%s", event_id);
                printf("Day of Registration: ");
                scanf("%s", day);
                printf("Participant registered successfully!\n");
                }
                 else
                {
                    printf("You can't register");
                }
                break;

            case 3:
                // Manage events
                printf("\nEvent Management Menu:\n");
                // Display events and their details
                for (int i = 0; i <1; i++)
                {
                    printf("%s %s (Day %s)\n",name,event_id,day);
                }
                break;

      case 4:
    //Information Storing for each day
    HKT1.day = "Day1";
    HKT1.event_id = "HKT8854,HKT8855,HKT8856";
    HKT1.number_of_events = "3";  
    HKT1.number_of_participants_per_event = "5";
    HKT1.event_wise_revenue = "$5.00";
    HKT1.day_wise_revenue = "$15.00";

    HKT2.day = "Day2";
    HKT2.event_id = "HKT8857,HKT8858,HKT8859";
    HKT2.number_of_events = "3";
    HKT2.number_of_participants_per_event = "5";
    HKT2.event_wise_revenue = "$20.00";
    HKT2.day_wise_revenue = "$60.00";

    HKT3.day = "Day3";
    HKT3.event_id = "HKT8860,HKT8861,HKT8862";
    HKT3.number_of_events = "3";
    HKT3.number_of_participants_per_event = "5";
    HKT3.event_wise_revenue = "$50.00";
    HKT3.day_wise_revenue = "$150.00";

    HKT4.day = "Day4";
    HKT4.event_id = "HKT8863,HKT8864,HKT8865";
    HKT4.number_of_events = "3";
    HKT4.number_of_participants_per_event = "5";
    HKT4.event_wise_revenue = "$80.00";
    HKT4.day_wise_revenue = "$240.00";

    HKT5.day = "Day5";
    HKT5.event_id = "HKT8866,HKT8867,HKT8868";
    HKT5.number_of_events = "3";
    HKT5.number_of_participants_per_event = "5";
    HKT5.event_wise_revenue = "$55.00";
    HKT5.day_wise_revenue = "$165.00";
   
//Printing of day wise report

    printf("\nDay Wise Report\n");
    printf("---------------\n");

       printf("\nDay = %s\n",HKT1.day);
       printf("Event Id = %s\n",HKT1.event_id);
       printf("Number of events = %s\n",HKT1.number_of_events);
       printf("Number of participants = %s\n",HKT1.number_of_participants_per_event);
       printf("Event wise revenue = %s\n",HKT1.event_wise_revenue);
       printf("Day wise revenue = %s\n",HKT1.day_wise_revenue);

       printf("\nDay = %s\n",HKT2.day);
       printf("Event Id = %s\n",HKT2.event_id);
       printf("Number of events = %s\n",HKT2.number_of_events);
       printf("Number of participants = %s\n",HKT2.number_of_participants_per_event);
       printf("Event wise revenue = %s\n",HKT2.event_wise_revenue);
       printf("Day wise revenue = %s\n",HKT2.day_wise_revenue);

       printf("\nDay = %s\n",HKT3.day);
       printf("Event Id = %s\n",HKT3.event_id);
       printf("Number of events = %s\n",HKT3 .number_of_events);
       printf("Number of participants = %s\n",HKT3.number_of_participants_per_event);
       printf("Event wise revenue = %s\n",HKT3.event_wise_revenue);
       printf("Day wise revenue = %s\n",HKT3.day_wise_revenue);

       printf("\nDay = %s\n",HKT4.day);
       printf("Event Id = %s\n",HKT4.event_id);
       printf("Number of events = %s\n",HKT4.number_of_events);
       printf("Number of participants = %s\n",HKT4.number_of_participants_per_event);
       printf("Event wise revenue = %s\n",HKT4.event_wise_revenue);
       printf("Day wise revenue = %s\n",HKT4.day_wise_revenue);

       printf("\nDay = %s\n",HKT5.day);
       printf("Event Id = %s\n",HKT5.event_id);
       printf("Number of events = %s\n",HKT5.number_of_events);
       printf("Number of participants = %s\n",HKT5.number_of_participants_per_event);
       printf("Event wise revenue = %s\n",HKT5.event_wise_revenue);
       printf("Day wise revenue = %s\n",HKT5.day_wise_revenue);
       break;

    case 5:
        
    //Information Storing for each day
    HKT1.day = "Day1";
    HKT1.event_id = "HKT8854,HKT8855,HKT8856";
    HKT1.number_of_events = "3";
    HKT1.number_of_participants_per_event = "5";
    HKT1.event_wise_revenue = "$5.00";
    HKT1.day_wise_revenue = "$15.00";

    HKT2.day = "Day2";
    HKT2.event_id = "HKT8857,HKT8858,HKT8859";
    HKT2.number_of_events = "3";
    HKT2.number_of_participants_per_event = "5";
    HKT2.event_wise_revenue = "$20.00";
    HKT2.day_wise_revenue = "$60.00";

    HKT3.day = "Day3";
    HKT3.event_id = "HKT8860,HKT8861,HKT8862";
    HKT3.number_of_events = "3";
    HKT3.number_of_participants_per_event = "5";
    HKT3.event_wise_revenue = "$50.00";
    HKT3.day_wise_revenue = "$150.00";

    HKT4.day = "Day4";
    HKT4.event_id = "HKT8863,HKT8864,HKT8865";
    HKT4.number_of_events = "3";
    HKT4.number_of_participants_per_event = "5";
    HKT4.event_wise_revenue = "$80.00";
    HKT4.day_wise_revenue = "$240.00";

    HKT5.day = "Day5";
    HKT5.event_id = "HKT8866,HKT8867,HKT8868";
    HKT5.number_of_events = "3";
    HKT5.number_of_participants_per_event = "5";
    HKT5.event_wise_revenue = "$55.00";
    HKT5.day_wise_revenue = "$165.00";

    //Printing of event wise report
    
    printf("\nEvent wise report\n");
    printf("---------------\n");

    printf("\nFor Day 1\n");
    printf("\nEvent Id = %s\n",HKT1.event_id);
    printf("Number of events = %s\n",HKT1.number_of_events);
    printf("Number of participants = %s\n",HKT1.number_of_participants_per_event);
    printf("Event wise revenue = %s\n",HKT1.event_wise_revenue);

    printf("\nFor Day 2\n");
    printf("\nEvent Id = %s\n",HKT2.event_id);
    printf("Number of events = %s\n",HKT2.number_of_events);
    printf("Number of participants = %s\n",HKT2.number_of_participants_per_event);
    printf("Event wise revenue = %s\n",HKT2.event_wise_revenue);
   
    printf("\nFor Day 3\n");
    printf("\nEvent Id = %s\n",HKT3.event_id);
    printf("Number of events = %s\n",HKT3.number_of_events);
    printf("Number of participants = %s\n",HKT3.number_of_participants_per_event);
    printf("Event wise revenue = %s\n",HKT3.event_wise_revenue);
    
    printf("\nFor Day 4\n");
    printf("\nEvent Id = %s\n",HKT4.event_id);
    printf("Number of events = %s\n",HKT4.number_of_events);
    printf("Number of participants = %s\n",HKT4.number_of_participants_per_event);
    printf("Event wise revenue = %s\n",HKT4.event_wise_revenue);
   
    printf("\nFor Day 5\n");
    printf("\nEvent Id = %s\n",HKT5.event_id);
    printf("Number of events = %s\n",HKT5.number_of_events);
    printf("Number of participants = %s\n",HKT5.number_of_participants_per_event);
    printf("Event wise revenue = %s\n",HKT5.event_wise_revenue);
    
    break;

    case 6:
    
    HKT1.day = "Day1";
    HKT1.event_id = "HKT8854,HKT8855,HKT8856";
    HKT1.number_of_events = "3";
    HKT1.number_of_participants_per_event = "5";
    HKT1.event_wise_revenue = "$5.00";
    HKT1.day_wise_revenue = "$15.00";

    HKT2.day = "Day2";
    HKT2.event_id = "HKT8857,HKT8858,HKT8859";
    HKT2.number_of_events = "3";
    HKT2.number_of_participants_per_event = "5";
    HKT2.event_wise_revenue = "$20.00";
    HKT2.day_wise_revenue = "$60.00";

    HKT3.day = "Day3";
    HKT3.event_id = "HKT8860,HKT8861,HKT8862";
    HKT3.number_of_events = "3";
    HKT3.number_of_participants_per_event = "5";
    HKT3.event_wise_revenue = "$50.00";
    HKT3.day_wise_revenue = "$150.00";

    HKT4.day = "Day4";
    HKT4.event_id = "HKT8863,HKT8864,HKT8865";
    HKT4.number_of_events = "3";
    HKT4.number_of_participants_per_event = "5";
    HKT4.event_wise_revenue = "$80.00";
    HKT4.day_wise_revenue = "$240.00";

    HKT5.day = "Day5";
    HKT5.event_id = "HKT8866,HKT8867,HKT8868";
    HKT5.number_of_events = "3";
    HKT5.number_of_participants_per_event = "5";
    HKT5.event_wise_revenue = "$55.00";
    HKT5.day_wise_revenue = "$165.00";
    

    //Printing of consolidated report

    printf("\nConsolidated report\n");
    printf("---------------\n");

    printf("\nFor Day 1\n");
    printf("Event wise revenue = %s\n",HKT1.event_wise_revenue);
    printf("Day wise revenue = %s\n",HKT1.day_wise_revenue);
    
    printf("\nFor Day 2\n");
    printf("Event wise revenue = %s\n",HKT2.event_wise_revenue);
    printf("Day wise revenue = %s\n",HKT2.day_wise_revenue);

    printf("\nFor Day 3\n");
    printf("Event wise revenue = %s\n",HKT3.event_wise_revenue);
    printf("Day wise revenue = %s\n",HKT3.day_wise_revenue);

    printf("\nFor Day 4\n");
    printf("Event wise revenue = %s\n",HKT4.event_wise_revenue);
    printf("Day wise revenue = %s\n",HKT4.day_wise_revenue);
    
    printf("\nFor Day 5\n");
    printf("Event wise revenue = %s\n",HKT5.event_wise_revenue);
    printf("Day wise revenue = %s\n",HKT5.day_wise_revenue);

    break;

    case 7:
    
    printf("\nTotal Revenue for all Days: $630.00\n");

    break;

            case 0:
                printf("Exiting the program. Thank you!\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
                break;
        }

    } while (choice != 0);
}
int main()
{
    char *name;
    char *day;
    char *event_id;
    char *number_of_events;
     
    printf("\nHACKTHON EVENT\n");
    printf("---------------\n");

    disp(name ,event_id , day, number_of_events);

    return 0;
}
