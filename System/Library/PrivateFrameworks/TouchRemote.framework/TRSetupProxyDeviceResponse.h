/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRResponseMessage.h>

@class AKDevice;

@interface TRSetupProxyDeviceResponse : TRResponseMessage {

	AKDevice* _proxyDevice;

}

@property (nonatomic,retain) AKDevice * proxyDevice;              //@synthesize proxyDevice=_proxyDevice - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(AKDevice *)proxyDevice;
-(void)setProxyDevice:(AKDevice *)arg1 ;
@end
