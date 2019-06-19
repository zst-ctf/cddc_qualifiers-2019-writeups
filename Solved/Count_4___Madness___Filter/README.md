# Count 4 : Madness - Filter
Programming

## Challenge 

	DESCRIPTION
	Oh, my friend has a broken keyboard.
	Only a few keys work on it.
	Can you change my code for him?

	nc count4-madness-filter.cddc19q.ctf.sg 12421

	* gcc version 7.4.0 (Ubuntu 7.4.0-1ubuntu1~18.04)
	* This challenge is not a pwn challenge.

	MD5("count4-madness-filter.zip"): BA4E566AC33F5C7457EAC4BA5835BA70

	ATTACHED FILES
	count4-madness-filter.zip

## Solution

Solution for Count 2 (41 chars)

	i;main(){for(;i++^9999;)printf("%d,",i);} // 1 to 9999 inclusive

We are only allowed only characters in 'mad printf'. This means that we need to replace the for-loop in the previous payload.

We can replace with a recursion function.

	i;main(){printf("%d,",i); if(i++^9999){main();} }
	// 0 to 9999 inclusive

Since we placed the check after the printing, there is an extra zero printed... Move the increment around

	i;main(){printf("%d,",++i); if(i^9999){main();} }
	// 1 to 9999 inclusive

To reduce chars, replace with ternary operator

	i;main(){printf("%d,",++i); (i^9999) ? main() : 0;}
	
	i;main(){printf("%d,",++i);i^9999?main():0;}

Get flag from server

	Your code : i;main(){printf("%d,",++i);i^9999?main():0;}
	Flag : $CDDC19${Main_might_be_just_a_function_but_it_is_really_special!}

## Flag

	$CDDC19${Main_might_be_just_a_function_but_it_is_really_special!}
