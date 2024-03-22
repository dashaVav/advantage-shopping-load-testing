Action()
{
	int i;
	char login[10];
	int totalCountries;
	int randomIndex;
	char *randomCountry;
	char *randomCountryId;
	char combinedString[256];
	char loginWithDomain[20];
	
	lr_start_transaction("uc_02_register_user");

	
		lr_start_transaction("open_main_page");
		
			web_set_sockets_option("SSL_VERSION", "AUTO");
		
			web_add_cookie("_ga_TBPYED8WSW=GS1.1.1710268615.3.1.1710270645.0.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga=GA1.2.195396409.1710188489; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_gid=GA1.2.685693085.1710188514; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710268627.3.1.1710270163.50.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%7B%22productId%22%3A25%2C%22imageUrl%22%3A%224700%22%2C%22productName%22%3A%22Bose%20SoundLink%20Wireless%20Speaker%22%2C%22color%22%3A%7B%22code%22%3A%2255CDD5%22%2C%22name%22%3A%22TURQUOISE%22%2C%22inStock%22%3A10%2C%22%24%24hashKey%22%3A%22object%3A303%22%7D%2C%22quantity%22%3A1%2C%22price%22%3A129%2C%22hasWarranty%22%3Afalse%7D%5D%7D; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga_TBPYED8WSW=GS1.1.1710268615.3.1.1710270666.0.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga=GA1.1.195396409.1710188489; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_header("Sec-Fetch-Dest", 
				"document");
		
			web_add_header("Sec-Fetch-Mode", 
				"navigate");
		
			web_add_header("Sec-Fetch-Site", 
				"none");
		
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
				"Snapshot=t25.inf", 
				"Mode=HTML", 
				EXTRARES, 
				"Url=/services.properties", ENDITEM, 
				"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
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
				"Snapshot=t26.inf", 
				"Mode=HTML", 
				EXTRARES, 
				"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				LAST);
		
			web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");
		
			web_url("25", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/products/25", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t27.inf", 
				"Mode=HTML", 
				LAST);
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710268627.3.1.1710270678.60.0.0; DOMAIN=www.advantageonlineshopping.com");
		
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
				"Snapshot=t28.inf", 
				"Mode=HTML", 
				"EncType=text/xml; charset=UTF-8", 
				"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
				LAST);
			
			web_reg_find("Text=categoryId", LAST);
		
			web_url("categories", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t29.inf", 
				"Mode=HTML", 
				LAST);
		
			web_url("search", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t30.inf", 
				"Mode=HTML", 
				LAST);
		
			web_url("popularProducts.json", 
				"URL=https://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t31.inf", 
				"Mode=HTML", 
				LAST);
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710268627.3.1.1710270688.50.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_url("home-page.html", 
				"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t32.inf", 
				"Mode=HTML", 
				EXTRARES, 
				"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/css/images/FacebookLogo.png", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				LAST);
	
		lr_end_transaction("open_main_page", LR_AUTO);
		
		lr_think_time(5);
	
		lr_start_transaction("open_registration_page");
			
			web_reg_find("Text=<section id\=\"registerPage\">\n", LAST);
	
			web_url("register-page.html", 
				"URL=https://www.advantageonlineshopping.com/app/user/views/register-page.html", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t33.inf", 
				"Mode=HTML", 
				LAST);
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710268627.3.1.1710270734.4.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_header("SOAPAction", 
				"com.advantage.online.store.accountserviceGetCountriesRequest");
		
			web_add_auto_header("Origin", 
				"https://www.advantageonlineshopping.com");
		
			web_add_auto_header("X-Requested-With", 
				"XMLHttpRequest");
			
			web_reg_save_param_ex("ParamName=countries", "LB=<ns2:name>", "RB=</ns2:name>", "Ordinal=ALL", LAST);
			web_reg_save_param_ex("ParamName=countryIds", "LB=<ns2:isoName>", "RB=</ns2:isoName>", "Ordinal=ALL", LAST);
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
	
			totalCountries = lr_paramarr_len("countries");
			randomIndex = rand() % totalCountries + 1;
			randomCountry = lr_paramarr_idx("countries", randomIndex);
			randomCountryId = lr_paramarr_idx("countryIds", randomIndex);
			sprintf(combinedString, "%s,%s", randomCountry, randomCountryId);
		
		lr_end_transaction("open_registration_page",LR_AUTO);
		
		lr_think_time(20);
	
		lr_start_transaction("register");
		
			for (i = 0; i < 9; i++) {
	    		login[i] = 'a' + rand() % 26;
			}
			login[9] = '\0';
			lr_save_string(login, "login");
	
	    	sprintf(loginWithDomain, "%s@edu.com", login);
			lr_save_string(loginWithDomain, "email");
	
			web_add_header("SOAPAction", 
				"com.advantage.online.store.accountserviceAccountCreateRequest");
		
			web_reg_find("Text=New user created successfully.", LAST);
				
			web_custom_request("AccountCreateRequest", 
				"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountCreateRequest", 
				"Method=POST", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/xml", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t35.inf", 
				"Mode=HTML", 
				"EncType=text/xml; charset=UTF-8", 
				"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountCreateRequest xmlns=\"com.advantage.online.store.accountservice\"><accountType>USER</accountType><address>{address}</address><allowOffersPromotion>true</allowOffersPromotion><cityName>{cityName}</cityName><countryId>{countryId}</countryId><email>{email}</email>"
				"<firstName>{firstName}</firstName><lastName>{lastName}</lastName><loginName>{login}</loginName><password>{password}</password><phoneNumber>{phoneNumber}</phoneNumber><stateProvince>{stateProvince}</stateProvince><zipcode>{zipcode}</zipcode></AccountCreateRequest></soap:Body></soap:Envelope>", 
				LAST);
		lr_end_transaction("register",LR_AUTO);
		
		
		lr_start_transaction("login");
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710268627.3.1.1710270822.60.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_header("SOAPAction", 
				"com.advantage.online.store.accountserviceAccountLoginRequest");
			
			web_reg_save_param_regexp("ParamName=authorization","RegExp=<ns2:t_authorization>(.*?)</ns2:t_authorization>", LAST);
			web_reg_save_param_regexp("ParamName=userId", "RegExp=<ns2:userId>(\\d+)</ns2:userId>", LAST);
	
			web_reg_find("Text=Login Successful", LAST);
				
			web_custom_request("AccountLoginRequest", 
				"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
				"Method=POST", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/xml", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t36.inf", 
				"Mode=HTML", 
				"EncType=text/xml; charset=UTF-8", 
				"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email>{email}</email><loginPassword>{password}</loginPassword><loginUser>{login}</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
				LAST);
		
			web_set_sockets_option("INITIAL_AUTH", "BASIC");
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710268627.3.1.1710270823.59.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_revert_auto_header("Origin");
		
			web_revert_auto_header("X-Requested-With");
			
			web_add_header("Authorization", "Basic {authorization}");
			
			web_reg_find("Text=productsInCart", LAST);
	
			web_url("{userId}", 
				"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{userId}", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t37.inf", 
				"Mode=HTML", 
				LAST);
	
		lr_end_transaction("login",LR_AUTO);
			
		
	lr_end_transaction("uc_02_register_user", LR_AUTO);

	
	return 0;
}