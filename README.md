# UnsafeCServer
Unsafe C Server for prof of context, to test these sofware
clone these repo, and run


## Install
```shel
sh build.sh
```
then run the multprocess version with:
```shel
./server_multiprocess.o MASTER_KEY  3000
```
or run the single process version  with:
```shel
./server_single_process.o MASTER_KEY   3000
```

where argv[1] = 'your key'<br>
argv[2] = your port <br>
## How it works
The attacker gets suscess if capture the secret message (which means it get informations of the victim)
the secret menssage its the file **secret.txt**
### CWebStudio Protection
if you run the server with **server_single_process.o** and pass a buffer higher than 20 chars
if you will crash the servr, but if you run **server_multiprocess.o** the CWebStudio Protection system
will kill the runing process and return a 500 page, in other worlds it means you will have a couple miliseconds
to bypass the passworld
