/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetResource.h>

@class PHAssetResourceCreationOptions, NSData;

@interface PHExternalAssetResource : PHAssetResource {

	BOOL _duplicateAllowsReadAccess;
	BOOL _isLibraryAssetResource;
	long long _resourceType;
	PHAssetResourceCreationOptions* _creationOptions;
	unsigned long long _cplResourceType;
	NSData* _data;

}

@property (nonatomic,readonly) unsigned long long cplResourceType;                                              //@synthesize cplResourceType=_cplResourceType - In the implementation block
@property (nonatomic,retain) NSData * data;                                                                     //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) PHAssetResourceCreationOptions * creationOptions;                                    //@synthesize creationOptions=_creationOptions - In the implementation block
@property (nonatomic,readonly) BOOL isLibraryAssetResource;                                                     //@synthesize isLibraryAssetResource=_isLibraryAssetResource - In the implementation block
@property (assign,setter=_setDuplicateAllowsReadAccess:,nonatomic) BOOL duplicateAllowsReadAccess;              //@synthesize duplicateAllowsReadAccess=_duplicateAllowsReadAccess - In the implementation block
+(id)assetResourceForDuplicatingAssetResource:(id)arg1 asData:(BOOL)arg2 error:(id*)arg3 ;
+(unsigned long long)_probableCPLResourceTypeFromAssetResourceType:(long long)arg1 ;
-(long long)type;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)originalFilename;
-(PHAssetResourceCreationOptions *)creationOptions;
-(id)propertyListRepresentation;
-(id)initWithResourceType:(long long)arg1 ;
-(BOOL)isLibraryAssetResource;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(void)setCreationOptions:(PHAssetResourceCreationOptions *)arg1 ;
-(BOOL)duplicateAllowsReadAccess;
-(void)_setDuplicateAllowsReadAccess:(BOOL)arg1 ;
-(id)uniformTypeIdentifier;
-(unsigned long long)cplResourceType;
@end

