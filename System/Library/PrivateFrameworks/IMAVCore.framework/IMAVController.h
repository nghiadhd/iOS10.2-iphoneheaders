/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface IMAVController : NSObject {

	BOOL _blockMultipleIncomingInvitations;
	BOOL _blockOutgoingInvitationsDuringCall;
	BOOL _blockIncomingInvitationsDuringCall;
	NSMutableArray* _delegates;

}

@property (nonatomic,retain) NSMutableArray * _delegates;                          //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,readonly) BOOL _ready; 
@property (nonatomic,readonly) BOOL hasActiveConference; 
@property (nonatomic,readonly) BOOL hasRunningConference; 
@property (nonatomic,readonly) unsigned overallChatState; 
@property (nonatomic,readonly) BOOL cameraCapable; 
@property (nonatomic,readonly) BOOL microphoneCapable; 
@property (nonatomic,readonly) BOOL cameraConnected; 
@property (nonatomic,readonly) BOOL microphoneConnected; 
@property (assign,nonatomic) BOOL blockMultipleIncomingInvitations;                //@synthesize blockMultipleIncomingInvitations=_blockMultipleIncomingInvitations - In the implementation block
@property (assign,nonatomic) BOOL blockIncomingInvitationsDuringCall;              //@synthesize blockIncomingInvitationsDuringCall=_blockIncomingInvitationsDuringCall - In the implementation block
@property (assign,nonatomic) BOOL blockOutgoingInvitationsDuringCall;              //@synthesize blockOutgoingInvitationsDuringCall=_blockOutgoingInvitationsDuringCall - In the implementation block
@property (nonatomic,retain,readonly) NSArray * delegates; 
@property (assign,nonatomic) id<IMAVControllerDelegate> delegate; 
+(id)sharedInstance;
-(id)init;
-(void)setDelegate:(id<IMAVControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IMAVControllerDelegate>)delegate;
-(void)vcCapabilitiesChanged:(unsigned long long)arg1 ;
-(BOOL)blockMultipleIncomingInvitations;
-(BOOL)blockIncomingInvitationsDuringCall;
-(BOOL)hasRunningConference;
-(void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned)arg2 vcProps:(id)arg3 forAccount:(id)arg4 conferenceID:(id)arg5 ;
-(BOOL)cameraCapable;
-(BOOL)_shouldRunConferences;
-(BOOL)_shouldRunACConferences;
-(BOOL)_shouldObserveConferences;
-(void)pushCachedVCCapsToDaemon;
-(void)_dumpCaps;
-(void)cancelVCRequestWithBuddy:(id)arg1 vcProps:(id)arg2 forAccount:(id)arg3 conferenceID:(id)arg4 reason:(id)arg5 ;
-(void)updateActiveConference;
-(BOOL)microphoneCapable;
-(unsigned)overallChatState;
-(void)setBlockIncomingInvitationsDuringCall:(BOOL)arg1 ;
-(void)setBlockMultipleIncomingInvitations:(BOOL)arg1 ;
-(void)setBlockOutgoingInvitationsDuringCall:(BOOL)arg1 ;
-(id)vcResponseInfoWithSessionID:(unsigned)arg1 ;
-(BOOL)hasActiveConference;
-(BOOL)cameraConnected;
-(BOOL)microphoneConnected;
-(void)_setServiceVCCaps:(unsigned long long)arg1 toCaps:(unsigned long long)arg2 ;
-(void)_receivedPendingACRequests;
-(void)_receivedPendingVCRequests;
-(void)setupIMAVController;
-(void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned)arg2 vcProps:(id)arg3 conferenceID:(id)arg4 ;
-(void)setIMAVCapabilities:(long long)arg1 toCaps:(long long)arg2 ;
-(void)setHasRunningConference:(BOOL)arg1 ;
-(void)setHasActiveConference:(BOOL)arg1 ;
-(void)requestPendingVCInvitations;
-(void)requestPendingACInvitations;
-(BOOL)_ready;
-(void)blockOnPendingVCInvitationsWithCapabilities:(long long)arg1 ;
-(NSMutableArray *)_delegates;
-(void)set_delegates:(NSMutableArray *)arg1 ;
-(BOOL)blockOutgoingInvitationsDuringCall;
-(void)removeDelegate:(id)arg1 ;
-(NSArray *)delegates;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
@end

