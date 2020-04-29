# Fanáticos Cash
# Version: 3.0.0.0
Developed by Fanáticos Criptos / SperoCoin

# Contact:
> 💬Telegram:
**https://t.me/FanaticosCriptos**

> 💬Facebook:
**https://www.facebook.com/fanaticoscriptosoficial/**

> 💬Twitter:
**https://twitter.com/fanacriptos/**

> 💬BTCTalk:
**https://bitcointalk.org/index.php?topic=5187519.0**

> ✉️E-mail:
**cash@fanaticoscriptos.com**

> 🌎Website:
**https://cash.fanaticoscriptos.com**

> 🌎Block Explorer:
**https://explorer.fanaticoscriptos.com**

# Specifications:
  - **ALGORITHM:** x13
  - **BLOCK TIME:** 180 seconds
  - **REWARDS PoW:**<br>
  Phase Anti-instamine - Block 11 to 999 = 0FCH <br>
  Phase 01 - Block 1000 to 9999 = 2FCH <br>
  Phase 02 - Block 10000 to 99999 = 0.8FCH <br>
  Phase 03 - Block 100000 to 350399 = 0.2FCH <br>
  Phase 04 - Block 350400 to 1226399 = 0.18FCH <br>
  Phase 05 - Block 1226400 to 1751999 = 0.15FCH <br>
  Phase 06 - Block 1752000 up = 0.05FCH <br>
  - **PoS:** After 2h
  - **PoS:**<br>
  Phase 01 - Block 0 to 99999 = 18%* <br>
  Phase 02 - Block 100000 to 175199 = 20%* <br>
  Phase 03 - Block 175200 to 350399 = 19%* <br>
  Phase 04 - Block 350400 to 525599 = 18%* <br>
  Phase 05 - Block 525600 to 700799 = 15%* <br>
  Phase 06 - Block 700800 to 875999 = 12%* <br>
  Phase 07 - Block 876000 to 1051199 = 9%* <br>
  Phase 08 - Block 1051200 to 1226399 = 8%* <br>
  Phase 09 - Block 1226400 to 1401599 = 7%* <br>
  Phase 10 - Block 1401600 to 1576799 = 6%* <br>
  Phase 11 - Block 1576800 to 1751999 = 5%* <br>
  Phase 12 - Block 1752000 to 1927199 = 4%* <br>
  Phase 13 - Block 1927200 up = 3%* <br>
  *per year
  - **CONFIRMATIONS:** 5 for mining and 3 for transactions
  - **TOTAL COINS:** ~ 21 million
  - **PRE-MINED COINS:** ~ 4.200.000 FCH
  - **VELOCITY:** Triple verification system in every network transaction, thus preventing the "double spend"
  - **Adaptable Block Size(ABS):** The block holds all transactions sent within 60 seconds, regardless of the number of transactions

# Compile Source<br>
**Download and install the dependencies:**<br>
sudo apt-get install build-essential libboost-all-dev libcurl4-openssl-dev libdb5.3-dev libdb5.3++-dev libminiupnpc-dev qrencode libqrencode-dev git libtool automake autotools-dev autoconf pkg-config libssl-dev libgmp3-dev libevent-dev bsdmainutils
<br><br><br>
**Compile the daemon in the FanaticosCash/src directory:**<br>
cd FanaticosCash/src<br><br>
make -f makefile.unix USE_UPNP=1 USE_IPV6=1<br><br>
strip FanaticosCashd<br>
<br><br>
**Run daemon in the FanaticosCash/src directory:**<br>
./FanaticosCashd<br><br>
<br>
**(OPTIONAL)Compile the QT in the FanaticosCash directory:**<br>
sudo apt-get install libqt5gui5 libqt5core5a libqt5dbus5 qt-sdk qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler libqrencode-dev<br><br>
qmake FanaticosCash-qt.pro "USE_UPNP=1" "USE_QRCODE=1"<br><br>
make -f Makefile<br><br>

# FanaticosCash.conf
```sh
listen=1
txindex = 1
rpcuser=user
rpcpassword=Random_Password
rpcport=6385
port=6384
#(0=off, 1=on) daemon - run in the background as a daemon and accept commands
daemon=1
#(0=off, 1=on) server - accept command line and JSON-RPC commands
server=1
rpcallowip=127.0.0.1
testnet=0
addnode=node1.fanaticoscriptos.com:6384
addnode=node2.fanaticoscriptos.com:6384
addnode=node3.fanaticoscriptos.com:6384
addnode=node4.fanaticoscriptos.com:6384
```

# FanaticosCash.conf - Testnet
```sh
listen=1
txindex=1
rpcuser=user
rpcpassword=Random_Password
rpcport=6383
port=6382
#(0=off, 1=on) daemon - run in the background as a daemon and accept commands
daemon=1
#(0=off, 1=on) server - accept command line and JSON-RPC commands
server=1
rpcallowip=127.0.0.1
testnet=1
addnode=node1.fanaticoscriptos.com:6382
addnode=node2.fanaticoscriptos.com:6382
addnode=node3.fanaticoscriptos.com:6382
addnode=node4.fanaticoscriptos.com:6382
```

#  Mining:
- Solo Cpu:
```sh
{
"_comment1" : "Any long-format command line argument ",
"_comment2" : "may be used in this JSON configuration file",

"api-bind" : "127.0.0.1:4048",

"url" : "localhost:6385",
"user" : "user",
"pass" : "password",

"algo" : "x13",
"threads" : 0,
"cpu-priority" : 0,
"cpu-affinity" : -1,

"benchmark" : false,
"debug" : true,
"protocol": false,
"quiet" : false
}
```

```sh
cpuminer -q --algo=x13 -o 127.0.0.1:6385 -u user-p password
```

- Solo GPU:
```sh
ccminer30.exe -q --algo=x13 -o 127.0.0.1:6385 -u user-p password
```
