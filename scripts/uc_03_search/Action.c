Action()
{
	lr_start_transaction("uc_03_search");
	

		lr_start_transaction("open_main_page");
	
			web_set_sockets_option("SSL_VERSION", "AUTO");
		
			web_add_cookie("_ga_TBPYED8WSW=GS1.1.1710937401.6.1.1710938182.0.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga=GA1.2.195396409.1710188489; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710937950.6.1.1710938081.57.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_gid=GA1.2.1959558917.1710937946; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_auto_header("Sec-Fetch-Dest", 
				"document");
		
			web_add_auto_header("Sec-Fetch-Mode", 
				"navigate");
		
			web_add_auto_header("Sec-Fetch-Site", 
				"none");
		
			web_add_cookie("_ga_TBPYED8WSW=GS1.1.1710937401.6.1.1710938208.0.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga=GA1.1.195396409.1710188489; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_header("Sec-Fetch-User", 
				"?1");
		
			web_add_header("Upgrade-Insecure-Requests", 
				"1");
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710937950.6.1.1710938258.40.0.0; DOMAIN=www.advantageonlineshopping.com");
			
			web_reg_find("Text=Product Added Successfully", LAST);
		
			web_url("www.advantageonlineshopping.com", 
				"URL=https://www.advantageonlineshopping.com/", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=", 
				"Snapshot=t1.inf", 
				"Mode=HTML", 
				EXTRARES, 
				"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/main.min.js", ENDITEM, 
				"Url=/services.properties", ENDITEM, 
				"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/css/images/GoUp.png", ENDITEM, 
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
				"Snapshot=t2.inf", 
				"Mode=HTML", 
				EXTRARES, 
				"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				LAST);
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710937950.6.1.1710938238.60.0.0; DOMAIN=www.advantageonlineshopping.com");
		
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
				"Snapshot=t3.inf", 
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
				"Snapshot=t4.inf", 
				"Mode=HTML", 
				LAST);
		
			web_url("search", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t5.inf", 
				"Mode=HTML", 
				LAST);
		
			web_url("popularProducts.json", 
				"URL=https://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t6.inf", 
				"Mode=HTML", 
				LAST);
		
			web_url("home-page.html", 
				"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t7.inf", 
				"Mode=HTML", 
				EXTRARES, 
				"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				LAST);
	
		lr_end_transaction("open_main_page", LR_AUTO);
		
		lr_think_time(5);
	
		lr_start_transaction("search_request");
		
			web_reg_find("Text=categoryName\":\"{category}\"", LAST);
		
			web_url("search", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/products/search?name={category}&quantityPerEachCategory=10", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t8.inf", 
				"Mode=HTML", 
				LAST);
		
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
	
	
	lr_end_transaction("uc_03_search", LR_AUTO);

	return 0;
}