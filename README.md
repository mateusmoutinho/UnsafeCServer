# UnsafeCServer
Unsafe C Server for prof of context, to test these sofware
clone these repo, and run
## Install
```shel
sh build.sh
```
then run the multprocess version with:
```shel
./server_multiprocess.o MASTER_KEY "congratulation you have hacked the server" 3000
```
or run the single process version  with:
```shel
./server_single_process.o MASTER_KEY "congratulation you have hacked the server" 3000
```

where argv[1] = 'your key'
argv[2] = your port
## How it works
The attacker gets suscess if capture the secret message (which means it get informations of the victim)
the secret menssage its the file **secret.txt**
