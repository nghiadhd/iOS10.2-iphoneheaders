/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSString;

@interface PKPaymentRemotePassesResponse : PKPaymentWebServiceResponse {

	NSArray* _remotePasses;
	NSString* _lastUpdated;

}

@property (nonatomic,copy,readonly) NSArray * remotePasses;              //@synthesize remotePasses=_remotePasses - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastUpdated;              //@synthesize lastUpdated=_lastUpdated - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSString *)lastUpdated;
-(NSArray *)remotePasses;
@end

