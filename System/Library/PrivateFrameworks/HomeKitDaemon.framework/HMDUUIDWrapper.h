/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDFieldWrapper.h>

@class NSUUID;

@interface HMDUUIDWrapper : HMDFieldWrapper {

	NSUUID* _field;

}

@property (nonatomic,retain) NSUUID * field;              //@synthesize field=_field - In the implementation block
+(id)wrappertlv:(unsigned long long)arg1 name:(id)arg2 ;
-(NSUUID *)field;
-(void)setField:(NSUUID *)arg1 ;
@end

