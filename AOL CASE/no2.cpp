#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Structure to store data for better organization
typedef struct {
    char Location[51];
    char City[51];
    char Price[51];
    char Rooms[31];
    char Bathrooms[31];
    char CarParks[31];
    char Type[41];
    char Furnish[31];
} Property;

Property data[3950]; // Array to store up to 4000 rows of data
long long int i = 0;


// Validating the input for integer
long long int CheckMenu() {
    char input[100]; // Buffer to store input
    char *endptr;    // Pointer for strtol validation
    long long int number;

    // Read input as a string
    if (fgets(input, sizeof(input), stdin) != NULL) {
        // Remove trailing newline, if present
        input[strcspn(input, "\n")] = '\0';

        // Convert to integer using strtol
        number = strtoll(input, &endptr, 10);

        // Check if the entire input was a valid number
        if (*endptr == '\0' && number >= 1) {
            return number; // Valid positive integer
        }
    }

    return -1; // Invalid input
}

int checkInteger(long long int rows) { // Validating the input for integer
	if (rows >= 1) {
		return rows; // If it's integer, return the input
	} else {
		while (getchar() != '\n');
		return -1; // If it's not, return -1 to mark that it's not an integer
	}
}

void Read(){
	FILE *f = fopen("file(in).csv", "r");
    if (!f) {
        printf("Error: Unable to open file.\n");
        return;
    }

    // Read data from the file
    while (fscanf(f, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n",
                               data[i].Location, data[i].City, data[i].Price,
                               data[i].Rooms, data[i].Bathrooms, data[i].CarParks,
                               data[i].Type, data[i].Furnish) == 8) {
        i++;
    }
    fclose(f);
}


void Display() {
    long long int rows;
    do {
        printf("Number of rows: ");
        scanf("%lld", &rows);
        if (rows < 1) {
            printf("Please input a positive integer.\n");
        }
    } while (checkInteger(rows) < 1);

    
    // Adjust rows to the actual number of lines read if fewer than requested
    if (rows > i) {
        rows = i - 1;
    }

    // Display data
    printf("%-30s %-20s %-10s %-10s %-10s %-10s %-10s %-10s\n",
           "Location", "City", "Price", "Rooms", "Bathrooms", "CarParks", "Type", "Furnish");
    for (int j = 1; j <= rows; j++) {
        printf("%-30s %-20s %-10s %-10s %-10s %-10s %-10s %-10s\n",
               data[j].Location, data[j].City, data[j].Price,
               data[j].Rooms, data[j].Bathrooms, data[j].CarParks,
               data[j].Type, data[j].Furnish);
    }
    printf("-------------------------------------------------------------------------------------------------------------\n\n");
}


