# [B-1] Fight the Binary Monster
OSINT_BLUE

## Challenge 

	DESCRIPTION
	Drats, we found an unknown executable that someone uploaded to one of our web servers. How weird, it seems to be make heavy reference to trees. Is the author some kind of environmentalist, perhaps?

	Note: This executable is not malicious, but we strongly advise participants to run it in a VM. This should always be the case when encountering any unknown executables, and to cultivate good opsec habits. :) 

	MD5("tree_monster.exe"): 370B2D92C8CF0CABB7B312CBEDAAF9D3

	ATTACHED FILES
	tree_monster.exe

## Solution

We notice there are some pastebin URLs in the strings

	$ strings /Users/manzelseet/Downloads/tree_monster.exe | grep http
	https://pastebin.com/raw/EcrLPtRP
	https://pastebin.com/raw/v1cRRWEW

If we download them, we find a binary tree with characters of the flag.

[EcrLPtRP.txt](EcrLPtRP.txt)

Read it in order and we have the flag.

## Flag

	$CDDC19${havesometrees}

