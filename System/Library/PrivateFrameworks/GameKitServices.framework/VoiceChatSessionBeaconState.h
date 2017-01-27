/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameKitServices/GameKitServices-Structs.h>
@interface VoiceChatSessionBeaconState : NSObject {

	tagVoiceChatBeacon* lastReceivedBeacon;
	unsigned sentState;
	unsigned receivedState;
	BOOL needsSend;
	unsigned typeToSend;

}

@property (assign,nonatomic) unsigned sentState; 
@property (assign,nonatomic) unsigned receivedState; 
@property (assign,nonatomic) BOOL needsSend; 
@property (assign,nonatomic) unsigned typeToSend; 
-(id)init;
-(void)dealloc;
-(tagVoiceChatBeacon*)lastReceivedBeacon;
-(void)setLastReceivedBeacon:(tagVoiceChatBeacon*)arg1 ;
-(unsigned)sentState;
-(void)setSentState:(unsigned)arg1 ;
-(unsigned)receivedState;
-(void)setReceivedState:(unsigned)arg1 ;
-(BOOL)needsSend;
-(void)setNeedsSend:(BOOL)arg1 ;
-(unsigned)typeToSend;
-(void)setTypeToSend:(unsigned)arg1 ;
@end

