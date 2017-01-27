/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBCPlaybackPositionServiceProtocol_Internal.h>
#import <libobjc.A.dylib/SBCPlaybackPositionServiceProtocol.h>

@protocol OS_dispatch_queue, SBCPlaybackPositionClientProtocol;
@class NSXPCConnection, NSObject, SBDDomainSyncServiceHandler, SBDDomainValueServiceHandler, SBCClientConfiguration, NSString;

@interface SBDPlaybackPositionService : NSObject <SBCPlaybackPositionServiceProtocol_Internal, SBCPlaybackPositionServiceProtocol> {

	NSXPCConnection* _XPCConnection;
	NSObject*<OS_dispatch_queue> _queue;
	id<SBCPlaybackPositionClientProtocol> _clientProxy;
	SBDDomainSyncServiceHandler* _syncHandler;
	SBDDomainValueServiceHandler* _valueHandler;
	SBCClientConfiguration* _clientConfiguration;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<SBCPlaybackPositionClientProtocol> clientProxy;              //@synthesize clientProxy=_clientProxy - In the implementation block
@property (nonatomic,readonly) SBDDomainSyncServiceHandler * syncHandler;                      //@synthesize syncHandler=_syncHandler - In the implementation block
@property (nonatomic,readonly) SBDDomainValueServiceHandler * valueHandler;                    //@synthesize valueHandler=_valueHandler - In the implementation block
@property (nonatomic,readonly) SBCClientConfiguration * clientConfiguration;                   //@synthesize clientConfiguration=_clientConfiguration - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * XPCConnection;                                //@synthesize XPCConnection=_XPCConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceForXPCConnection:(id)arg1 ;
-(void)_sendSyncHandlerMessageWithBlock:(/*^block*/id)arg1 ;
-(void)_sendValueHandlerMessageWithBlock:(/*^block*/id)arg1 ;
-(SBDDomainValueServiceHandler *)valueHandler;
-(NSXPCConnection *)XPCConnection;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithXPCConnection:(id)arg1 ;
-(oneway void)deletePlaybackPositionEntity:(id)arg1 ;
-(oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)arg1 ;
-(oneway void)pullPlaybackPositionEntity:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(oneway void)pushPlaybackPositionEntity:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(oneway void)savePlaybackPositionEntity:(id)arg1 isCheckpoint:(BOOL)arg2 ;
-(oneway void)beginAccessingPlaybackPositionEntities;
-(oneway void)endAccessingPlaybackPositionEntities;
-(SBDDomainSyncServiceHandler *)syncHandler;
-(oneway void)synchronizeImmediatelyWithCompletionHandler:(/*^block*/id)arg1 ;
-(id<SBCPlaybackPositionClientProtocol>)clientProxy;
-(oneway void)deletePlaybackPositionEntities;
-(oneway void)setClientConfiguration:(SBCClientConfiguration *)arg1 ;
-(SBCClientConfiguration *)clientConfiguration;
@end

