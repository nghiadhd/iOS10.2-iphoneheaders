/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class XPCClient, ASDRequestOptions, ASDRequestResponse;

@interface RequestOperation : ISOperation {

	XPCClient* _client;
	ASDRequestOptions* _options;
	ASDRequestResponse* _response;

}

@property (nonatomic,readonly) XPCClient * client;                         //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) ASDRequestOptions * options;                //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) ASDRequestResponse * response;              //@synthesize response=_response - In the implementation block
-(id)initWithClient:(id)arg1 options:(id)arg2 ;
-(void)_setResponse:(id)arg1 ;
-(ASDRequestResponse *)response;
-(ASDRequestOptions *)options;
-(XPCClient *)client;
@end

