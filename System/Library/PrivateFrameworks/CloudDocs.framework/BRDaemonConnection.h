/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <Foundation/NSXPCConnection.h>

@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {

	NSUUID* _uuid;
	BOOL _isUsingTokenService;

}
+(void)initialize;
+(id)defaultConnection;
+(id)secondaryConnection;
+(id)defaultConnectionIfExists;
+(id)secondaryConnectionIfExists;
+(id)syncedDesktopURL;
+(id)syncedDocumentsURL;
+(id)cloudDocsAppSupportURL;
+(id)cloudDocsCachesURL;
+(id)t_connectionForUUID:(id)arg1 ;
+(void)t_setDefaultConnection:(id)arg1 ;
+(id)mobileDocumentsURL;
+(id)syncedRootURLs;
+(void)invalidateCachedURLProperties;
+(void)t_setMobileDocumentsURL:(id)arg1 ;
+(id)homeDirectoryURL;
-(id)initUsingUserLocalDaemonTokenService;
-(BRXPCSyncProxy*)newSyncTokenProxy;
-(BRXPCSyncProxy*)newSyncProxy;
-(void)_setupAndResume;
-(id)initUsingUserLocalDaemon;
@end

