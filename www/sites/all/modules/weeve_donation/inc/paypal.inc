<?php
class Paypal {

  /**
    * Last error message(s)
    * @var array
    */
   protected $_errors = array();

  /**
   * API Credentials
   * Use the correct credentials for the environment in use (Live / Sandbox)
   * @var array
   */
   protected $_credentials = array(
      'USER' => 'dev_pp_1325213935_biz_api1.shkuro.net',
      'PWD' => 'DDN7A98GESNEHVRB',
      'SIGNATURE' => 'ATAKQ5H0oP0IU1Cndh9RYtanlQIzARHYVsId8zblSOHbgwBXDLAZIZLO',
   );

  /**
   * API endpoint
   * Live - https://api-3t.paypal.com/nvp
   * Sandbox - https://api-3t.sandbox.paypal.com/nvp
   * @var string
   */
   protected $_endPoint = 'https://api-3t.sandbox.paypal.com/nvp';

  /**
   * API Version
   * @var string
   */
   protected $_version = '84.0';

  /**
   * Make API request
   *
   * @param string $method string API method to request
   * @param array $params Additional request parameters
   * @return array / boolean Response array / boolean false on failure
   */
   public function request($method,$params = array()) {
      $this -> _errors = array();
      if( empty($method) ) {
         $this -> _errors = array('API method is missing');
         return false;
      }

      $requestParams = array(
         'METHOD' => $method,
         'VERSION' => $this -> _version
      ) + $this -> _credentials;

     // $request = http_build_query($requestParams + $params);
      $request = drupal_query_string_encode($requestParams + $params);

      $curlOptions = array (
         CURLOPT_URL => $this -> _endPoint,
         CURLOPT_VERBOSE => 1,
         CURLOPT_SSL_VERIFYPEER => true,
         CURLOPT_SSL_VERIFYHOST => 2,
         CURLOPT_CAINFO => dirname(__FILE__) . '/cacert.pem',
         CURLOPT_RETURNTRANSFER => 1,
         CURLOPT_POST => 1,
         CURLOPT_POSTFIELDS => $request,
      );
      $ch = curl_init();
      curl_setopt_array($ch,$curlOptions);

      $response = curl_exec($ch);

      if (curl_errno($ch)) {
         $this -> _errors = curl_error($ch);
         curl_close($ch);
         return false;
      } else  {
         curl_close($ch);
         $responseArray = array();
         parse_str($response,$responseArray);
         return $responseArray;
      }
   }
}