# Come Back To Earth
RE

## Challenge 

	DESCRIPTION
	Recently, LightSpeedCorp has been constantly having security issues in their environment. So although Luther, Sjang, and Bobby are developers, their boss Steffie decided to send them for a three-day reverse engineering training on Ghidra, a sexy new tool released by the NSA in 2019. When they came back from the training, the three of them were smiling all day to themselves about how great they were in reverse engineering even though they hardly knew anything about it. Steffie decided to pull them back to earth by giving them a day to solve a reverse engineering challenge.

	Turns out, none of them could solve this reversing challenge. Can you help them before they get fired?

	Note: The flag does not include the $CDDC19${....} format. Please include the format during your submission.

	MD5("Greetings_from_underground.png"): 0EA688FC6B2B4AD5A166675A2F985705

	ATTACHED FILES
	Greetings_from_underground.png

## Solution

	Come_Back_To_Earth $ xxd Greetings_from_underground.png 
	00000000: 8950 4e47 0d0a 1a0a 0000 000d 4948 4452  .PNG........IHDR
	00000010: 0000 0001 0000 0034 0802 0000 00c4 c0c5  .......4........
	00000020: c000 0000 0173 5247 4200 aece 1ce9 0000  .....sRGB.......
	00000030: 0004 6741 4d41 0000 b18f 0bfc 6105 0000  ..gAMA......a...
	00000040: 0009 7048 5973 0000 0ec3 0000 0ec3 01c7  ..pHYs..........
	00000050: 6fa8 6400 0000 b949 4441 5418 5725 8d3d  o.d....IDAT.W%.=
	00000060: 0ac2 4010 469f 760a 61ab e021 ecf4 06e2  ..@.F.v.a..!....
	00000070: daa5 9268 e1df 4952 a531 ae82 8585 ad60  ...h..IR.1.....`
	00000080: e705 b409 2482 365b 7888 0882 2904 2d44  ....$.6[x...).-D
	00000090: b630 4bbe 661e c39b f9f0 554e 988f e90f  .0K.f.....UN....
	000000a0: 86ac 823d a706 458e 68ad d1ef 0357 69ec  ...=..E.h....Wi.
	000000b0: 022e 926f ff82 fcf4 d82d 051d 2264 a670  ...o.....-.."d.p
	000000c0: d625 7b0f 85bb 29d9 cf77 6c45 0722 c9eb  .%{...)..wlE."..
	000000d0: 2a29 3f3c a929 0f13 2654 223b 038c 0868  *)?<.)..&T";...h
	000000e0: 2b1f b3e8 e266 2da4 5178 664e d7c9 10b1  +....f-.QxfN....
	000000f0: cf57 c445 5f93 5b98 524f 7e54 ed7d e13a  .W.E_.[.RO~T.}.:
	00000100: 859b 5a9e 5b7e 12cf a68c d49d c959 ff01  ..Z.[~.......Y..
	00000110: f6b9 49e2 f51a b5f8 0000 0000 4945 4e44  ..I.........IEND
	00000120: ae42 6082 0000 0000 0000 0000 0000 0000  .B`.............
	00000130: 3469 3361 325f 7131 7b3f 7d7d 3866 6c    4i3a2_q1{?}}8fl

## Flag

	??