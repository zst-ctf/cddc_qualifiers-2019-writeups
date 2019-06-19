# [R-4-1-2] Don't Be A Git
OSINT_RED

## Challenge 

	DESCRIPTION
	Most developers generally love to share code that they've written. Not sure if that's such a good idea...

	Note: This is a continuation from the previous challenge ([R-4-1] Where I Get All My Memes From).

	IMPORTANT: You will NOT need to do any attack at any point on the domain lightspeedcorp.global for this challenge.

	ATTACHED FILES
	None

## Solution

*Github page found by my teammate*

There is a special branch `super-new-feature`.

- https://github.com/sjang3141592653/d4rkspeedcorp-framework/branches

If we see the last commit there is something suspicious

- https://github.com/sjang3141592653/d4rkspeedcorp-framework/commit/0cb1dd46f1aaab8b63fcdeb5bb5bbb14cc26c652

See the commit, there is an inverted flag.

		System.out.println("ehehehehe inserting a sneaky little comment here I wonder if anyone can find it {ϛ⊥uƐWʇƖWW0ɔ‾ɟ0‾ᗡƐɹ∀ɔϛ‾Ɛq‾ㄥu0ᗡ}$6ƖϽᗡᗡϽ$");

Read it upside down.

## Flag

	$CDDC19${D0n7_b3_5cAr3D_0f_c0MM1tM3nT5}
