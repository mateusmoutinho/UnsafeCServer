# UnsafeCServer
Unsafe C Server for prof of context, to test these sofware
clone these repo, and run
## Install
```shel
sh build.sh
```
then run:
```shel
./server.o MASTER_KEY "congratulation you have hacked the server" 3000
```

where argv[1] = 'your key'
argv[2] = your port
## How it works
The attacker gets suscess if capture the secret message (which means it get informations of the victim)
the secret menssage its the file **secret.txt**
