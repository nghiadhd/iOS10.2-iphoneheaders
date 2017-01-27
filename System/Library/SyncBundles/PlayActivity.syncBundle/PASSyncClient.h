/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SyncBundles/PlayActivity.syncBundle/PlayActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATClient.h>
#import <libobjc.A.dylib/ATMessageLinkObserver.h>
#import <libobjc.A.dylib/ATMessageLinkRequestHandler.h>
#import <libobjc.A.dylib/ATSyncClient.h>

@protocol OS_dispatch_queue, ATMessageLink, ATSyncClientDelegate;
@class NSObject, NSString, SSVPlayActivityController, MSVStreamReader;

@interface PASSyncClient : NSObject <ATClient, ATMessageLinkObserver, ATMessageLinkRequestHandler, ATSyncClient> {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	unsigned long long _lastEndRevision;
	NSString* _lastRevisionVersionToken;
	id<ATMessageLink> _messageLink;
	SSVPlayActivityController* _playActivityController;
	MSVStreamReader* _streamReader;
	id<ATSyncClientDelegate> _syncClientDelegate;
	BOOL _initiatedSync;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleUpdateSettingsRequest:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_sendUpdatedSettings;
-(id)revisionVersionToken;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(BOOL)isEnabled;
-(unsigned long long)currentRevision;
-(id)supportedDataclasses;
-(void)messageLinkWasOpened:(id)arg1 ;
-(void)messageLinkWasInitialized:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg1 ;
-(id)syncDataClass;
-(void)getChangesForSyncType:(unsigned)arg1 endpointType:(int)arg2 afterRevision:(unsigned long long)arg3 upToRevision:(unsigned long long)arg4 withSyncParams:(id)arg5 intoOutputStream:(id)arg6 withStartHandler:(/*^block*/id)arg7 withProgressHandler:(/*^block*/id)arg8 withCompletionHandler:(/*^block*/id)arg9 ;
-(void)applyChangesForSyncType:(unsigned)arg1 endpointType:(int)arg2 fromStream:(id)arg3 withSyncParams:(id)arg4 withProgressHandler:(/*^block*/id)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(void)resetSyncDataWithCompletion:(/*^block*/id)arg1 ;
-(void)syncCompletedWithError:(id)arg1 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
@end

