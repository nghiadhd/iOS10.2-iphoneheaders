/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Support/pasted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PBPasteboardModel : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _workQueue_pasteboardCache;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                       //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * workQueue_pasteboardCache;              //@synthesize workQueue_pasteboardCache=_workQueue_pasteboardCache - In the implementation block
+(id)sharedModel;
-(void)setWorkQueue_pasteboardCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)workQueue_pasteboardCache;
-(id)workQueue_unserializePasteboardWithPersistenceName:(id)arg1 ;
-(void)workQueue_deletePasteboardWithPersistenceName:(id)arg1 ;
-(id)workQueue_pasteboardWithPersistenceName:(id)arg1 name:(id)arg2 localOnly:(BOOL)arg3 ;
-(id)workQueue_savePasteboard:(id)arg1 isServerToServerCopy:(BOOL)arg2 outNotificationState:(unsigned long long*)arg3 outChangeCount:(long long*)arg4 ;
-(void)workQueue_faultMetadataForRemotePasteboard:(id)arg1 processInfo:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getPasteboardWithPersistenceName:(id)arg1 name:(id)arg2 createIfNeeded:(BOOL)arg3 localOnly:(BOOL)arg4 processInfo:(id)arg5 deviceIsLocked:(BOOL)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)workQueue_faultDataForRemotePasteboard:(id)arg1 processInfo:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_clearRemotePasteboard;
-(void)_pushRemotePasteboard:(id)arg1 ;
-(id)workQueue_getAllPasteboardsOutError:(id*)arg1 ;
-(void)workQueue_deleteOrphanedPasteboardFiles;
-(void)getPasteboardNamed:(id)arg1 bundleID:(id)arg2 teamID:(id)arg3 createIfNeeded:(BOOL)arg4 localOnly:(BOOL)arg5 processInfo:(id)arg6 deviceIsLocked:(BOOL)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)getExistingPasteboardWithPersistenceName:(id)arg1 name:(id)arg2 UUID:(id)arg3 processInfo:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)savePasteboard:(id)arg1 deviceIslocked:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)deletePasteboardNamed:(id)arg1 bundleID:(id)arg2 teamID:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)deleteOrphanedPasteboardFilesCompletionBlock:(/*^block*/id)arg1 ;
-(void)_remotePasteboardDidBecomeAvailable:(BOOL)arg1 ;
-(void)_remotePasteboardWillBeFetched:(/*^block*/id)arg1 ;
-(void)workQueue_reallyFaultMetadataForRemotePasteboard:(id)arg1 processInfo:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)workQueue_saveGeneralPasteboardFromContinuityPasteboard:(id)arg1 ;
-(void)workQueue_reallyFaultDataForRemotePasteboard:(id)arg1 processInfo:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)workQueue_createRemoteGeneralPasteboardWithChangeCount:(long long)arg1 ;
-(void)workQueue_removeRemotePasteboardAndRestoreGeneralPasteboard;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)getAllPasteboardsCompletionBlock:(/*^block*/id)arg1 ;
@end
