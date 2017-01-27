/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VCPFingerprint : NSObject {

	NSString* _master;
	NSString* _adjusted;

}

@property (readonly) NSString * master;                //@synthesize master=_master - In the implementation block
@property (readonly) NSString * adjusted;              //@synthesize adjusted=_adjusted - In the implementation block
+(id)fingerprintWithMaster:(id)arg1 adjusted:(id)arg2 ;
-(id)init;
-(id)description;
-(NSString *)master;
-(id)initWithMaster:(id)arg1 adjusted:(id)arg2 ;
-(NSString *)adjusted;
-(BOOL)isEqualToFingerprint:(id)arg1 ;
@end

