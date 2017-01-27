/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRProtocolMessage.h>

@interface MRGameControllerMessage : MRProtocolMessage {

	BOOL _eventInitialized;
	BOOL _hasEvent;
	SCD_Struct_MR10 _gcEvent;
	unsigned long long _priority;

}

@property (nonatomic,readonly) SCD_Struct_MR11* event; 
@property (nonatomic,readonly) unsigned long long controllerID; 
-(unsigned long long)type;
-(unsigned long long)priority;
-(SCD_Struct_MR11*)event;
-(unsigned long long)controllerID;
-(id)initWithGameControllerEvent:(const SCD_Struct_MR11*)arg1 controllerID:(unsigned long long)arg2 ;
-(id)initWithButtons:(SCD_Struct_MR6*)arg1 controllerID:(unsigned long long)arg2 ;
-(BOOL)shouldLog;
@end

