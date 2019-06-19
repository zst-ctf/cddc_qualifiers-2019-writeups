<?php
$x = ".1234567890-ABCDEFGHIJKLMNOPQRSTUVWXYZ-qwertyuiopasdfghjklzxcvbnm.";

if( strpos($x, '_') != false )
        exit("1\'_'/");

if( stripos($x, '_') != false )
        exit("2\'_'/");

if( strrpos($x, '_') != false )
        exit("3\'_'/");

if( strripos($x, '_') != false )
        exit("4\'_'/");

if( strstr($x, '_') != false )
        exit("5\'_'/");

if( strpbrk($x, '_') != false )
        exit("6\'_'/");

//if( preg_match("/[a-z][0-9._]/", $x) )
//        exit("7\'_'/");

if( preg_match("/ABCDEFGHIJKLMNOPQRSTUVWXYZ/", $x) )
        exit("8\'_'/");

if( isset($_GET["_1234567890-ABCDEFGHIJKLMNOPQRSTUVWXYZ-qwertyuiopasdfghjklzxcvbnm_"]) ) {
        if( $_GET['_1234567890-ABCDEFGHIJKLMNOPQRSTUVWXYZ-qwertyuiopasdfghjklzxcvbnm_'] == "🚣‍♀️ 🚣🏻‍♀️ 🚣🏼‍♀️ 🚣🏽‍♀️ 🚣🏾‍♀️ 🚣🏿‍♀️ 🚣‍♂️ 🚣🏻‍♂️ 🚣🏼‍♂️ 🚣🏽‍♂️ 🚣🏾‍♂️ 🚣🏿‍♂️" )
                echo $FLAG;
}
?>
\'_'/