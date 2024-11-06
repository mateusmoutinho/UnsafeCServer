curl -L https://github.com/OUIsolutions/CWebStudio/releases/download/v2.003/CWebStudio.h -o CWebStudio.h
gcc main.c -o server_multiprocess.o
gcc main.c -DSINGLE_PROCESS -o server_single_process.o
