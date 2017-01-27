/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>

@interface _DKInCarMonitor : _DKMonitor {

	BOOL _enabled;
	BOOL _connected;
	int _connectedToken;
	int _disconnectedToken;

}

@property (assign,nonatomic) BOOL enabled;                       //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL connected;                     //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) int connectedToken;                 //@synthesize connectedToken=_connectedToken - In the implementation block
@property (assign,nonatomic) int disconnectedToken;              //@synthesize disconnectedToken=_disconnectedToken - In the implementation block
+(id)eventStream;
+(void)setIsConnected:(BOOL)arg1 ;
+(id)entitlements;
-(void)setConnectedStatus:(BOOL)arg1 ;
-(void)setConnectedToken:(int)arg1 ;
-(int)connectedToken;
-(void)setDisconnectedToken:(int)arg1 ;
-(int)disconnectedToken;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
-(id)loadState;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)connected;
-(void)saveState;
@end

