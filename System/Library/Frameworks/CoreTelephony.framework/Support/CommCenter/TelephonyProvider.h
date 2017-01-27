/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommCenter/CommCenter-Structs.h>
#import <CallKit/CXXPCProvider.h>

@class TelephonyProviderDelegate;

@interface TelephonyProvider : CXXPCProvider {

	queue* fQueue;
	TelephonyProviderDelegate* _telephonyProvider;

}

@property (nonatomic,retain) TelephonyProviderDelegate * telephonyProvider;              //@synthesize telephonyProvider=_telephonyProvider - In the implementation block
-(id)initWithRegistry:(const shared_ptr<Registry>Ref)arg1 ;
-(void)setTelephonyProvider:(TelephonyProviderDelegate *)arg1 ;
-(TelephonyProviderDelegate *)telephonyProvider;
@end

