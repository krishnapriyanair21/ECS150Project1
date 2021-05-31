#define RAPIDJSON_HAS_STDSTRING 1

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#include <iostream>
#include <map>
#include <string>
#include <sstream>

#include "DepositService.h"
#include "Database.h"
#include "ClientError.h"
#include "HTTPClientResponse.h"
#include "HttpClient.h"

#include "rapidjson/document.h"
#include "rapidjson/prettywriter.h"
#include "rapidjson/istreamwrapper.h"
#include "rapidjson/stringbuffer.h"

using namespace rapidjson;
using namespace std;

// Error-checking:
// - missing amount or stripe_token arguments
// - deposit amount is negative
// - charge amount less than 50 cents
// - potential stripe API errors?

DepositService::DepositService() : HttpService("/deposits") { }

void DepositService::post(HTTPRequest *request, HTTPResponse *response) {

}

void DepositService::get(HTTPRequest *request, HTTPResponse *response) {

}