void Search(){
    char column[1000];
    do{
        printf("Choose column: ");
        scanf("%s", column); getchar();
        if (strcmp(column, "Location") != 0 && strcmp(column, "City") != 0 && strcmp(column, "Price") != 0 && strcmp(column, "Rooms") != 0 && strcmp(column, "Bathrooms") != 0 && strcmp(column, "Carpark") != 0 && strcmp(column, "Type") != 0 && strcmp(column, "Furnish") != 0) {
            printf("Invalid column name!\nPlease Input [Location/Rooms/Bathrooms/City/Price/CarParks/Type/Furnish]\n");
    	}
    }
    while(strcmp(column, "Location") != 0 && strcmp(column, "City") != 0 && strcmp(column, "Price") != 0 && strcmp(column, "Rooms") != 0 && strcmp(column, "Bathrooms") != 0 && strcmp(column, "Carpark") != 0 && strcmp(column, "Type") != 0 && strcmp(column, "Furnish") != 0);
    // Input validation for column name
    
    char target[1000];
    printf("What data do you want to find? ");
    scanf("%s", target); getchar();
	
    
    int flag = 0, index[1000], num = 0;
    if(strcmp(column, "Location") == 0){
	    for(int j = 0; j < i; j++){
		    if(strcmp(target, data[j].Location) == 0){
		    	index[num] = j;
		    	num++;
		    	flag = 1;
			}
		}   	
	} else if(strcmp(column, "City") == 0){
	    for(int j = 0; j < i; j++){
		    if(strcmp(target, data[j].City) == 0){
		    	index[num] = j;
		    	num++;
		    	flag = 1;
			}
		}   	
	} else if(strcmp(column, "Price") == 0){
	    for(int j = 0; j < i; j++){
		    if(strcmp(target, data[j].Price) == 0){
		    	index[num] = j;
		    	num++;
		    	flag = 1;
			}
		}   	
	} else if(strcmp(column, "Rooms") == 0){
	    for(int j = 0; j < i; j++){
		    if(strcmp(target, data[j].Rooms) == 0){
		    	index[num] = j;
		    	num++;
		    	flag = 1;
			}
		}   	
	} else if(strcmp(column, "Bathrooms") == 0){
	    for(int j = 0; j < i; j++){
		    if(strcmp(target, data[j].Bathrooms) == 0){
		    	index[num] = j;
		    	num++;
		    	flag = 1;
			}
		}   	
	} else if(strcmp(column, "CarParks") == 0){
	    for(int j = 0; j < i; j++){
		    if(strcmp(target, data[j].CarParks) == 0){
		    	index[num] = j;
		    	num++;
		    	flag = 1;
			}
		}   	
	} else if(strcmp(column, "Type") == 0){
	    for(int j = 0; j < i; j++){
		    if(strcmp(target, data[j].Type) == 0){
		    	index[num] = j;
		    	num++;
		    	flag = 1;
			}
		}   	
	} else if(strcmp(column, "Furnish") == 0){
	    for(int j = 0; j < i; j++){
		    if(strcmp(target, data[j].Furnish) == 0){
		    	index[num] = j;
		    	num++;
		    	flag = 1;
			}
		}   	
	}
	
	if(!flag){
		printf("Data not found!\n");
	} else{
    	printf("%-30s %-20s %-10s %-10s %-10s %-10s %-10s %-10s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "CarParks", "Type", "Furnish");
	    for (int j = 0; j < num; j++) {
	        printf("%-30s %-20s %-10s %-10s %-10s %-10s %-10s %-10s\n",
	               data[index[j]].Location, data[index[j]].City, data[index[j]].Price,
	               data[index[j]].Rooms, data[index[j]].Bathrooms, data[index[j]].CarParks,
	               data[index[j]].Type, data[index[j]].Furnish);
	    }
	    printf("-------------------------------------------------------------------------------------------------------------\n\n");		
	}
	
}




void Sort(){
	char column[1000];
    do{
        printf("Choose column: ");
        scanf("%s", column); 
        if (strcmp(column, "Location") != 0 && strcmp(column, "City") != 0 && strcmp(column, "Price") != 0 && strcmp(column, "Rooms") != 0 && strcmp(column, "Bathrooms") != 0 && strcmp(column, "Carpark") != 0 && strcmp(column, "Type") != 0 && strcmp(column, "Furnish") != 0) {
            printf("Invalid column name!\nPlease Input [Location/Rooms/Bathrooms/City/Price/CarParks/Type/Furnish]\n");
    	}
	}
    while(strcmp(column, "Location") != 0 && strcmp(column, "City") != 0 && strcmp(column, "Price") != 0 && strcmp(column, "Rooms") != 0 && strcmp(column, "Bathrooms") != 0 && strcmp(column, "Carpark") != 0 && strcmp(column, "Type") != 0 && strcmp(column, "Furnish") != 0);
    // Input validation for column name
    
    char target[1000];
    do{
    	printf("Sort ascending[asc] or descending[des]? ");
    	scanf("%s", target);
    	if(strcmp(target, "asc") != 0 && strcmp(target, "des") != 0){
    		printf("Please input asc/des\n");
		}
	}
	while(strcmp(target, "asc") != 0 && strcmp(target, "des"));
	// Input validation for ascending/descending
    
	
	


	// passing the sort parameter start with 1 to i (size of the rows)
	if (strcmp(target, "asc") == 0) { // Sort ascending
	    if (strcmp(column, "Location") == 0) {
	        for (int x = 1; x <= i - 1; x++) {
	            for (int y = 1; y <= i - x - 1; y++) {
	                if (strcmp(data[y].Location, data[y + 1].Location) > 0) {
	                    Property temp = data[y];
	                    data[y] = data[y + 1];
	                    data[y + 1] = temp;
	                }
	            }
	        }
	    } else if (strcmp(column, "City") == 0) {
	        for (int x = 1; x <= i - 1; x++) {
	            for (int y = 1; y <= i - x - 1; y++) {
	                if (strcmp(data[y].City, data[y + 1].City) > 0) {
	                    Property temp = data[y];
	                    data[y] = data[y + 1];
	                    data[y + 1] = temp;
	                }
	            }
	        }
	    } else if (strcmp(column, "Price") == 0) {
	        for (int x = 1; x <= i - 1; x++) {
	            for (int y = 1; y <= i - x - 1; y++) {
	            	long long int price1 = atoi(data[y].Price);
	            	long long int price2 = atoi(data[y + 1].Price);
	                if(price1 > price2) {
	                    Property temp = data[y];
	                    data[y] = data[y + 1];
	                    data[y + 1] = temp;
	                }
	            }
	        }
	    } else if (strcmp(column, "Rooms") == 0) {
	        for (int x = 1; x <= i - 1; x++) {
	            for (int y = 1; y <= i - x - 1; y++) {
	            	int room1 = atoi(data[y].Rooms);
	            	int room2 = atoi(data[y + 1].Rooms);
	                if (room1 > room2) {
	                    Property temp = data[y];
	                    data[y] = data[y + 1];
	                    data[y + 1] = temp;
	                }
	            }
	        }
	    } else if (strcmp(column, "Bathrooms") == 0) {
	        for (int x = 1; x <= i - 1; x++) {
	            for (int y = 1; y <= i - x - 1 ; y++) {
	            	int bath1 = atoi(data[y].Bathrooms);
	            	int bath2 = atoi(data[y + 1].Bathrooms);
	                if (bath1 > bath2) {
	                    Property temp = data[y];
	                    data[y] = data[y + 1];
	                    data[y + 1] = temp;
	                }
	            }
	        }
	    } else if (strcmp(column, "CarParks") == 0) {
	        for (int x = 1; x <= i - 1; x++) {
	            for (int y = 1; y <= i - x - 1; y++) {
	            	int car1 = atoi(data[y].CarParks);
	            	int car2 = atoi(data[y + 1].CarParks);
	                if (car1 > car2) {
	                    Property temp = data[y];
	                    data[y] = data[y + 1];
	                    data[y + 1] = temp;
	                }
	            }
	        }
	    } else if (strcmp(column, "Type") == 0) {
	        for (int x = 1; x <= i - 1; x++) {
	            for (int y = 1; y <= i - x - 1; y++) {
	                if (strcmp(data[y].Type, data[y + 1].Type) > 0) {
	                    Property temp = data[y];
	                    data[y] = data[y + 1];
	                    data[y + 1] = temp;
	                }
	            }
	        }
	    } else if (strcmp(column, "Furnish") == 0) {
	        for (int x = 1; x <= i - 1; x++) {
	            for (int y = 1; y <= i - x - 1; y++) {
	                if (strcmp(data[y].Furnish, data[y + 1].Furnish) > 0) {
	                    Property temp = data[y];
	                    data[y] = data[y + 1];
	                    data[y + 1] = temp;
	                }
	            }
	        }
	    }
	} else if (strcmp(target, "des") == 0) { // Sort descending
	    if (strcmp(column, "Location") == 0) {
	        for (int x = 1; x <= i - 1; x++) {
	            for (int y = 1; y <= i - x - 1; y++) {
	                if (strcmp(data[y].Location, data[y + 1].Location) < 0) {
	                    Property temp = data[y];
	                    data[y] = data[y + 1];
	                    data[y + 1] = temp;
	                }
	            }
	        }
	    } else if (strcmp(column, "City") == 0) {
	        for (int x = 1; x <= i - 1; x++) {
	            for (int y = 1; y <= i - x - 1; y++) {
	                if (strcmp(data[y].City, data[y + 1].City) < 0) {
	                    Property temp = data[y];
	                    data[y] = data[y + 1];
	                    data[y + 1] = temp;
	                }
	            }
	        }
	    } else if (strcmp(column, "Price") == 0) {
	        for (int x = 1; x <= i - 1; x++) {
	            for (int y = 1; y <= i - x - 1; y++) {
	            	long long int price1 = atoi(data[y].Price);
	            	long long int price2 = atoi(data[y + 1].Price);
	                if(price1 < price2) {
	                    Property temp = data[y];
	                    data[y] = data[y + 1];
	                    data[y + 1] = temp;
	                }
	            }
	        }
	    } else if (strcmp(column, "Rooms") == 0) {
	        for (int x = 1; x <= i - 1; x++) {
	            for (int y = 1; y <= i - x - 1; y++) {
	            	int room1 = atoi(data[y].Rooms);
	            	int room2 = atoi(data[y + 1].Rooms);
	                if (room1 < room2) {
	                    Property temp = data[y];
	                    data[y] = data[y + 1];
	                    data[y + 1] = temp;
	                }
	            }
	        }
	    } else if (strcmp(column, "Bathrooms") == 0) {
	        for (int x = 1; x <= i - 1; x++) {
	            for (int y = 1; y <= i - x - 1; y++) {
	            	int bath1 = atoi(data[y].Bathrooms);
	            	int bath2 = atoi(data[y + 1].Bathrooms);
	                if (bath1 < bath2) {
	                    Property temp = data[y];
	                    data[y] = data[y + 1];
	                    data[y + 1] = temp;
	                }
	            }
	        }
	    } else if (strcmp(column, "CarParks") == 0) {
	        for (int x = 1; x <= i - 1; x++) {
	            for (int y = 1; y <= i - x - 1; y++) {
	            	int car1 = atoi(data[y].CarParks);
	            	int car2 = atoi(data[y + 1].CarParks);
	                if (car1 < car2) {
	                    Property temp = data[y];
	                    data[y] = data[y + 1];
	                    data[y + 1] = temp;
	                }
	            }
	        }
	    } else if (strcmp(column, "Type") == 0) {
	        for (int x = 1; x <= i - 1; x++) {
	            for (int y = 1; y <= i - x - 1; y++) {
	                if (strcmp(data[y].Type, data[y + 1].Type) < 0) {
	                    Property temp = data[y];
	                    data[y] = data[y + 1];
	                    data[y + 1] = temp;
	                }
	            }
	        }
	    } else if (strcmp(column, "Furnish") == 0) {
	        for (int x = 1; x <= i - 1; x++) {
	            for (int y = 1; y <= i - x - 1; y++) {
	                if (strcmp(data[y].Furnish, data[y + 1].Furnish) < 0) {
	                    Property temp = data[y];
	                    data[y] = data[y + 1];
	                    data[y + 1] = temp;
	                }
	            }
	        }
	    }
	}


	
	printf("%-30s %-20s %-10s %-10s %-10s %-10s %-10s %-10s\n",
           "Location", "City", "Price", "Rooms", "Bathrooms", "CarParks", "Type", "Furnish");
		for (int j = 1; j <= 10; j++) {
	        printf("%-30s %-20s %-10s %-10s %-10s %-10s %-10s %-10s\n",
	               data[j].Location, data[j].City, data[j].Price,
	               data[j].Rooms, data[j].Bathrooms, data[j].CarParks,
	               data[j].Type, data[j].Furnish);
	    }
	
	    
    printf("-------------------------------------------------------------------------------------------------------------\n\n");
	
}


void Export(){
	char name[4000];
	printf("File name: ");
	scanf("%s", name);
	strcat(name, ".csv");
	
	FILE *dest = fopen(name, "w");
    if(!dest){
        printf("Error creating file.\n");
        return;
    }
    for(int j = 0; j < i; j++){
    	fprintf(dest, "%s,%s,%s,%s,%s,%s,%s,%s\n", data[j].Location, data[j].City, data[j].Price,
	               data[j].Rooms, data[j].Bathrooms, data[j].CarParks,
	               data[j].Type, data[j].Furnish);
	} // write every row from file.csv to new destination file
	fclose(dest);
	
	
	printf("Data successfully written to file %s!\n", name);
	printf("-------------------------------------------------------------------------------------------------------------\n\n");
}



int main() {
    int menu = 0;

    Read();
    do { // If the input is 5, it will end the system (loop)
        printf("What do you want to do?\n1. Display data\n2. Search Data\n3. Sort Data\n4. Export Data\n5. Exit\n");
        printf("Your choice: ");

        menu = (int)CheckMenu(); // Use checkInteger for input validation

        if (menu > 5 || menu < 1) { // Input validation for menu-driven choices
            printf("Please input a number between 1 and 5\n");
        } else if (menu == 1) {
            Display();
        } else if (menu == 2) {
            Search();
        } else if (menu == 3) {
            Sort();
        } else if (menu == 4) {
            Export();
        }
    } while (menu != 5);

    printf("Thank you for using our system!\n");
    return 0;
}
