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
\'_'/