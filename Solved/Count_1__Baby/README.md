# Count 1: Baby
Programming

## Challenge 

	DESCRIPTION
	My friend has said that my code is too long.
	Can you make it shorter?

	count1-baby.cddc19q.ctf.sg 11111

	* gcc version 7.4.0 (Ubuntu 7.4.0-1ubuntu1~18.04)
	* This challenge is not a pwn challenge.

	MD5("count1-baby.zip"): 3AC2805F91E3FDE946C3B5B6A497EFF2

	ATTACHED FILES
	count1-baby.zip

## Solution

### What we are given

We need to shorten a program which counts from 1 to 9999 inclusive.

	$ nc count1-baby.cddc19q.ctf.sg 11111

	[Count 1: Baby]

	My friend has said that my code is too long.
	Can you make it shorter?

	This is my code:
	----------------------------------------|
	#include <stdio.h>

	int main(int argc, char *argv[])
	{
		int i;

		for( i = 1 ; i < 10000 ; i++ )
		{
			printf("%d,", i);
		}

		return 0;
	}
	----------------------------------------/
	    
	Your code : 

From the provided source code, it is wrapped around a python instance which checks for char length.

	def check(code):
	    if len(code) > 53:
	        print "Code size is {}! Too long!".format(len(code))
	        sys.exit(-1)
	    elif len(code) < 20:
	        print "Really? Are you kidding me?"
	        sys.exit(-1)
	    else:
	        bad_func = ["system", "exec", "popen"]
	        for b in bad_func:
	            if b in code:
	                print "Nope! Don't even attempt to pwn this challenge!"
	                sys.exit(-1)
	    for ch in code:
	        if ch not in letters + digits + punctuation: # filter
	            bye(ch)

Only allowed chars are letter, digit and punctuation.

Notice there are no whitespaces (we can [replace spaces with `/**/`](https://www.quora.com/Is-it-possible-to-write-a-C-Program-without-any-whitespace))

We are also limited to 52 chars length.

### Solving it

Since we are limited at max 52 chars, this is a codegolf challenge.

If we go to stackoverflow, we see how other people gave tips on declaring variables

https://codegolf.stackexchange.com/a/2230

	Abuse main's argument list to declare one or more integer variables:
	main(a){for(;++a<28;)putchar(95+a);}

With this, we can modify it to get out answer at 44 chars

	main(i){for(i=1;i<10000;i++)printf("%d,",i);}

## Flag

	Flag : $CDDC19${Count2_is_waiting_Please_enjoy!}
