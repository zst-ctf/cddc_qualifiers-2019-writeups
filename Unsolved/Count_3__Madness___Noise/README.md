# Count 3: Madness - Noise
Programming

## Challenge 

	DESCRIPTION
	My friend has sent me some part of his code as a hint.
	It looks like it is way easier than before :)

	count3-madness-noise.cddc19q.ctf.sg 12321

	* gcc version 7.4.0 (Ubuntu 7.4.0-1ubuntu1~18.04)
	* This challenge is not a pwn challenge.

	MD5("count3-madness-noise.zip"): 396F870B35D563B79AF70B082143C284

	ATTACHED FILES
	count3-madness-noise.zip

## Hint

	my_code

## My work

41 chars solution

	i;main(){for(;i++^9999;)printf("%d,",i);} // 0 to 9999 inclusive

Now need 32 chars

    # hint
    code = list(code)
    code[2]  = 'm';
    code[3]  = 'a';
    code[12] = 'd';
    code[15] = 'm';
    code[25] = 'a';
    code[29] = 'd';
    code = ''.join(code)
    print "Known code : __ma________d__m_________a___d__"
    print "Curr. code :", code
    print "(I can reveal some part of the code for you; you're welcome!)\n"

testing

	__ma________d__m_________a___d__
	             ./my_code
	i;main(){      main();     printf("%d,",1)};

	i;main(){for(;i++^9999;)printf("%d,",i);}
	i;main(){printf("%d,",++i);i^9999?main():0;}
	
	x;main(b){(&b)[3|printf("%d ",++x)]-=7;}


		for(;i++^9999;)________
		                printf("%d,",i);}
## Intended Solution

Comment away start and end, then include my_code.c

	/*ma*/#include"my_code.c"/*asd*/ 

## Flag

	??