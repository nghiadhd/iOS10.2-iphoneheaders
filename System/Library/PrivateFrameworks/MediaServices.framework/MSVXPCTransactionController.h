/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMapTable;

@interface MSVXPCTransactionController : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMapTable* _openTransactions;
	BOOL _inTransaction;
	NSObject*<OS_dispatch_source> _signalUSR2DispatchSource;

}

@property (getter=isInTransaction,nonatomic,readonly) BOOL inTransaction; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isTransactionActive:(id)arg1 ;
-(void)addActiveTransaction:(id)arg1 ;
-(void)removeActiveTransaction:(id)arg1 ;
-(void)_setupSignalHandler;
-(void)_tearDownSignalHandler;
-(void)_onQueueUpdateInternalTransactionState;
-(void)_onQueueCleanupEndedTransactions;
-(void)_saveActiveTransactionsToFile;
-(id)activeTransactions;
-(BOOL)isInTransaction;
@end

