# Polyglot
Misc

## Challenge 
	
	DESCRIPTION
	Hello / 안녕하세요 / 您好 / こんにちは / Bonjour / ¡Hola / Guten Tag / Xin chào / Здравствуйте / Buon giorno / สวัสดีครับ / Apa kabar / Сайн байна уу

	[01] इस भाषा का पहला चरित्र झंडा बनाता है।
	[02] Karakter pertama bahasa ini yang mengibarkan bendera.
	[03] 这种语言的第一个字符构成了旗帜。
	[04] Het eerste teken van deze taal vormt de vlag.
	[05] Det første tegn på dette sprog udgør flag.
	[06] El primer caràcter d’aquest idioma constitueix la bandera.
	[07] Det første tegnet av dette språket utgjør flagget.
	[08] El primer carácter de este lenguaje lo constituye la bandera.
	[09] Thawj qhov cim ntawm hom lus no ua rau tus chij.
	[10] Prvi znak ovog jezika čini zastavu.

	Flag format is as follows and consists of uppercase and special characters:
	$CDDC19${[01][02]~[03][04][05][06]&[07][08][09][10]!}

	ATTACHED FILES
	None
## Solution

We see many languages

Google Translate each one and we find out that we need to get the first letter of each language.

	Hindi
	[01] The first character of this language creates a flag.

	Indonesian, Malay
	[02] The first character of this language is to fly the flag.

	Chinese
	[03] The first character of this language constitutes the flag.

	Dutch
	[04] The first sign of this language is the flag.

	Danish
	[05] The first sign in this language is the flag.

	Catalan
	[06] The first character of this language constitutes the flag.

	Norwegian
	[07] The first sign of this language is the flag.

	Spanish
	[08] The first character of this language is the flag.

	Hmong
	[09] The first mark of this language makes the flag.

	Croatian
	[10] The first sign of this language makes the flag.

Initially I got this which did not work.

	$CDDC19${HM~CDDC&NSHC!}

Malay and Indonesian are similar so change it...

	$CDDC19${HI~CDDC&NSHC!}

## Flag

	$CDDC19${HI~CDDC&NSHC!}
