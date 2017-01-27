/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSURL, NSNetService, HSConnection;

@interface HSHomeSharingLibrary : NSObject {

	NSObject*<OS_dispatch_queue> _connectionAccessQueue;
	BOOL _requiresPassword;
	BOOL _available;
	BOOL __hasPendingUpdateRequest;
	unsigned _version;
	NSString* _name;
	NSString* _uniqueIdentifier;
	NSString* _homeSharingGroupID;
	NSURL* _baseURL;
	NSNetService* _service;
	long long _connectionType;
	HSConnection* _connection;

}

@property (assign,nonatomic) BOOL _hasPendingUpdateRequest;                     //@synthesize _hasPendingUpdateRequest=__hasPendingUpdateRequest - In the implementation block
@property (nonatomic,retain) HSConnection * connection;                         //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned version;                                //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL requiresPassword;                           //@synthesize requiresPassword=_requiresPassword - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeSharingGroupID;              //@synthesize homeSharingGroupID=_homeSharingGroupID - In the implementation block
@property (nonatomic,retain,readonly) NSURL * baseURL;                          //@synthesize baseURL=_baseURL - In the implementation block
@property (getter=isAvailable,nonatomic,readonly) BOOL available;               //@synthesize available=_available - In the implementation block
@property (nonatomic,retain) NSNetService * service;                            //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) unsigned databaseID; 
@property (nonatomic,readonly) unsigned basePlaylistContainerID; 
@property (nonatomic,readonly) long long connectionType;                        //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,readonly) long long connectionState; 
@property (nonatomic,readonly) NSString * deviceGUID; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(unsigned)version;
-(NSString *)uniqueIdentifier;
-(void)disconnect;
-(HSConnection *)connection;
-(void)setConnection:(HSConnection *)arg1 ;
-(NSURL *)baseURL;
-(long long)connectionType;
-(id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 version:(unsigned)arg3 baseURL:(id)arg4 homeSharingGroupID:(id)arg5 connectionType:(long long)arg6 ;
-(unsigned)basePlaylistContainerID;
-(void)_sendUpdateRequest;
-(void)_onQueue_ensureConnection;
-(void)set_hasPendingUpdateRequest:(BOOL)arg1 ;
-(BOOL)_hasPendingUpdateRequest;
-(unsigned)databaseID;
-(void)connectWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)requiresPassword;
-(NSString *)homeSharingGroupID;
-(id)urlForRequest:(id)arg1 ;
-(void)sendRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(NSString *)deviceGUID;
-(id)securityInfoForURL:(id)arg1 ;
-(id)signedRequestFromURLRequest:(id)arg1 ;
-(BOOL)isAvailable;
-(void)setService:(NSNetService *)arg1 ;
-(NSNetService *)service;
-(long long)connectionState;
@end

