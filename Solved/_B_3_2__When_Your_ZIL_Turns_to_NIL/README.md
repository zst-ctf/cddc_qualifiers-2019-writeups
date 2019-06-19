# [B-3-2] When Your ZIL Turns to NIL :'(
OSINT_BLUE

## Challenge 

	DESCRIPTION
	We trusted our security measures, but a mega conglomerate like LightSpeedCorp is hard to defend entirely. With some of our staff falling prey to the ransomware (Sighs, why...? Those were only test servers...), our CFO urgently requested to know how much money was lost and given to those unscrupulous hackers. Is there any way to track it?

	Flag format: $CDDC19${1ST_VICTIM_ADDRESS+AMOUNT}
	e.g. $CDDC19${0x1A2B3C4DEF+0.12345}

	Note: All other alphabets in the flag, except for the first "x" which is in lowercase, must be in uppercase.

	ATTACHED FILES
	None

## Solution

From the previous challenge, we get the wallet address.

	<p>
	As per the instructions in the email, please transfer the ETH to us using this wallet address: 0x7BD106A84773B43E2DE9f68961b53CF8fB95A1f1
	</p>

We can see the transactions at this website

https://etherscan.io/address/0x7BD106A84773B43E2DE9f68961b53CF8fB95A1f1

The flag is the first transaction address and the money

## Flag

	$CDDC19${0xE04E2AFC438BC0CE5D0B235607E66B2296778F44+0.02019}
