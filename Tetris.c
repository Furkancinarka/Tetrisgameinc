#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include <string.h>

/**Semester project,**/
void boardupdater(char board[25][25], int height,int width, int columnanswer, char selectedshape[],
  int shapeL, int shapeW, char shapes[][20], char rotatedshapesuno[][20], char rotatedshapesdos[][20],
  char rotatedshapestres[][20],int *emptylinenumflag) {
  int i = 0;
  int j;
  int a, b;
  int x,y;
  int emptylinenumber = 0;
  int exitpass = 0;
  int blockbreakerflag=1;
  

  while (board[i][columnanswer] == '0' && emptylinenumber<height) {
    emptylinenumber++;
    emptylinenumflag++;
    i++;
  }

  printf("\n %d is the empty line number in the row. \n", emptylinenumber);

  // 0000
  if (strcmp(selectedshape, shapes[0]) == 0 || strcmp(selectedshape, rotatedshapesdos[0]) == 0) {
    while (exitpass == 0) {
      if (board[emptylinenumber][columnanswer] == '0' && board[emptylinenumber][columnanswer + 1] == '0' &&
        board[emptylinenumber][columnanswer + 2] == '0' && board[emptylinenumber][columnanswer + 3] == '0') {

        board[emptylinenumber][columnanswer] = '1';
        board[emptylinenumber][columnanswer + 1] = '1';
        board[emptylinenumber][columnanswer + 2] = '1';
        board[emptylinenumber][columnanswer + 3] = '1';
        exitpass = 1;

      } else if (board[emptylinenumber][columnanswer] != '0' || board[emptylinenumber][columnanswer + 1] != '0' ||
        board[emptylinenumber][columnanswer + 2] != '0' || board[emptylinenumber][columnanswer + 3] != '0') {
        emptylinenumber--; //if the areas are full, decrement it
      } else {
        printf("Problem in 1st part of the boardupdater function.(Debug)\n");
        break;
      }

    }
  }
 
  // 00
  // 00
  else if (strcmp(selectedshape, shapes[2]) == 0|| strcmp(selectedshape, rotatedshapesuno[2]) == 0 ||
    strcmp(selectedshape, rotatedshapesdos[2]) == 0 || strcmp(selectedshape, rotatedshapestres[2]) == 0) {
    while (exitpass == 0) {
      if (board[emptylinenumber][columnanswer] == '0' && board[emptylinenumber][columnanswer + 1] == '0' &&
        board[emptylinenumber + 1][columnanswer] == '0' && board[emptylinenumber + 1][columnanswer + 1] == '0') {
        board[emptylinenumber][columnanswer] = '1';
        board[emptylinenumber][columnanswer + 1] = '1';
        board[emptylinenumber + 1][columnanswer] = '1';
        board[emptylinenumber + 1][columnanswer + 1] = '1';
        exitpass = 1;

      } else if (board[emptylinenumber][columnanswer] != '0' || board[emptylinenumber][columnanswer + 1] != '0' ||
        board[emptylinenumber + 1][columnanswer] != '0' || board[emptylinenumber + 1][columnanswer + 1] != '0') {
        emptylinenumber--;
      } else {
        printf("Problem in 1st part of the boardupdater function.(Debug)\n");
        break;
      }

    }
  }

  //  00
  // 00    
  else if (strcmp(selectedshape, shapes[3]) == 0 || strcmp(selectedshape, rotatedshapesdos[3]) == 0) {
    while (exitpass == 0) {
      if (board[emptylinenumber + 1][columnanswer] == '0' && board[emptylinenumber + 1][columnanswer + 1] == '0' &&
        board[emptylinenumber][columnanswer + 1] == '0' && board[emptylinenumber][columnanswer + 2] == '0') {
        board[emptylinenumber+1][columnanswer] = '1';
        board[emptylinenumber][columnanswer + 1] = '1';
        board[emptylinenumber + 1][columnanswer+1] = '1';
        board[emptylinenumber ][columnanswer + 2] = '1';
        exitpass = 1;

      } else if (board[emptylinenumber + 1][columnanswer] != '0' || board[emptylinenumber + 1][columnanswer + 1] != '0' ||
        board[emptylinenumber][columnanswer + 1] != '0' || board[emptylinenumber][columnanswer + 2] != '0') {

        emptylinenumber--;

      } else {
        printf("Problem in 2nd part of the boardupdater function.(Debug)\n");
        break;
      }
    }
  }

  //  0
  //  0
  //  0
  //  0
  else if (strcmp(selectedshape, rotatedshapesuno[0]) == 0|| strcmp(selectedshape, rotatedshapestres[0]) == 0) {
    while (exitpass == 0) {
      if (board[emptylinenumber + 0][columnanswer] == '0' && board[emptylinenumber + 1][columnanswer] == '0' &&
        board[emptylinenumber + 2][columnanswer] == '0' && board[emptylinenumber + 3][columnanswer] == '0') {
        board[emptylinenumber][columnanswer] = '1';
        board[emptylinenumber + 1][columnanswer] = '1';
        board[emptylinenumber + 2][columnanswer] = '1';
        board[emptylinenumber + 3][columnanswer] = '1';
        exitpass = 1;

      } else if (board[emptylinenumber + 1][columnanswer] != '0' || board[emptylinenumber + 1][columnanswer] != '0' ||
        board[emptylinenumber + 2][columnanswer] != '0' || board[emptylinenumber + 3][columnanswer] != '0') {
        emptylinenumber--;
      } else {
        printf("Problem in 3rd part of the boardupdater function.(Debug)\n");
        break;
      }
    }
  }

  // 0
  // 0 0
  //   0
  else if (strcmp(selectedshape, rotatedshapesuno[3]) == 0 || strcmp(selectedshape, rotatedshapestres[3]) == 0) {
    while (exitpass == 0 ) {
      if (board[emptylinenumber][columnanswer] == '0' && board[emptylinenumber + 1][columnanswer] == '0' &&
        board[emptylinenumber + 1][columnanswer + 1] == '0' && board[emptylinenumber + 2][columnanswer + 1] == '0') {
        board[emptylinenumber][columnanswer] = '1';
        board[emptylinenumber + 1][columnanswer] = '1';
        board[emptylinenumber + 1][columnanswer + 1] = '1';
        board[emptylinenumber + 2][columnanswer + 1] = '1';
        exitpass = 1;

      } else if (board[emptylinenumber][columnanswer] != '0' || board[emptylinenumber + 1][columnanswer] != '0' ||
        board[emptylinenumber + 1][columnanswer + 1] != '0' || board[emptylinenumber + 2][columnanswer + 1] != '0') {

        emptylinenumber--;
      }

    else {
      printf("Problem in 4th part of the boardupdater function.(Debug)\n");
      break;
      }
    }
  }

  //    0000
  //    0
  else if (strcmp(selectedshape, shapes[1]) == 0) {
    while (exitpass == 0 ) {
      if (board[emptylinenumber][columnanswer] == '0' && board[emptylinenumber + 1][columnanswer] == '0' &&
        board[emptylinenumber][columnanswer + 1] == '0' && board[emptylinenumber][columnanswer + 2] == '0' &&
        board[emptylinenumber][columnanswer + 3] == '0') {

        board[emptylinenumber][columnanswer] = '1';
        board[emptylinenumber + 1][columnanswer] = '1';
        board[emptylinenumber][columnanswer + 1] = '1';
        board[emptylinenumber][columnanswer + 2] = '1';
        board[emptylinenumber][columnanswer + 3] = '1';
        exitpass = 1;
      } else if (board[emptylinenumber][columnanswer] != '0' || board[emptylinenumber + 1][columnanswer] != '0' ||
        board[emptylinenumber][columnanswer + 1] != '0' || board[emptylinenumber][columnanswer + 2] != '0' ||
        board[emptylinenumber][columnanswer + 3] != '0') {
        emptylinenumber--;
      } else {
        printf("Problem in 4th part of the boardupdater function.(Debug)\n");
        break;
      }
    }
  }

  //  1
  //  1
  //  1
  //  1 1
  else if (strcmp(selectedshape, rotatedshapesuno[1]) == 0) {
    while (exitpass == 0) {
      if (board[emptylinenumber][columnanswer] == '0' && board[emptylinenumber + 1][columnanswer] == '0' &&
        board[emptylinenumber + 2][columnanswer] =='0' && board[emptylinenumber + 3][columnanswer] == '0' &&
        board[emptylinenumber + 3][columnanswer + 1] == '0') {

        board[emptylinenumber][columnanswer] = '1';
        board[emptylinenumber + 1][columnanswer] = '1';
        board[emptylinenumber + 2][columnanswer] = '1';
        board[emptylinenumber + 3][columnanswer] = '1';
        board[emptylinenumber + 3][columnanswer + 1] = '1';
        exitpass = 1;
      } else if (board[emptylinenumber][columnanswer] != '0' || board[emptylinenumber + 1][columnanswer] != '0' ||
        board[emptylinenumber + 2][columnanswer] != '0' || board[emptylinenumber + 3][columnanswer] != '0' ||
        board[emptylinenumber + 3][columnanswer + 1] != '0') {
        emptylinenumber--;
      } else {
        printf("Problem in 5th part of the boardupdater function.(Debug)\n");
        break;
      }
    }
  }

  //      0
  //   0000
  else if (strcmp(selectedshape, rotatedshapesdos[1]) == 0) {
    while (exitpass == 0){
    if (board[emptylinenumber + 1][columnanswer] == '0' && board[emptylinenumber + 1][columnanswer + 1] == '0' &&
      board[emptylinenumber + 1][columnanswer + 2] == '0' && board[emptylinenumber + 1][columnanswer + 3] == '0' &&
      board[emptylinenumber][columnanswer + 3] == '0') {

      board[emptylinenumber][columnanswer+3] = '1';
      board[emptylinenumber+1][columnanswer] = '1';
      board[emptylinenumber+1][columnanswer+1] = '1';
      board[emptylinenumber+1][columnanswer+2] = '1';
      board[emptylinenumber+1][columnanswer+3] = '1';
      exitpass = 1;
    } else if (board[emptylinenumber][columnanswer+3] != '0' || board[emptylinenumber + 1][columnanswer] != '0' ||
      board[emptylinenumber + 1][columnanswer+1] != '0' || board[emptylinenumber + 1][columnanswer+2] != '0' ||
      board[emptylinenumber + 1][columnanswer + 3] != '0') {
      emptylinenumber--;
    } else {
      printf("Problem in 6th part of the boardupdater function.(Debug)\n");
      break;
    }
}
  }
    // 00
    //  0
    //  0
    //  0  

   else if (strcmp(selectedshape, rotatedshapestres[1]) == 0) {
    while (exitpass == 0) {
      if (board[emptylinenumber][columnanswer] == '0' && board[emptylinenumber][columnanswer + 1] == '0' &&
        board[emptylinenumber +1][columnanswer + 1] == '0' && board[emptylinenumber +2][columnanswer + 1] == '0' &&
        board[emptylinenumber +3][columnanswer + 1] == '0') {

        board[emptylinenumber][columnanswer] = '1';
        board[emptylinenumber][columnanswer + 1] = '1';
        board[emptylinenumber +1][columnanswer + 1] = '1';
        board[emptylinenumber + 2][columnanswer + 1] = '1';
        board[emptylinenumber + 3][columnanswer + 1] = '1';
        exitpass = 1;
      } else if (board[emptylinenumber][columnanswer] != '0' || board[emptylinenumber][columnanswer + 1] != '0' ||
        board[emptylinenumber +1][columnanswer + 1] != '0' || board[emptylinenumber + 2][columnanswer + 1] != '0' ||
        board[emptylinenumber + 3][columnanswer + 1] != '0') {
        emptylinenumber--;
      } else {
        printf("Problem in 7th part of the boardupdater function.(Debug)\n");
        break;
      }
    }
  } else {
    printf("An error in update board calculation has occurred.\n ");
    
  }


  for (a = 0; a < height; a++) {
    for (b = 0; b < width; b++) {
      printf(" %c ",board[a][b]);
    }
    printf("\n");
  }

}
int checkTopLine(char board[25][25], int width,int checkerflag) {
  int j;
    for (j = 0; j < width; j++) {
        if (board[0][j] == '1') {
            // Top line has at least one '1'
            checkerflag=1;
            return checkerflag;
        }
    }
    // Top line has no '1'
    return checkerflag;
}
void breakline(char board[25][25], int width, int height) {
    int islinefull = 1;
    int i, j, k;

    for (i = 0; i < height; i++) {
        islinefull = 1;
        for (j = 0; j < width; j++) {
            if (board[i][j] == '0') {
                islinefull = 0;
                break;
            }
        }

        if (islinefull == 1) {
            for (k = i; k > 0; k--) {
                for (j = 0; j < width; j++) {
                    board[k][j] = board[k - 1][j];
                }
            }
            for (j = 0; j < width; j++) {
                board[0][j] = '0';
            }

            // Add this print statement to check the board after each line break
            printf("Line breaks!\n");
            int a;int b;
            for (a = 0; a < height; a++) {
            for (b = 0; b < width; b++) {
                    printf(" %c ", board[a][b]);
                }
                printf("\n");
            }
        }
    }

}



