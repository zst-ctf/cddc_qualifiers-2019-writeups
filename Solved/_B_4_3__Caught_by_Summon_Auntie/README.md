# [B-4-3] Caught by Summon Auntie
OSINT_BLUE

## Challenge 

	DESCRIPTION
	Wow, what a mess this has been. We had data breaches, compromised servers, phishing scams and even being held hostage by ransomware. All in a day's work for the blue team..

	Given all the clues we gathered about our careless but ambitious hackers, the information is sufficient to pinpoint their base of operations. Have you found it?

	Note: This is a continuation from the previous challenge ([B-4-2] Hide N Seek).

	ATTACHED FILES
	None

## Solution

My team mate did the first part. He found a photo from the person's Twitter account.

Doing a binwalk of the photo, he got a suspicious `B6.zip` which was corrupted.

---

If we do a hexdump of B6.zip, we notice that there are multiple ZIP headers (multiple PK text). Hence, use a script to split up the files and extract them separately.

[extract_B6zip.py](extract_B6zip.py)

After we split up B6.zip, we get 2 files: 

- B6_fixed_1.zip: contains ARGH.jpg
- B6_fixed_2.zip: contains ehehe.txt

The 2 "fixed" ZIPs are still corrupted as the ZIP footer is missing (it is replaced by the character AAAAAAAAA), but we can extract their contents using foremost.

We thus get ehehe.txt

From ehehe.txt, we have information

    heard about this new interesting technique about hiding zip files on Twitter heheh testing it out

    I can totally hide text files, image files, malicious code, whatever I want LOLOL Lite hax0r FTW

    ARGH stupid parking fine I got from my office parking auntie..

    The flag format is 
    - $CDDC19${OfficeBuildingPostalCode_OfficeParkingTelephoneNumber}
    - eg. $CDDC19${048621_61112222}

From ARGH.jpg, read the EXIF metadata using exiftool and we see GPS coordinates.

On google maps, we get Oxley Bizhub 2

- https://oxleybizhub2.com/

> Postal code: Singapore 408734 

Now we go Google Street View, and we actually see the carpark has a phone number signage.

> Phone number: 67479668

- https://www.google.com/maps/@1.3316007,103.8915222,3a,15y,73.59h,88.64t/data=!3m6!1e1!3m4!1sv5SfDjj-Y1xa7zp3G_YNeg!2e0!7i16384!8i8192

Piece it together for the flag.

## Flag

	$CDDC19${408734_67479668}
