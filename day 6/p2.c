printf("-------------MENU-------------");
    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");

    int choise , sub_choise;
    printf("enter your choise:");
    scanf("%d",&choise);
    switch(choise){

        case 1 :
            printf("enter your sub_choise:");
            scanf("%d",&sub_choise);

            switch (sub_choise)
            {
             printf("Press 1 for Internet Recharge");
             printf("Press 2 for Top-up Recharge");
             printf("Press 3 for Special Recharge");
             
            case 1 :
            printf("Internet Recharge");
            break;
            case 2 :
            printf("Top-up Recharge");
            break;
            case 3 :
            printf("Special Recharge");
            break;
            default:("Not Available");
            }
            break;
        case 2 :
        printf("enter your sub_choise:");
        scanf("%d",&sub_choise);

            switch (sub_choise)
            {
            printf("Internet Recharge ke liye 1 dabaiye");
            printf("Top-up Recharge ke liye 2 dabaiye");
            printf("Special Recharge ke liye 3 dabaiye");
            
            case 1 :
            printf("इंटरनेट रिचार्ज");
            break;
            case 2 :
            printf("टॉप-अप रिचार्ज");
            break;
            case 3 :
            printf("विशेष पुनर्भरण");
            break;
            default:("Not Available");
            }
            break;
        break;
        
        case 3 :
        printf("enter your sub_choise:");
        scanf("%d",&sub_choise);

            switch (sub_choise)
            {
            printf("Internet Recharge mate 1 dabavo");
            printf("Top-up Recharge mate 2 dabavo");
            printf("Special Recharge mate 3 dabavo");

            case 1 :
            printf("ઇન્ટરનેટ રિચાર્જ");
            break;
            case 2 :
            printf("ટોપ-અપ રિચાર્જ");
            break;
            case 3 :
            printf("ખાસ રિચાર્જ");
            break;
            default:("Not Available");
            }
            break;
        break;
    }
}