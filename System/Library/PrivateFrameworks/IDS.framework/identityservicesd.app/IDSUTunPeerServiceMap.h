/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject, NSMapTable;

@interface IDSUTunPeerServiceMap : NSObject {

	NSObject*<OS_dispatch_semaphore> _lock;
	unsigned char _remoteInstanceID[16];
	NSMapTable* _serviceNameToStreamIDMap;
	NSMapTable* _streamIDToServiceNameMap;
	unsigned short _nextStreamID;

}

@property (readonly) unsigned long long count; 
-(void)setRemoteInstanceID:(unsigned char*)arg1 ;
-(void)associateServiceName:(id)arg1 withStreamID:(unsigned short)arg2 remoteInstanceID:(unsigned char*)arg3 remoteInstanceIDChanged:(BOOL*)arg4 ;
-(BOOL)translateStreamID:(unsigned short)arg1 toServiceName:(id*)arg2 remoteInstanceID:(unsigned char*)arg3 remoteInstanceIDChanged:(BOOL*)arg4 ;
-(BOOL)translateServiceName:(id)arg1 toStreamID:(unsigned short*)arg2 createIfNotFound:(BOOL)arg3 mappingCreated:(BOOL*)arg4 remoteInstanceID:(unsigned char*)arg5 remoteInstanceIDChanged:(BOOL*)arg6 ;
-(id)init;
-(unsigned long long)count;
-(id)description;
@end

