# TxT
Network

## Challenge 

	DESCRIPTION
	Get the flag from flag.lightspeedcorp.global :)

	ATTACHED FILES
	None

## Solution

DNS TXT Record

	 $ dig flag.lightspeedcorp.global TxT

	; <<>> DiG 9.10.6 <<>> flag.lightspeedcorp.global TxT
	;; global options: +cmd
	;; Got answer:
	;; ->>HEADER<<- opcode: QUERY, status: NOERROR, id: 36371
	;; flags: qr rd ra; QUERY: 1, ANSWER: 1, AUTHORITY: 0, ADDITIONAL: 1

	;; OPT PSEUDOSECTION:
	; EDNS: version: 0, flags:; udp: 1280
	;; QUESTION SECTION:
	;flag.lightspeedcorp.global.	IN	TXT

	;; ANSWER SECTION:
	flag.lightspeedcorp.global. 2042 IN	TXT	"$CDDC19${HELLO-DomainNameSystem-TXT}"

	;; Query time: 43 msec
	;; SERVER: 192.168.0.254#53(192.168.0.254)
	;; WHEN: Fri May 31 15:25:48 +08 2019
	;; MSG SIZE  rcvd: 104

## Flag

	$CDDC19${HELLO-DomainNameSystem-TXT}
