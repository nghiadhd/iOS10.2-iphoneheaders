/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface VTXPCServiceClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _vtxConnection;

}
-(id)init;
-(void)dealloc;
-(id)_service;
-(void)notifyVoiceTriggeredSiriSessionCancelled;
-(void)notifySecondChanceRequest;
-(void)notifyTriggerEventRequest;
-(void)resetAssertions;
-(void)clearVoiceTriggerCount;
-(void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 ;
-(void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 ;
-(unsigned char)getLastTriggerType;
-(long long)getVoiceTriggerCount;
-(id)getFirstChanceAudioBuffer;
-(id)getFirstChanceVTEventInfo;
-(id)getFirstChanceTriggeredDate;
@end