int main() {
  // Shapes
  char shapes[5][20] = {
    "1111",
    "1111\n1",
    "11\n11",
    " 11\n11"
  };
  char rotatedshapesuno[5][20] = {
    "1\n1\n1\n1",
    "1\n1\n1\n11",
    "11\n11",
    "1\n11\n 1"
  };
  char rotatedshapesdos[5][20] = {
    "1111",
    "   1\n1111",
    "11\n11",
    " 11\n11"
  };
  char rotatedshapestres[5][20] = {
    "1\n1\n1\n1",
    "11\n 1\n 1\n 1",
    "11\n11",
    "1\n11\n 1"
  };
  char * selectedshape;

  // Loop counters
  int i, j;

  // Answer flags
  int rotationanswer = -1;
  int welcomeanswer = 0;
  int columnanswer;
  int firsttimeplay=1;
  int menuanswer;
  int toplinecheckerflag;
  int checkerflag=0;
  int resetflag;
  int emptylinenumflag;

  // For board
  int height, width;

  // For shape
  int shapeW;
  int shapeL;
  char board[25][25];

  //scores:
  int score=0;
  int highestscore=0;


// printf("");


printf("BLOCKCASCADE! PRESS 1 TO ENTER MENU. 0 LEAVES.\n");
printf("                  .----.\n");
printf("      .---------. | == |\n");
printf("      |.-'''''-.| |----|\n");
printf("      ||       || | == |\n");
printf("      ||       || |----|\n");
printf("      |'-.....-'| |::::|\n");
printf("        `"")---(""` |___.|\n");
printf("     |:::::::::::|' _  '\n");
printf("    |:::=======:::|`|`|\n" );
printf("afc `'''''''''''''`  '-'\n");
printf("\nInput:\n");


scanf("%d",&menuanswer);




if(menuanswer==0){
    printf("See you soon!");

}
while(menuanswer==1){

  printf("Welcome to BLOCKCASCADE.. Do you want to play? (Yes=1) (No=0)");
  scanf("%d", & welcomeanswer);
if (welcomeanswer == 0) {
    printf("\nHope to see you again!\n");
    return 0;
  }
while(welcomeanswer==1){
  if(firsttimeplay==1){
  printf("\nWhat would you like your height of the board to be? (5-20): ");
  scanf("%d", & height);

  while (height < 5 || height > 20) {
    printf("\nPlease input a number within the valid range. Valid range is 5-20.\n");
    scanf("%d", & height);
  }

  printf("\nWhat would you like your width of the board to be? (5-20): ");
  scanf("%d", & width);

  while (width < 5 || width > 20) {
    printf("\nPlease input a number within the valid range. Valid range is 5-20.\n");
    scanf("%d", & width);
  }
  printf("Reset board?Yes(1)No(0)");
  scanf("%d",&resetflag);
  if (resetflag==1){
    for (i = 0; i < height; i++) {
    for (j = 0; j < width; j++) {
      board[i][j] = '0';
      printf(" %c ", board[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("\nNew Board!\n");
  }
  

  printf("\n");

  // Initialize board
  for (i = 0; i < height; i++) {
    for (j = 0; j < width; j++) {
      board[i][j] = '0';
      printf(" %c ", board[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  }
  

  srand(time(NULL));
  int randomIndex = rand() % 4;
  selectedshape = shapes[randomIndex];

  printf("\n Your shape is: \n");
  printf("%s", selectedshape);
  printf("\n\nDo you want to rotate your shape?\n(No: 0), (Once: 1), (Twice: 2), (Thrice: 3): ");
  rotationanswer=-1;

  while (rotationanswer != 0 && rotationanswer != 1 && rotationanswer != 2 && rotationanswer != 3) {
    scanf("%d", & rotationanswer);

    if (rotationanswer == 0) {
      selectedshape = shapes[randomIndex];
      printf("%s", selectedshape);
      printf("\n");
    } else if (rotationanswer == 1) {
      selectedshape = rotatedshapesuno[randomIndex];
      printf("%s", selectedshape);
      printf("\n");
    } else if (rotationanswer == 2) {
      selectedshape = rotatedshapesdos[randomIndex];
      printf("%s", selectedshape);
      printf("\n");
    } else if (rotationanswer == 3) {
      selectedshape = rotatedshapestres[randomIndex];
      printf("%s", selectedshape);
      printf("\n");
    } else {
      printf("You have entered a wrong number. Please try again: ");
    }
  }

  // Shape width & length calculations
  if (strcmp(selectedshape, shapes[0]) == 0 || strcmp(selectedshape, rotatedshapesdos[0]) == 0) {
    shapeW = 4;
    shapeL = 1;
    printf("\n%d is Shapelength, %d is Shapewidth.\n",shapeL,shapeW);
  } else if (strcmp(selectedshape, shapes[2]) == 0 || strcmp(selectedshape, rotatedshapesuno[2]) == 0 ||
    strcmp(selectedshape, rotatedshapesdos[2]) == 0 || strcmp(selectedshape, rotatedshapestres[2]) == 0) {
    shapeW = 2;
    shapeL = 2;
    
    printf("\n%d is Shapelength, %d is Shapewidth.\n",shapeL,shapeW);
  } else if (strcmp(selectedshape, rotatedshapesuno[0]) == 0 || strcmp(selectedshape, rotatedshapestres[1]) == 0) {
    shapeW = 1;
    shapeL = 4;
    printf("\n%d is Shapelength, %d is Shapewidth.\n",shapeL,shapeW);
  } else if (strcmp(selectedshape, shapes[1]) == 0 || strcmp(selectedshape, rotatedshapesdos[1]) == 0) {
    shapeW = 4;
    shapeL = 2;
    printf("\n%d is Shapelength, %d is Shapewidth.\n",shapeL,shapeW);
  } else if (strcmp(selectedshape, rotatedshapesdos[2]) == 0 || strcmp(selectedshape, rotatedshapesdos[3]) == 0) {
    shapeW = 2;
    shapeL = 2;
    printf("\n%d is Shapelength, %d is Shapewidth.\n",shapeL,shapeW);
  } else if (strcmp(selectedshape, rotatedshapesuno[1]) == 0 || strcmp(selectedshape, rotatedshapestres[1]) == 0) {
    shapeW = 2;
    shapeL = 4;
    printf("\n%d is Shapelength, %d is Shapewidth.\n",shapeL,shapeW);
  } else if (strcmp(selectedshape, shapes[3]) == 0 || strcmp(selectedshape, rotatedshapesdos[3]) == 0) {
    shapeW = 3;
    shapeL = 2;
    printf("\n%d is Shapelength, %d is Shapewidth.\n",shapeL,shapeW);
  } else if (strcmp(selectedshape, rotatedshapesuno[3]) == 0 || strcmp(selectedshape, rotatedshapestres[3]) == 0) {
    shapeW = 2;
    shapeL = 3;
    printf("\n%d is Shapelength, %d is Shapewidth.\n",shapeL,shapeW);
  } else {
    printf("An error in shape length&width calculation has occurred");
    return 1; // Exit the program with an error code
  }
  if(emptylinenumflag<shapeL){
    printf("Not enough space!You lost.");
    welcomeanswer=2;
  }

  printf("\n Where do you want your shape? Enter Column(Starts from 0): \n");
  scanf("%d", &columnanswer);

  if (width < columnanswer-2+shapeW) {
    printf("\nInvalid column. Shape does not fit.\n");
    return 1; // Exit the program with an error code
  }

  printf("Processing...");
  boardupdater(board,height, width, columnanswer, selectedshape, shapeL, shapeW, shapes,
    rotatedshapesuno, rotatedshapesdos, rotatedshapestres,&emptylinenumflag);
    breakline(board,width,height);
    score=score+10;
    if(highestscore<score){
        highestscore=score;
    }
    toplinecheckerflag=checkTopLine(board,width,checkerflag);
    if (!toplinecheckerflag){
        printf("You still have not lost.");
    }
    else if(toplinecheckerflag){
        printf("\n\nYou lost. Top line has 1's.\n\n");
welcomeanswer=2;
    }
    if(welcomeanswer!=2){
    printf("\nDo you want to play again?(Play again:1)Return to Menu(2)Leave(0)");
    scanf(" %d",&welcomeanswer);
    if(welcomeanswer==1){
        printf("%d is your score. Good Job!",score);
        printf("%d is the highest score.",highestscore);
        firsttimeplay=0;
    }
    }
    else if(welcomeanswer==2){
      printf("%d was your score. Good Job!",score);
      printf("%d is the highest score.",highestscore);
      firsttimeplay=1;
      //reset board
  for (i=0;i<height;i++){
for (j=0;j<width;j++){
  board[i][j]='0';
}
}
    printf("Would you like to play?(1) Leave the game?(0)");
    score=0;
    scanf("%d",&menuanswer);
    }
    else if(welcomeanswer==0){
        printf("Bye!");
        return 0;
    }
  }
}
    

  return 0;
  

}
