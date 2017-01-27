/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoBackup.framework/NanoBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface NBManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _externalQueue;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> externalQueue;              //@synthesize externalQueue=_externalQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(id)connection;
-(NSXPCConnection *)xpcConnection;
-(NSObject*<OS_dispatch_queue>)externalQueue;
-(void)setExternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)unsafe_invalidate;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)listBackupsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)createBackupForPairingID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)createBackupForPairingID:(id)arg1 synchronousCompletionHandler:(/*^block*/id)arg2 ;
-(void)listBackupsWithSynchronousCompletionHandler:(/*^block*/id)arg1 ;
-(void)restoreFromBackup:(id)arg1 forDevice:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)restoreFromBackup:(id)arg1 forDevice:(id)arg2 ;
-(void)restoreFromDevice:(id)arg1 forDevice:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)restoreFromDevice:(id)arg1 forDevice:(id)arg2 ;
-(void)createBackupForDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)createBackupForDevice:(id)arg1 synchronousCompletionHandler:(/*^block*/id)arg2 ;
-(void)deleteBackup:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)deleteBackup:(id)arg1 ;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
@end

