/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface IDSEncryptionController : NSObject {

	NSObject*<OS_dispatch_queue> _syncQueue;
	NSObject*<OS_dispatch_queue> _defaultQueue;
	NSObject*<OS_dispatch_queue> _urgentQueue;
	NSMutableDictionary* _contextMap;

}
+(id)sharedInstance;
-(id)decryptMessageData:(id)arg1 fromToken:(id)arg2 type:(long long)arg3 deviceID:(id)arg4 priority:(long long)arg5 error:(long long*)arg6 ;
-(id)encryptMessageData:(id)arg1 toToken:(id)arg2 type:(long long*)arg3 deviceID:(id)arg4 priority:(long long)arg5 error:(long long*)arg6 ;
-(void)checkThreadPriority:(long long)arg1 ;
-(void)encryptMessageData:(id)arg1 myURI:(id)arg2 myIdentity:(id)arg3 toURI:(id)arg4 toToken:(id)arg5 service:(id)arg6 priority:(long long)arg7 completionBlock:(/*^block*/id)arg8 ;
-(id)encryptMessageData:(id)arg1 toToken:(id)arg2 otrToken:(id)arg3 deviceID:(id)arg4 type:(long long*)arg5 priority:(long long)arg6 error:(long long*)arg7 ;
-(id)decryptMessageData:(id)arg1 fromToken:(id)arg2 otrToken:(id)arg3 deviceID:(id)arg4 type:(long long)arg5 priority:(long long)arg6 error:(long long*)arg7 ;
-(void)performBlock:(/*^block*/id)arg1 priority:(long long)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 priority:(long long)arg3 ;
-(const char*)_specificForPriority:(long long)arg1 ;
-(id)_queueForPriority:(long long)arg1 ;
-(void)decryptMessageData:(id)arg1 myURI:(id)arg2 myIdentity:(id)arg3 fromURI:(id)arg4 token:(id)arg5 service:(id)arg6 type:(long long)arg7 priority:(long long)arg8 completionBlock:(/*^block*/id)arg9 ;
-(void)noteDecryptionErrorForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 messageData:(id)arg5 type:(long long)arg6 ;
-(void)noteEncryptionErrorForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 messageData:(id)arg5 type:(long long)arg6 ;
-(void)noteRemoteDecryptionErrorForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 messageData:(id)arg5 type:(long long)arg6 ;
-(void)noteRemoteEncryptionErrorForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 messageData:(id)arg5 type:(long long)arg6 ;
-(id)init;
-(void)dealloc;
@end

