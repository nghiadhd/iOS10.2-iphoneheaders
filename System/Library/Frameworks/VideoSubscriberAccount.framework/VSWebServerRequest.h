/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
@class NSString, NSURL, NSDictionary;

@interface VSWebServerRequest : NSObject {

	CFHTTPServerRequestRef _request;

}

@property (nonatomic,readonly) CFHTTPServerRequestRef request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) NSString * HTTPVersion; 
@property (nonatomic,copy,readonly) NSString * method; 
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSString * path; 
@property (nonatomic,copy,readonly) NSDictionary * headerFields; 
-(id)description;
-(CFHTTPServerRequestRef)request;
-(NSString *)path;
-(NSURL *)URL;
-(NSString *)method;
-(id)initWithRequest:(CFHTTPServerRequestRef)arg1 ;
-(id)connection;
-(NSDictionary *)headerFields;
-(NSString *)HTTPVersion;
-(id)bodyStream;
@end

