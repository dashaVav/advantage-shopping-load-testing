Action()
{
	int i;
	int randProductId;
	char randProductIdChar[10];
	char email[21];
	char subject[50];
		
	lr_start_transaction("uc_01_send_feedback");
		
		lr_start_transaction("open_main_page");
	
			web_set_sockets_option("SSL_VERSION", "AUTO");
		
			web_add_cookie("_ga_TBPYED8WSW=GS1.1.1710268615.3.1.1710270119.0.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga=GA1.2.195396409.1710188489; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_gid=GA1.2.685693085.1710188514; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710268627.3.1.1710268933.54.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%7B%22productId%22%3A25%2C%22imageUrl%22%3A%224700%22%2C%22productName%22%3A%22Bose%20SoundLink%20Wireless%20Speaker%22%2C%22color%22%3A%7B%22code%22%3A%2255CDD5%22%2C%22name%22%3A%22TURQUOISE%22%2C%22inStock%22%3A10%2C%22%24%24hashKey%22%3A%22object%3A303%22%7D%2C%22quantity%22%3A1%2C%22price%22%3A129%2C%22hasWarranty%22%3Afalse%7D%5D%7D; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_auto_header("Sec-Fetch-Dest", 
				"document");
		
			web_add_auto_header("Sec-Fetch-Mode", 
				"navigate");
		
			web_add_auto_header("Sec-Fetch-Site", 
				"none");
		
			web_add_cookie("_ga_TBPYED8WSW=GS1.1.1710268615.3.1.1710270148.0.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga=GA1.1.195396409.1710188489; DOMAIN=www.advantageonlineshopping.com");
		
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
				"Snapshot=t24.inf", 
				"Mode=HTML", 
				EXTRARES, 
				"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/main.min.js", ENDITEM, 
				"Url=/services.properties", ENDITEM, 
				"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
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
				"Snapshot=t25.inf", 
				"Mode=HTML", 
				EXTRARES, 
				"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				LAST);
		
			web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");
		
			web_url("25", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/products/25", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t26.inf", 
				"Mode=HTML", 
				LAST);
		
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
				"Snapshot=t27.inf", 
				"Mode=HTML", 
				"EncType=text/xml; charset=UTF-8", 
				"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
				LAST);
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710268627.3.1.1710270153.60.0.0; DOMAIN=www.advantageonlineshopping.com");
			
			web_reg_find("Text=categoryId", LAST);
		
			web_url("categories", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t28.inf", 
				"Mode=HTML", 
				LAST);
		
			web_url("search", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t29.inf", 
				"Mode=HTML", 
				LAST);
		
			web_url("popularProducts.json", 
				"URL=https://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t30.inf", 
				"Mode=HTML", 
				LAST);
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710268627.3.1.1710270163.50.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_url("home-page.html", 
				"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t31.inf", 
				"Mode=HTML", 
				EXTRARES, 
				"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				LAST);
	
		lr_end_transaction("open_main_page", LR_AUTO);
		
		lr_think_time(5);
	
		lr_start_transaction("select_item_for_feedback");
		
			web_reg_find("Search=Body", "Text=\{\"productId\":", "SaveCount=productId_Count", LAST);
			
			web_reg_find("Text=\"categoryId\":{categoryId}", LAST);
			
			web_url("products", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/{categoryId}/products", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t32.inf", 
				"Mode=HTML", 
				LAST);
			
	
		lr_end_transaction("select_item_for_feedback",LR_AUTO);
		
		lr_think_time(5);
	
		lr_start_transaction("send_feedback");
			randProductId = rand() % (atoi(lr_eval_string("{productId_Count}")));
			sprintf(randProductIdChar, "%d", randProductId);
			lr_save_string(randProductIdChar, "randProductIdVariable");
			
			for (i = 0; i < 10; i++) {
	    		email[i] = 'a' + rand() % 26;
			}
			snprintf(email + 10, sizeof(email) - 10, "@email.com");
			email[20] = '\0';
			lr_save_string(email, "email");
			
			for (i = 0; i < 49; i++) {
	    		subject[i] = 'a' + rand() % 26;
	    		if (i % 10 == 1) {
	    			subject[i] = ' ';
	    		}
			}
			subject[49] = '\0';
			lr_save_string(subject, "subject");
		
			web_add_header("Origin", 
				"https://www.advantageonlineshopping.com");
			
			web_reg_find("Text=Thank you for contacting Advantage support", LAST);
				
			web_custom_request("email", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/support/contact_us/email", 
				"Method=POST", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t33.inf", 
				"Mode=HTML", 
				"EncType=application/json;charset=utf-8", 
				"Body={\"categoryId\":{categoryId},\"email\":\"{email}\",\"productId\":{randProductIdVariable},\"text\":\"{subject}\"}", 
				LAST);
	
		lr_end_transaction("send_feedback",LR_AUTO);
	
	lr_end_transaction("uc_01_send_feedback", LR_AUTO);

	return 0;
}
