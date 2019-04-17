const url = 'http://blynk-cloud.com/22e9f3c75fec460db242558c0952cfa2/get/V1';
const val = ""
const request = require('request');
const delay = require('delay');


setInterval(() => {
    // will execute every second

	request(url, function (error, response, body) {
	  //console.error('error:', error); // Print the error if one occurred
	  //console.log('statusCode:', response && response.statusCode); // Print the response status code if a response was received
	  
	  
	  	console.log('light', body); // Print the HTML for the Google homepage.
		
	});
}, 0.1);

 


