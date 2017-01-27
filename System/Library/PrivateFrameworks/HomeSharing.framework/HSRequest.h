/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSData;

@interface HSRequest : NSObject {

	NSDictionary* _arguments;
	BOOL _concurrent;
	BOOL _acceptsGzipEncoding;
	NSString* _action;
	long long _method;
	NSData* _bodyData;

}

@property (nonatomic,readonly) NSString * action;                                //@synthesize action=_action - In the implementation block
@property (getter=isConcurrent,nonatomic,readonly) BOOL concurrent;              //@synthesize concurrent=_concurrent - In the implementation block
@property (assign,nonatomic) long long method;                                   //@synthesize method=_method - In the implementation block
@property (nonatomic,readonly) double timeoutInterval; 
@property (nonatomic,copy) NSData * bodyData;                                    //@synthesize bodyData=_bodyData - In the implementation block
@property (assign,nonatomic) BOOL acceptsGzipEncoding;                           //@synthesize acceptsGzipEncoding=_acceptsGzipEncoding - In the implementation block
+(id)request;
-(id)description;
-(NSString *)action;
-(id)initWithAction:(id)arg1 ;
-(long long)method;
-(id)requestURLForBaseURL:(id)arg1 sessionID:(unsigned)arg2 ;
-(id)URLRequestForBaseURL:(id)arg1 sessionID:(unsigned)arg2 ;
-(void)setAcceptsGzipEncoding:(BOOL)arg1 ;
-(double)timeoutInterval;
-(BOOL)isConcurrent;
-(void)setValue:(id)arg1 forArgument:(id)arg2 ;
-(void)setBodyData:(NSData *)arg1 ;
-(NSData *)bodyData;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(BOOL)acceptsGzipEncoding;
-(void)setMethod:(long long)arg1 ;
@end

