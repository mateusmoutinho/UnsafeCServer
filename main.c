#include "CWebStudio.h"

CwebNamespace cweb;
const char *master_key;
const char *internal_massage;
CwebHttpResponse *main_sever(CwebHttpRequest *request ){

    char *user_password = cweb.request.get_param(request,"password");
    if(user_password == NULL){
        return cweb.response.send_text("you did not passed the password",404);
    }
    char unsafe_buffer[20] = {0};
    sprintf(unsafe_buffer,"%s",user_password);
    bool passwords_are_equal = strcmp(unsafe_buffer, master_key)  == 0;
    if(passwords_are_equal){
        return cweb.response.send_text(internal_massage,200);
    }

    return cweb.response.send_text("acess denied", 200);
}

int main(int argc, char *argv[]){

    if(argc == 1){
        printf("you did not passed the master key\n");
        return 1;
    }

    if(argc == 2){
            printf("you did not passed the internal message\n");
            return 1;
    }
    if(argc == 3){
            printf("you did not passed the port\n");
            return 1;
    }

    master_key = argv[1];
    internal_massage = argv[2];
    cweb = newCwebNamespace();

    int port  = atoi(argv[3]);

    if(!port){
        printf("invalid port %d\n",port);
        return 1;
    }

    CwebServer server = newCwebSever(port, main_sever);


    cweb.server.start(&server);
    return 0;
}
