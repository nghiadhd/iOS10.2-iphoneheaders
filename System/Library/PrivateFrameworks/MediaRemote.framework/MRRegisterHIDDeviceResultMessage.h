/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@interface MRRegisterHIDDeviceResultMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned errorCode; 
@property (nonatomic,readonly) unsigned long long deviceIdentifier; 
-(unsigned long long)type;
-(unsigned)errorCode;
-(unsigned long long)deviceIdentifier;
-(id)initWithErrorCode:(unsigned)arg1 deviceIdentifier:(unsigned long long)arg2 ;
@end

