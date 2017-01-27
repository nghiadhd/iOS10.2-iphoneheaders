/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSVPushNotificationParameters, SSURLConnectionResponse, NSString;

@interface PushNotificationRequestOperation : ISOperation {

	SSVPushNotificationParameters* _parameters;
	SSURLConnectionResponse* _response;
	NSString* _userAgent;

}

@property (copy) NSString * userAgent; 
@property (readonly) SSURLConnectionResponse * URLResponse; 
-(BOOL)_loadResponseWithAccountIdentifier:(id)arg1 URL:(id)arg2 error:(id*)arg3 ;
-(id)initWithPushNotificationParameters:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(SSURLConnectionResponse *)URLResponse;
@end

