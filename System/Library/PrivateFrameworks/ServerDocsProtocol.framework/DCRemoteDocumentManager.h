/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DCService, NSDictionary, NSURLSessionDownloadTask;

@interface DCRemoteDocumentManager : NSObject {

	DCService* _service;
	NSDictionary* _watchedDocumentIdentifiersAndVersionIdentifiers;
	/*^block*/id _updatedVersionIdentifierHandler;
	NSURLSessionDownloadTask* _fetchUpdateRequest;

}

@property (retain,readonly) DCService * service;              //@synthesize service=_service - In the implementation block
+(id)remoteDocumentManagerForService:(id)arg1 ;
+(id)_getUniqueHostIdentifier;
-(id)initWithService:(id)arg1 ;
-(DCService *)service;
-(id)contentsOfRootDirectoryUnlessVersionIdentifier:(id)arg1 activityInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startFetchingUpdatesOfDocumentIdentifiersAndVersionIdentifiers:(id)arg1 activityInfo:(id)arg2 updatedVersionIdentifierHandler:(/*^block*/id)arg3 ;
-(void)finishFetchingUpdates;
-(void)handleEventsForBackgroundURLSession:(id)arg1 withServerRequestResponseHandler:(/*^block*/id)arg2 ;
-(id)contentsOfDirectoryWithDocumentIdentifier:(id)arg1 unlessVersionIdentifier:(id)arg2 activityInfo:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)contentsOfFileWithDocumentIdentifier:(id)arg1 unlessVersionIdentifier:(id)arg2 activityInfo:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)writeToFileWithName:(id)arg1 parentDocumentIdentifier:(id)arg2 parentVersionIdentifier:(id)arg3 activityInfo:(id)arg4 source:(id)arg5 attributes:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)writeToFileWithDocumentIdentifier:(id)arg1 versionIdentifier:(id)arg2 parentDocumentIdentifier:(id)arg3 parentVersionIdentifier:(id)arg4 activityInfo:(id)arg5 source:(id)arg6 attributes:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(id)_standardRequestHeaders;
-(void)handleResponse:(id)arg1 body:(id)arg2 error:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)requestHeadersFromMetadata:(id)arg1 ;
-(void)handleUpdateResponse:(id)arg1 body:(id)arg2 activityInfo:(id)arg3 error:(id)arg4 ;
-(id)rootDocumentIdentifier;
-(void)createDirectoryWithName:(id)arg1 parentDocumentIdentifier:(id)arg2 attributes:(id)arg3 parentVersionIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)versionListForFileWithDocumentIdentifier:(id)arg1 activityInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)restoreVersionOfFileWithDocumentIdentifier:(id)arg1 versionIdentifier:(id)arg2 parentVersionIdentifier:(id)arg3 activityInfo:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)isServiceAvailable;
@end

