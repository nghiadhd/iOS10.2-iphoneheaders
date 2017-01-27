/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAAppleIDSettingsRequest.h>

@class NSString;

@interface AAPaymentSummaryRequest : AAAppleIDSettingsRequest {

	NSString* _secondaryAuthToken;

}

@property (nonatomic,copy) NSString * secondaryAuthToken;              //@synthesize secondaryAuthToken=_secondaryAuthToken - In the implementation block
+(Class)responseClass;
-(NSString *)secondaryAuthToken;
-(void)setSecondaryAuthToken:(NSString *)arg1 ;
-(id)urlRequest;
-(id)urlString;
@end

