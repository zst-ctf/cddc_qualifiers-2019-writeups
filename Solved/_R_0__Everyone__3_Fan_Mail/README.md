# [R-0] Everyone <3 Fan Mail
OSINT_RED

## Challenge 

	DESCRIPTION
	All good hackers do recon. Let's scout out more information about what and who lightspeedcorp.global is. I heard their administrator loves replying to fan mail.

	Remember kids, don't just rely on one database to give you the information you need! Psst, I unofficially heard that the official source is always the truest :D 

	IMPORTANT: You will NOT need to do any attack at any point on the domain lightspeedcorp.global for this challenge.

	You must solve this challenge to unlock [R-1], [R-2], [R-3-1] and [R-4-1].

	ATTACHED FILES
	None

## Solution

*Solved by my teammate*

Use namecheap DNS lookup

- https://www.namecheap.com/domains/whois/results.aspx?domain=lightspeedcorp.global

Then email the person and he will reply with the flag

## Flag

	$CDDC19${IS_IT_I_AM_FAM0US_NAO}

---

Doing dig reveals no record on lightspeedcorp.global

There is a subdomain of www on lightspeedcorp.global

	$ dig www.lightspeedcorp.global
	;; ANSWER SECTION:
	www.lightspeedcorp.global. 6269	IN	CNAME	exploit1st.github.io.
	exploit1st.github.io.	1889	IN	A	185.199.111.153
	exploit1st.github.io.	1889	IN	A	185.199.109.153
	exploit1st.github.io.	1889	IN	A	185.199.108.153
	exploit1st.github.io.	1889	IN	A	185.199.110.153

Visit exploit1st.github.io, redireected to https://the.bof.ninja/

	$ dig the.bof.ninja
	the.bof.ninja.		346	IN	CNAME	exploit1st.github.io.
	exploit1st.github.io.	118	IN	A	185.199.109.153
	exploit1st.github.io.	118	IN	A	185.199.110.153
	exploit1st.github.io.	118	IN	A	185.199.108.153
	exploit1st.github.io.	118	IN	A	185.199.111.153
