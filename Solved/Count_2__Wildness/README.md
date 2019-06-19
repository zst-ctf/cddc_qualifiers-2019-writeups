# Count 2: Wildness
Programming

## Challenge 

	DESCRIPTION
	My friend said that my code is still too long.
	Can you help me again?

	count2-wildness.cddc19q.ctf.sg 12221

	* gcc version 7.4.0 (Ubuntu 7.4.0-1ubuntu1~18.04)
	* This challenge is not a pwn challenge.

	MD5("count2-wildness.zip"): AACC124AAF1DDB6D1F455AFBA6B898ED

	ATTACHED FILES
	count2-wildness.zip

## Solution

Same as before, we need to do codegolf until 41 chars.

Previously we had this of 45 chars

	main(i){for(i=1;i<10000;i++)printf("%d,",i);}

---

If we look at stackoverflow, we get some tips

https://codegolf.stackexchange.com/questions/2203/tips-for-golfing-in-c/2230#2230

	Abuse main's argument list to declare one or more integer variables:
	main(a){for(;++a<28;)putchar(95+a);}

And we have this important piece of info.
	
	This solution also abuses the fact that a (a.k.a. argc) starts out as 1, provided the program is called with no arguments.

Since the argument starts at 1 by default, we can omit the initialiser.

We can trim some chars by putting the increment together with the comparison statement

	main(i){for(;++i<10000;)printf("%d,",i);}

Submit to the server

	Your code : main(i){for(;++i<10000;)printf("%d,",i);}
	Sorry, my friend doesn't like to go wild! -> '<'

Oops, this time, we have additional characters we can't use

    # wild check
    wild = '<== w1lD ==>'
    for ch in code:
        if ch in wild:
            print "\nSorry, my friend doesn't like to go wild! -> '{}'".format(ch)
            sys.exit(-1)

We have to change the less than `<` sign.

- Since i is incrementing, we can check if i == 10000 and stop there, but `==` is also forbidden.
- We can check if 2 numbers are equal to each other by checking its ANDed value

So we have the following which prints from 1 through 9999 inclusive, where i initialises with 0.

	main(i){for(;++i^10000;)printf("%d,",i);}

We are almost there... But we can't use the number 1

	Your code : main(i){for(;++i^10000;)printf("%d,",i);}
	Sorry, my friend doesn't like to go wild! -> '1'

In order to overcome that, we need to replace `i < 10000` with `i <= 9999`.

---

Looking at how other people implement their code golf again, there is a minor statement I missed

https://codegolf.stackexchange.com/a/2230

	Use global variables to initialize things to zero:

	t[52],i;main(c){for(;i<52;)(c=getchar())<11?i+=26:t[i+c-97]++;
	for(i=27;--i&&t[i-1]==t[i+25];);puts(i?"false":"true");}

So by initialising global variable, we can start with 0 instead.

Here's a summary of my changes 

	[a]  main(i){for(;++i^10000;)printf("%d,",i);} // 1 to 9999 inclusive
	[b]  main(i){for(;++i^9999;)printf("%d,",i);}  // 1 to 9998 inclusive
	[c]  i;main(){for(;++i^9999;)printf("%d,",i);} // 0 to 9998 inclusive
	[d]  i;main(){for(;i++^9999;)printf("%d,",i);} // 1 to 9999 inclusive

	Final:  i;main(){for(;i++^9999;)printf("%d,",i);}

The solution is 41 chars and we get the flag.

	$ nc count2-wildness.cddc19q.ctf.sg 12221

	[Count 2: Wildness]

	My friend said that my code is still too long.
	Can you help me again?

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
	    
	Your code : i;main(){for(;i++^9999;)printf("%d,",i);}
	Flag : $CDDC19${This_really_helps_m3_a_lot!}

## Flag

	$CDDC19${This_really_helps_m3_a_lot!}
