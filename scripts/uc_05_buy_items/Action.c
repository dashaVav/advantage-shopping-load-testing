Action()
{
	char sessionIdValue[100];
	
	lr_start_transaction("uc_05_buy_items");

		
		lr_start_transaction("open_main_page");
	
			web_set_sockets_option("SSL_VERSION", "AUTO");
		
			web_add_cookie("_ga_TBPYED8WSW=GS1.1.1710937401.6.1.1710938688.0.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga=GA1.1.195396409.1710188489; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710937950.6.1.1710938734.30.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_gid=GA1.2.1959558917.1710937946; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_auto_header("Sec-Fetch-Dest", 
				"document");
		
			web_add_auto_header("Sec-Fetch-Mode", 
				"navigate");
		
			web_add_auto_header("Sec-Fetch-Site", 
				"none");
		
			web_add_cookie("_ga_TBPYED8WSW=GS1.1.1710937401.6.1.1710938931.0.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_header("Sec-Fetch-User", 
				"?1");
		
			web_add_header("Upgrade-Insecure-Requests", 
				"1");
			
			web_reg_find("Text=Product Added Successfully", LAST);
		
			web_url("www.advantageonlineshopping.com", 
				"URL=https://www.advantageonlineshopping.com/", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=", 
				"Snapshot=t10.inf", 
				"Mode=HTML", 
				EXTRARES, 
				"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/main.min.js", ENDITEM, 
				"Url=/services.properties", ENDITEM, 
				"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				LAST);
		
			web_add_auto_header("Sec-Fetch-Dest", 
				"empty");
		
			web_add_auto_header("Sec-Fetch-Mode", 
				"cors");
		
			web_add_auto_header("Sec-Fetch-Site", 
				"same-origin");
		
			web_reg_find("Text=parameters", LAST);
			
			web_url("ALL", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t11.inf", 
				"Mode=HTML", 
				LAST);
		
			web_add_cookie("_ga=GA1.2.195396409.1710188489; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_header("Origin", 
				"https://www.advantageonlineshopping.com");
		
			web_add_header("SOAPAction", 
				"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");
		
			web_add_header("X-Requested-With", 
				"XMLHttpRequest");
			
			web_reg_find("Text=<ns2:GetAccountConfigurationResponse xmlns:ns2\=\"com.advantage.online.store.accountservice\">", LAST);
		
			web_custom_request("GetAccountConfigurationRequest", 
				"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
				"Method=POST", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/xml", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t12.inf", 
				"Mode=HTML", 
				"EncType=text/xml; charset=UTF-8", 
				"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
				LAST);
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710937950.6.1.1710939001.60.0.0; DOMAIN=www.advantageonlineshopping.com");
			
			web_reg_find("Text=categoryId", LAST);
		
			web_url("categories", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t13.inf", 
				"Mode=HTML", 
				LAST);
		
			web_url("search", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t14.inf", 
				"Mode=HTML", 
				LAST);
		
			web_url("popularProducts.json", 
				"URL=https://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t15.inf", 
				"Mode=HTML", 
				LAST);
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710937950.6.1.1710939020.41.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_url("home-page.html", 
				"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t16.inf", 
				"Mode=HTML", 
				EXTRARES, 
				"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				LAST);
		lr_end_transaction("open_main_page", LR_AUTO);
	
		lr_think_time(5);
	
		lr_start_transaction("login");
	
			web_add_header("Origin", 
				"https://www.advantageonlineshopping.com");
		
			web_add_header("SOAPAction", 
				"com.advantage.online.store.accountserviceAccountLoginRequest");
		
			web_add_header("X-Requested-With", 
				"XMLHttpRequest");
		
			web_reg_save_param_regexp("ParamName=authorization","RegExp=<ns2:t_authorization>(.*?)</ns2:t_authorization>", LAST);
			web_reg_save_param_regexp("ParamName=userId", "RegExp=<ns2:userId>(\\d+)</ns2:userId>", LAST);
			web_reg_save_param_xpath("ParamName=sessionId","QueryString=/SOAP-ENV:Envelope[1]/SOAP-ENV:Body[1]/ns2:AccountLoginResponse[1]/ns2:StatusMessage[1]/ns2:sessionId[1]/text()[1]","ReturnXml=No",SEARCH_FILTERS,"Scope=Body",LAST);
			
			web_reg_find("Text=Login Successful", LAST);
		
			web_custom_request("AccountLoginRequest", 
				"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
				"Method=POST", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/xml", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t17.inf", 
				"Mode=HTML", 
				"EncType=text/xml; charset=UTF-8", 
				"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>{password}</loginPassword><loginUser>{login}</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
				LAST);
		
			web_set_sockets_option("INITIAL_AUTH", "BASIC");
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710937950.6.1.1710939069.60.0.0; DOMAIN=www.advantageonlineshopping.com");
			
			web_add_header("Authorization", "Basic {authorization}");
				
			web_reg_find("Text=productsInCart", LAST);
		
			web_url("{userId}", 
				"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{userId}", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t18.inf", 
				"Mode=HTML", 
				LAST);
	
		lr_end_transaction("login",LR_AUTO);
		
		lr_think_time(5);
	
		lr_start_transaction("search_request");
			
			web_reg_find("Text=categoryName\":\"{category}\"", LAST);
			web_reg_save_param_ex("ParamName=products", "LB=productId\":", "RB=,\"", "Ordinal=ALL", LAST);
			
			web_url("search", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/products/search?name={category}&quantityPerEachCategory=10", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t8.inf", 
				"Mode=HTML", 
				LAST);
			
			lr_save_string(lr_paramarr_random("products"),"productId");
			
			web_reg_find("Text=categoryName\":\"MICE\"", LAST);
			web_reg_find("Text=categoryName\":\"LAPTOPS\"", LAST);
			web_reg_find("Text=categoryName\":\"HEADPHONES\"", LAST);
			web_reg_find("Text=categoryName\":\"TABLETS\"", LAST);
			web_reg_find("Text=categoryName\":\"SPEAKERS\"", LAST);
	
			web_url("all_data", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t9.inf", 
				"Mode=HTML", 
				LAST);
			
		lr_end_transaction("search_request",LR_AUTO);
		
		lr_think_time(5);
		
		lr_start_transaction("open_search_page");
			
			web_reg_find("Text=article id\=\"searchPage\"", LAST);
		
			web_url("search-page.html", 
				"URL=https://www.advantageonlineshopping.com/app/views/search-page.html", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t12.inf", 
				"Mode=HTML", 
				LAST);
		
		lr_end_transaction("open_search_page",LR_AUTO);
		
		lr_think_time(5);
		
		lr_start_transaction("open_item_page");
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710937950.6.1.1710938338.60.0.0; DOMAIN=www.advantageonlineshopping.com");
				
			web_reg_find("Text=productName", LAST);
				
			web_url("product-page.html", 
				"URL=https://www.advantageonlineshopping.com/app/views/product-page.html", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t13.inf", 
				"Mode=HTML", 
				LAST);
		
		lr_end_transaction("open_item_page",LR_AUTO);
		
		lr_think_time(5);
	
		lr_start_transaction("add_to_card");
		
			web_reg_save_param_regexp("ParamName=colors", "RegExp=\"code\":\\s*\"([^\"]+)\"", "Ordinal=All", LAST);
			
			web_reg_find("Text=\"productId\":{productId},", LAST);
				web_url("{productId}", 
					"URL=https://www.advantageonlineshopping.com/catalog/api/v1/products/{productId}", 
					"TargetFrame=", 
					"Resource=0", 
					"RecContentType=application/json", 
					"Referer=https://www.advantageonlineshopping.com/", 
					"Snapshot=t25.inf", 
					"Mode=HTML", 
					LAST);
			
			lr_save_string(lr_paramarr_random("colors"),"color");
	
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710937950.6.1.1710939192.60.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_header("Origin", 
				"https://www.advantageonlineshopping.com");
			
			web_add_header("Authorization", "Basic {authorization}");
			
			web_reg_find("Text=\"productId\":{productId},", LAST);
			
			web_submit_data("{productId}", 
				"Action=https://www.advantageonlineshopping.com/order/api/v1/carts/{userId}/product/{productId}/color/{color}?quantity=1", 
				"Method=POST", 
				"EncType=",
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t25.inf", 
				"Mode=HTML", 
				ITEMDATA, 
				"Name=sessionId", "Value={sessionIdValue}", ENDITEM, 
				LAST);
	
		lr_end_transaction("add_to_card",LR_AUTO);
		
		lr_think_time(5);
		
		lr_start_transaction("open_card");
	
			web_add_header("Authorization", "Basic {authorization}");
			
			web_reg_find("Text=\"productId\":{productId},", LAST);
			
			web_url("{userId}", 
				"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{userId}", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t26.inf", 
				"Mode=HTML", 
				LAST);
			
			web_reg_find("Text=<div id\=\"shoppingCart\">", LAST);
		
			web_url("shoppingCart.html", 
				"URL=https://www.advantageonlineshopping.com/app/views/shoppingCart.html", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t27.inf", 
				"Mode=HTML", 
				LAST);
		lr_end_transaction("open_card", LR_AUTO);
	
		lr_think_time(5);
	
		lr_start_transaction("fill_details_for_purchase");
	
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710937950.6.1.1710939256.60.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_header("SOAPAction", 
				"com.advantage.online.store.accountserviceGetAccountByIdRequest");
		
			web_add_auto_header("Origin", 
				"https://www.advantageonlineshopping.com");
		
			web_add_auto_header("X-Requested-With", 
				"XMLHttpRequest");
			
			web_add_header("Authorization", "Basic {authorization}");
			
			web_reg_find("Text=<ns2:loginName>{login}</ns2:loginName>", LAST);
	
			web_custom_request("GetAccountByIdRequest", 
				"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountByIdRequest", 
				"Method=POST", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/xml", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t28.inf", 
				"Mode=HTML", 
				"EncType=text/xml; charset=UTF-8", 
				"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{userId}</accountId><base64Token>Basic {authorization}</base64Token></GetAccountByIdRequest></soap:Body></soap:Envelope>", 
				LAST);
	
			web_revert_auto_header("Origin");
		
			web_revert_auto_header("X-Requested-With");
		
			web_add_header("Authorization", "Basic {authorization}");
			
			web_reg_find("Text=\"userId\":{userId}", LAST);
					
			web_url("{userId}", 
				"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{userId}", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t30.inf", 
				"Mode=HTML", 
				LAST);
			
			lr_save_string(lr_eval_string("{sessionId}"), "sessionIdValue");
		
			web_add_auto_header("Origin", 
				"https://www.advantageonlineshopping.com");
			
			web_add_header("Authorization", "Basic {authorization}");
			
			web_reg_find("Text=\"code\":\"Ok\"", LAST);
		
			web_custom_request("shippingcost", 
				"URL=https://www.advantageonlineshopping.com/order/api/v1/shippingcost/", 
				"Method=POST", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t31.inf", 
				"Mode=HTML", 
				"EncType=application/json;charset=utf-8", 
				"Body={\"seaddress\":{\"addressLine1\":\"\",\"addressLine2\":\"\",\"city\":\"\",\"country\":\"us\",\"postalCode\":\"\",\"state\":\"\"}," 
					"\"secustomerName\":\"{login} \",\"secustomerPhone\":\"\",\"senumberOfProducts\":1,\"setransactionType\":\"SHIPPING_COST\"," 
					"\"sessionId\":\"{sessionIdValue}\"}",
				LAST);
		
			web_add_header("SOAPAction", 
				"com.advantage.online.store.accountserviceGetAccountPaymentPreferencesRequest");
		
			web_add_header("X-Requested-With", 
				"XMLHttpRequest");
			
			web_add_header("Authorization", "Basic {authorization}");
		
			web_custom_request("GetAccountPaymentPreferencesRequest", 
				"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountPaymentPreferencesRequest", 
				"Method=POST", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/xml", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t32.inf", 
				"Mode=HTML", 
				"EncType=text/xml; charset=UTF-8", 
				"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{userId}</accountId><base64Token>Basic {authorization}</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>", 
				LAST);
		
			web_revert_auto_header("Origin");
		
			web_url("orderPayment-page.html", 
				"URL=https://www.advantageonlineshopping.com/app/order/views/orderPayment-page.html", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t33.inf", 
				"Mode=HTML", 
				LAST);
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710937950.6.1.1710939316.60.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_header("SOAPAction", 
				"com.advantage.online.store.accountserviceGetCountriesRequest");
		
			web_add_auto_header("Origin", 
				"https://www.advantageonlineshopping.com");
		
			web_add_auto_header("X-Requested-With", 
				"XMLHttpRequest");
			
			web_reg_find("Text=<ns2:Country><ns2:id>", LAST);
			
			web_custom_request("GetCountriesRequest", 
				"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetCountriesRequest", 
				"Method=POST", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/xml", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t34.inf", 
				"Mode=HTML", 
				"EncType=text/xml; charset=UTF-8", 
				"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
				LAST);
	
		lr_end_transaction("fill_details_for_purchase",LR_AUTO);
		
		lr_think_time(5);
	
		lr_start_transaction("pay");
	
			web_add_auto_header("SOAPAction", 
				"com.advantage.online.store.accountserviceAddSafePayMethodRequest");
		
			web_add_header("Authorization", "Basic {authorization}");
			
			web_reg_find("Text=SafePay data updated successfully", LAST);
				
			web_custom_request("AddSafePayMethodRequest", 
				"URL=https://www.advantageonlineshopping.com/accountservice/ws/AddSafePayMethodRequest", 
				"Method=POST", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/xml", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t35.inf", 
				"Mode=HTML", 
				"EncType=text/xml; charset=UTF-8", 
				"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AddSafePayMethodRequest xmlns=\"com.advantage.online.store.accountservice\"><safePayUsername>{login}</safePayUsername><accountId>{userId}</accountId><safePayPassword>{password}</safePayPassword><base64Token>Basic {authorization}</base64Token></"
				"AddSafePayMethodRequest></soap:Body></soap:Envelope>", 
				LAST);
	
			web_revert_auto_header("SOAPAction");
	
			web_revert_auto_header("X-Requested-With");
		
			web_add_header("Authorization", "Basic {authorization}");
			
			web_reg_find("Text=\"code\":\"Ok\"", LAST);
				
			web_custom_request("{userId}", 
				"URL=https://www.advantageonlineshopping.com/order/api/v1/orders/users/{userId}", 
				"Method=POST", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t38.inf", 
				"Mode=HTML", 
				"EncType=application/json", 
				"Body={\"orderPaymentInformation\":{\"Transaction_AccountNumber\":\"{userId}\",\"Transaction_Currency\":\"USD\",\"Transaction_CustomerPhone\":899999,\"Transaction_MasterCredit_CVVNumber\":\"\",\"Transaction_MasterCredit_CardNumber\":\"4886\",\"Transaction_MasterCredit_CustomerName\":\"\",\"Transaction_MasterCredit_ExpirationDate\":\"122027\",\"Transaction_PaymentMethod\":\"SafePay\",\"Transaction_ReferenceNumber\":0,\"Transaction_SafePay_Password\":\"{password}\",\"Transaction_SafePay_UserName\":\""
				"{login}\",\"Transaction_TransactionDate\":\"20032024\",\"Transaction_Type\":\"PAYMENT\"},\"orderShippingInformation\":{\"Shipping_Address_Address\":\"SA\",\"Shipping_Address_City\":\"ASA\",\"Shipping_Address_CountryCode\":40,\"Shipping_Address_CustomerName\":\"DASHA VAV\",\"Shipping_Address_CustomerPhone\":8999999999,\"Shipping_Address_PostalCode\":233,\"Shipping_Address_State\":\"ASD\",\"Shipping_Cost\":179.99,\"Shipping_NumberOfProducts\":1,\"Shipping_TrackingNumber\":0},\"purchasedProducts\":[{\""
				"hexColor\":\"{color}\",\"productId\":{productId},\"quantity\":1,\"hasWarranty\":false}]}", 
				LAST);
		
	
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710937950.6.1.1710939460.60.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_header("Authorization", "Basic {authorization}");
			
			web_reg_find("Text=\"productsInCart\":[]", LAST);
		
			web_custom_request("{userId}", 
				"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{userId}", 
				"Method=DELETE", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t39.inf", 
				"Mode=HTML", 
				LAST);
		
		lr_end_transaction("pay",LR_AUTO);
		
		
	lr_end_transaction("uc_05_buy_items", LR_AUTO);

	return 0;
}