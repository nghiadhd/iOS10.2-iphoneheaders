/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPEncoderWriteCoordinatorDelegate.h>

@class TSPObjectContext, NSUUID, NSString;

@interface TSPObjectSerializationWriteAssistant : NSObject <TSPEncoderWriteCoordinatorDelegate> {

	TSPObjectContext* _context;
	NSUUID* _documentUUID;
	NSUUID* _versionUUID;
	BOOL _serializeWeakAsStrongReferences;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)objectTargetType;
-(long long)componentWriterMode;
-(id)createMetadataForRootObject:(id)arg1 dataArchiver:(id)arg2 archivedObjects:(id)arg3 componentObjectUUIDMap:(id)arg4 externalReferences:(id)arg5 weakExternalReferences:(id)arg6 lazyReferences:(id)arg7 dataReferences:(id)arg8 error:(id*)arg9 ;
-(BOOL)skipMetadataObjectSerialization;
-(id)initWithContext:(id)arg1 documentUUID:(id)arg2 versionUUID:(id)arg3 ;
-(void)encodeObject:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
@end

