/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMDDevice, NSDate;

@interface HMDUserPushCache : NSObject {

	HMDDevice* _device;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) HMDDevice * device;                         //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                        //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
-(id)init;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(HMDDevice *)device;
-(BOOL)isExpired;
-(id)initWithDevice:(id)arg1 ;
@end

