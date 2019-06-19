# Not FairPrice, but FairPlay
Crypto

## Challenge 

	DESCRIPTION
	Do you know what makes a fair game?

	Flag format: $CDDC19${DECRYPTED_MESSAGE}
	e.g. $CDDC19${THIS_IS_THE_FLAG}

	MD5("FairPlay.zip"): 3577D366F00101597169C592B93AF2A0

	ATTACHED FILES
	FairPlay.zip

## Solution

	FairPlay $ cat fairplay.html
	<!DOCTYPE html>

	<html>
	<head>
		<title>Fair Play</title>
	</head>
	<body>
		<br><br><br>
		<center><font color="green">
			<h1>Do you want a flag?</h1>
			<a href="javascript:alert('F_NGNU_KNDV_NQ_LHUBWYFTY')"><img src="fairplay_qrcode.png"></a>
			<h1>Here you go!</h1>
		</font></center>
	</body>
	</html>

	FairPlay $ zbarimg fairplay_qrcode.png 
	QR-Code:R09PREdBTUU=
	scanned 1 barcode symbols from 1 images in 0.01 seconds

	FairPlay $ echo R09PREdBTUU= | base64 --decode
	GOODGAME

Use tool http://rumkin.com/tools/cipher/playfair.php

Encrypted: F_NGNU_KNDV_NQ_LHUBWYFTY
Key: GOODGAME

## Flag

	$CDDC19${A_FAIR_PLAY_IS_IMPORTANT}
