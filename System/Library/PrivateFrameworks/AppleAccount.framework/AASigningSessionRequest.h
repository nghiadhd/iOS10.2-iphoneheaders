/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSData;

@interface AASigningSessionRequest : AARequest {

	NSData* _sessionInfoRequestData;

}
+(Class)responseClass;
-(id)initWithURLString:(id)arg1 sessionInfoRequestData:(id)arg2 ;
-(id)urlRequest;
@end
