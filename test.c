#include<stdio.h>
#include<stdbool.h>
// error denotion:
// 1>file opening error
// 2>invalid input to function "ask_quit"
// 3>returning default output of main switch function


int make_qu(char* fpointer)
{
    



    char sentence[300];
    char answer[100];
    FILE* file_ptr = fopen("questions.txt", "a");
    if (file_ptr == NULL){
        printf("Error,file not opening.\n");
        return 1;
    }
    //question
    printf(">Enter a new question (less than 301 characters):\n");
    fgets(sentence, sizeof(sentence),stdin);
    printf(">>%s",sentence);
    fprintf(file_ptr, "%s", sentence);
    fprintf(file_ptr, "\n");
    //answer
    printf("\n>Enter the answer (one word):");
    fgets(answer ,sizeof(answer), stdin);
    printf(">>%s" ,answer);
    fprintf(file_ptr, "%s", answer);
    fprintf(file_ptr, "\n");

    printf("\nQuestion and Answer inserted.");
    
    
    
    
    
    fclose(file_ptr);
    return 0;

    
}
//


int func_ask_quit(bool* ask_quit_ptr)
{
    int ask_quit_input;
    printf("Welcome to the Quiz Maker!\n");
    printf("If you want to add a new question type ""1"" and press enter.\n");
    printf("If you want to exit type ""0"" and press enter.\n");
    scanf("%i",&ask_quit_input);
    switch(ask_quit_input){
        case 1:
            printf("here!");
            printf("Okk,",*ask_quit_ptr);
            *ask_quit_ptr = false;
            return ask_quit_input;
            break;
            
        case 0:
            printf("Quiting.");
            *ask_quit_ptr= true;
            return ask_quit_input;
            break;
        default:
            printf("Invalid choice.");
            return 2;
    }


}


// int start_quiz()
// {

// }








int main()
{
// bool ask_quit = false;
// bool* ask_quit_ptr = &ask_quit;//for passing it to a function
// int ask_quit_choice;
//     while(ask_quit == false)    

//     ask_quit_choice = func_ask_quit(ask_quit_ptr);

//     switch(ask_quit_choice){
//         case 1:
            char file_name[14] = "questions.txt";
            char* file_name_ptr = file_name; 
            make_qu(file_name_ptr);
            // break;

        // case 0:

        //     break;
        // default:
        //     return 3;
 
//    }

    
        
        
        


        




    // }

}