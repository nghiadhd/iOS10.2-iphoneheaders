/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface WBSFormAutoFillCorrectionSet : NSObject {

	NSString* _domain;
	NSDictionary* _fingerprintsToClassifications;

}

@property (nonatomic,readonly) NSString * domain;                                         //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSDictionary * fingerprintsToClassifications;              //@synthesize fingerprintsToClassifications=_fingerprintsToClassifications - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)domain;
-(NSDictionary *)fingerprintsToClassifications;
-(id)initWithDomain:(id)arg1 fingerprintsToClassifications:(id)arg2 ;
@end
