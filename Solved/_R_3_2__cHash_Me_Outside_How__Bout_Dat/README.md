# [R-3-2] cHash Me Outside How 'Bout Dat
OSINT_RED

## Challenge 

	DESCRIPTION
	Qn: What does a good hacker do with a bunch of hashes?
	Ans: Same as what a good cook does with a carton of eggs.

	Yess, we hit the motherlode! There could be a gem amongst all the hashes, maybe an admin password..?

	Note: This is a continuation from the previous challenge ([R-3-1] Have They Been Pwned?).

	Note: Flag does not include the $CDDC19${....} format. Please include the format when submitting the flag.

	IMPORTANT: You will NOT need to do any attack at any point on the domain lightspeedcorp.global for this challenge.

	ATTACHED FILES
	None

## Solution

From previous challenge 

- https://pastebin.com/0v86Wua7

Then go to user account

- https://pastebin.com/u/ca0mha1nn

Found the other file

- https://pastebin.com/dWFhPc09

These are the hashes

	============================================================
	$2y$12$t8gqp.grVkUNPX9tEGRTBubOoxyYSFoJbQLQ.7FVYmUA4dL2oFWoa
	$2y$12$5ITbt5DwyFp13yzfwOdm0.LWd3BqzVGhzObOmlb0gg2t/MI8LoM2G
	$2y$12$0vki08h.GxvQliWCIcRVR.1cwuz6Yq0J5cqbDVSHHoo6R6JHLciNK
	$2y$12$4Z/4caJqv9Lfn/XvLwRnMumrqO5gxjHDYJG1xgToOwzDT/Lbf0ddm
	$2y$12$DebHJ4WhdnDHX6OxSUp8au0h/iXXtDe4DtQv6OB0KhIdZDIOM5Tna
	$2y$12$vZZlVQxannN7EvVMzcfG/ObBvjn8PY.XXjbPajWxBg6jQcE/IHgz2
	$2y$12$RjHkGRN2CoZuzHcP//jG0OQ9DcFjupmrwifly8cAKk1S//2uFoZHC
	$2y$12$650fuI4woIS8BzBij.JvtusZxfv8Ltj1JR7QYaUhNduB11IlxGtkS
	$2y$12$i9X0wzoW6BNJa/XOLtDrBu3PK1I8mBmyqvVQdawQIx5cwAa/8xId2
	$2y$12$rW6BMlkldp8gh7UgPxdAf.AWBY9uT2R1dhkfsmdAv923kG6rCFB/q
	$2y$12$9DfRXL9p2sIv9UK3Gzh9N.C7Qdq5mKFNPHSCzKL.7JE3cJPIeyVd.
	$2y$12$U/mnGyz66cf8gt/4m7vXVuIvcXOInLvTWsZ1ts621gd9H32lXmE4m
	$2y$12$Ntymbb5z9HuarQY3a2Od5OjprXR52EjDMTrqqaGZCJI0gYKqSc1cG
	$2y$12$C5XKdv5dV2i0ywNJByU78eHaEzwPk8NEABe.4AQOOO6KV2T0/en7O
	$2y$12$eMed7u0NOskbuY.xIuEM1.uIyxrNMDoZVTvSvvB0QaNIRX8Vp.ZKu
	============================================================
	===============creeeedits to lit hax0rs=====================

Searching online, it is a [bcrypt hash](https://en.wikipedia.org/wiki/Bcrypt)

> The prefix "$2a$" or "$2b$" (or "$2y$") in a hash string in a shadow password file indicates that hash string is a bcrypt hash in modular crypt format.

Using John the Ripper, we can crack all except the last one.

	$ /usr/local/Cellar/john-jumbo/1.8.0/share/john/john ./hash.txt --wordlist=rockyou.txt 
	Loaded 15 password hashes with 15 different salts (bcrypt [Blowfish 32/64 X3])
	Press 'q' or Ctrl-C to abort, almost any other key for status
	123123           (?)
	princesa         (?)
	patricia         (?)
	september        (?)
	christopher      (?)
	britney          (?)
	savannah         (?)
	rocky            (?)
	martha           (?)
	simpsons         (?)
	pickles          (?)
	starlight        (?)
	dragon1          (?)
	moocow           (?)
	14g 0:00:29:39 0.04% (ETA: 2019-07-21 03:01) 0.007868g/s 4.041p/s 10.08c/s 10.08C/s mykids2..monsters

The last password cannot be solved. Try all the passwords.

## Flag

	$CDDC19${starlight}
