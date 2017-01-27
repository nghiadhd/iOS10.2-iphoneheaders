/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSWebServerDelegate.h>
#import <libobjc.A.dylib/VSWebServerConnectionDelegate.h>

@class NSString, NSNumber, VSWebServer, NSURL;

@interface VSCookieServer : NSObject <VSWebServerDelegate, VSWebServerConnectionDelegate> {

	NSString* _cookieName;
	NSString* _cookieValue;
	NSNumber* _cookieMaxAge;
	VSWebServer* _server;

}

@property (nonatomic,retain) VSWebServer * server;                  //@synthesize server=_server - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (nonatomic,copy) NSString * cookieName;                   //@synthesize cookieName=_cookieName - In the implementation block
@property (nonatomic,copy) NSString * cookieValue;                  //@synthesize cookieValue=_cookieValue - In the implementation block
@property (nonatomic,copy) NSNumber * cookieMaxAge;                 //@synthesize cookieMaxAge=_cookieMaxAge - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(VSWebServer *)server;
-(NSURL *)URL;
-(void)setServer:(VSWebServer *)arg1 ;
-(void)webServerConnection:(id)arg1 didReceiveRequest:(id)arg2 ;
-(void)webServer:(id)arg1 didReceiveError:(id)arg2 ;
-(void)webServer:(id)arg1 didOpenConnection:(id)arg2 ;
-(void)setCookieMaxAge:(NSNumber *)arg1 ;
-(NSString *)cookieName;
-(NSString *)cookieValue;
-(id)cookieGetter;
-(NSNumber *)cookieMaxAge;
-(id)cookieSetter;
-(void)setCookieName:(NSString *)arg1 ;
-(void)setCookieValue:(NSString *)arg1 ;
@end

