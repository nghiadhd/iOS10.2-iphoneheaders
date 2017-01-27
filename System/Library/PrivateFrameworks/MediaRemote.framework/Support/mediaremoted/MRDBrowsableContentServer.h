/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/mediaremoted-Structs.h>
#import <mediaremoted/MRDXPCMessageHandling.h>

@class NSMutableArray, NSMutableDictionary, MRDBrowsableContentAPICoordinator, NSString;

@interface MRDBrowsableContentServer : NSObject <MRDXPCMessageHandling> {

	NSMutableArray* _queuedInitiatePlaybackMessages;
	NSMutableArray* _queuedRelayableMessages;
	NSMutableDictionary* _queuedBeginLoadingBlocks;
	MRDBrowsableContentAPICoordinator* _apiCoordinator;

}

@property (nonatomic,readonly) MRDBrowsableContentAPICoordinator * apiCoordinator;              //@synthesize apiCoordinator=_apiCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_clientCanBeNowPlayingAppNotification:(id)arg1 ;
-(void)handleXPCMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleBeginLoadingBrowsableContentMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleRequestPlaybackInitializationMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleRequestPlaybackQueueInitializationMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetSupportedBrowsableContentAPIsMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetSupportedBrowsableContentAPIsMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_relayMessage:(id)arg1 toClientWithBundleIDAndReply:(id)arg2 ;
-(void)_handleBrowsableContentDidFinishLoadingFromClient:(id)arg1 indexPath:(SCD_Struct_MR4*)arg2 withError:(id)arg3 ;
-(void)_clearQueuedBeginLoadingMessagesForApp:(id)arg1 ;
-(void)_enqueueCompletion:(/*^block*/id)arg1 forUnavailableDestinationApp:(id)arg2 ;
-(void)_sendQueuedBeginLoadingMessagesForAvailableApp:(id)arg1 ;
-(void)_sendInitiatePlaybackMessage:(id)arg1 ;
-(void)_handleSupportedAPIsDidChangeForClient:(id)arg1 ;
-(BOOL)_messageRequiresMediaServerBlessing:(id)arg1 ;
-(BOOL)_messageCanLaunchApp:(id)arg1 ;
-(BOOL)_takeProcessAssertionForClient:(id)arg1 ;
-(void)_scheduleEndProcessAssertionForClient:(id)arg1 ;
-(MRDBrowsableContentAPICoordinator *)apiCoordinator;
-(id)init;
-(void)dealloc;
@end

