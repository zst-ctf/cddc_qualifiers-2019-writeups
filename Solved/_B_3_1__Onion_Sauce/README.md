# [B-3-1] Onion Sauce
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

There are a lot of `<br>`s which hides the flag.

Use `sed` to replace away all the `<br>`s 

	$ torsocks curl -s ctfsg4bndpw6xurhitwa2dh66ycorghoa2ym3s3s4g3bgxqs3veaf4ad.onion 
	| cat | sed 's/<br>//g'
	
We see the flag as a result

	<!DOCTYPE html>
	<html>
	<head>
		<meta charset="UTF-8">
	</head>
	<style>
		.container {
			overflow-y: hidden;
			scrollbar-width: none;
			-ms-overflow-style: none;
		}
		.container::-webkit-scrollbar {
			width: 0;
			height: 0;
	}
	</style>
	<body class="container">
		<div>
			<h1>You Have Been Hacked!</h1>
			<p>
			As per the instructions in the email, please transfer the ETH to us using this wallet address: 0x7BD106A84773B43E2DE9f68961b53CF8fB95A1f1
			</p>
			<div style="color:white;">
			$CDDC19${n0W_Y0u_KnOw_Th3_S4uC3}
			</div>
		</div>
	</body>
	</html>
			
## Flag

	$CDDC19${n0W_Y0u_KnOw_Th3_S4uC3}
