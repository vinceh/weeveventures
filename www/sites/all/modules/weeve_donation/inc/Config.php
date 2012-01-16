<?php
/****************************************************
constants.php

This is the configuration file for the samples.This file
defines the parameters needed to make an API call.

PayPal includes the following API Signature for making API
calls to the PayPal sandbox:

API Username 	sdk-three_api1.sdk.com
API Password 	QFZCWN5HZM8VBG7Q
API Signature 	A.d9eRKfd1yVkRrtmMfCFLTqa6M9AyodL0SJkhYztxUi8W9pCXF6.4NI

Called by CallerService.php.
****************************************************/
/**
# API user: The user that is identified as making the call. you can
# also use your own API username that you created on PayPal�s sandbox
# or the PayPal live site
*/

define('API_USERNAME', variable_get('pp_api_username', ''));

/**
# API_password: The password associated with the API user
# If you are using your own API username, enter the API password that
# was generated by PayPal below
# IMPORTANT - HAVING YOUR API PASSWORD INCLUDED IN THE MANNER IS NOT
# SECURE, AND ITS ONLY BEING SHOWN THIS WAY FOR TESTING PURPOSES
*/

define('API_PASSWORD', variable_get('pp_api_password', ''));

/**
# API_Signature:The Signature associated with the API user. which is generated by paypal.
*/

define('API_SIGNATURE', variable_get('pp_api_signature', ''));

/**
# Endpoint: this is the server URL which you have to connect for submitting your API request.
*/

define('API_ENDPOINT', 'https://svcs.sandbox.paypal.com/');



/**
USE_PROXY: Set this variable to TRUE to route all the API requests through proxy.
like define('USE_PROXY',TRUE);
*/
define('USE_PROXY',FALSE);
/**
PROXY_HOST: Set the host name or the IP address of proxy server.
PROXY_PORT: Set proxy port.

PROXY_HOST and PROXY_PORT will be read only if USE_PROXY is set to TRUE
*/
define('PROXY_HOST', '127.0.0.1');
define('PROXY_PORT', '808');


// Ack related and Header constants
define('ACK_SUCCESS', 'SUCCESS');
define('ACK_SUCCESS_WITH_WARNING', 'SUCCESSWITHWARNING');
define('APPLICATION_ID', variable_get('pp_api_app_id', ''));
define('DEVICE_ID','weeve');
define('PAYPAL_REDIRECT_URL', 'https://www.sandbox.paypal.com/webscr&cmd=');
define('DEVELOPER_PORTAL', 'https://developer.paypal.com');
define('LOGFILENAME', '../Log/logdata.log');
define('DEVICE_IPADDRESS', '127.0.0.1');
//This SDK supports only Name Value(NV) Request and Response Data Formats. for XML,SOAP,JSON use the SOAP SDK from X.com
define('REQUEST_FORMAT','NV');
define('RESPONSE_FORMAT','NV');
define('X_PAYPAL_REQUEST_SOURCE','PHP_NVP_SDK_V1.1');

// all the PayPal Header parameters are set in lib/callerservice.php
?>