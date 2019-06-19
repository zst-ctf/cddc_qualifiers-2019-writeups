# [B-0] What's in, Doc?
OSINT_BLUE

## Challenge 

	DESCRIPTION
	Well, we all knew Tommy the HR specialist was disgruntled and had serious beef with LightSpeedCorp's management. But who knew that he would get caught by security trying to smuggle out a USB drive by hiding it under his tongue? Tommy's cover was blown immediately when he choked as he said goodbye to security.

	Luckily, our security guy performed an emergency Heimlich maneuver and we managed to retrieve the USB stick. One of the files inside the USB stick seems to be an ordinary Word document, but we have reservations about it. What do you say?

	You must solve this challenge to unlock [B-1], [B-2], [B-3-1] and [B-4-1].

	MD5("test-docx.docx"): F1846153201E9315EFF90F2E32818663

	ATTACHED FILES
	test-docx.docx

## Solution

We can unzip the DOCX file.

	 $ cp test-docx.docx test-docx.zip
	
	 $ mkdir test-docx
	 $ cd test-docx
	
	 $ unzip ../test-docx.zip
	Archive:  ../test-docx.zip
	  inflating: [Content_Types].xml     
	  inflating: _rels/.rels             
	  inflating: word/document.xml       
	  inflating: word/_rels/document.xml.rels  
	  inflating: word/theme/theme1.xml   
	  inflating: word/settings.xml       
	  inflating: word/styles.xml         
	  inflating: word/webSettings.xml    
	  inflating: word/fontTable.xml      
	  inflating: docProps/core.xml       
	  inflating: docProps/app.xml        
	  inflating: Light_speed_corp_logo_pink_team.xml  
	  inflating: chatlog_6_may_2019.xml  

We see a suspicious XML file, which is actually a JPEG file.

	$ file Light_speed_corp_logo_pink_team.xml 
	Light_speed_corp_logo_pink_team.xml: JPEG image data, JFIF standard 1.02, resolution (DPI), density 300x300, segment length 16, baseline, precision 8, 3509x2481, frames 3

Rename it to `Light_speed_corp_logo_pink_team.png` and we see the flag

![Light_speed_corp_logo_pink_team.png](Light_speed_corp_logo_pink_team.png)

## Flag

	$CDDC19${PINK_TEAM}
