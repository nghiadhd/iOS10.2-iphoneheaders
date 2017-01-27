/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSArray, NSDictionary, NSString, MPStoreItemMetadata, MPUContentItemIdentifierCollection;

@interface MusicStoreItemMetadataContext : NSObject <NSCopying, NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMapTable* _adjustedOptionsToRepresentativeMediaEntity;
	BOOL _hasOverrideChildrenMetadataContexts;
	NSArray* _overrideChildrenMetadataContexts;
	BOOL _wantsRepresentativeMediaEntity;
	BOOL _hasCompleteStoreItemMetadata;
	NSDictionary* _JSDictionary;
	NSString* _storeID;
	MPStoreItemMetadata* _storeItemMetadata;

}

@property (nonatomic,copy,readonly) MPUContentItemIdentifierCollection * MPU_contentItemIdentifierCollection; 
@property (nonatomic,copy,readonly) NSArray * childrenStoreItemMetadataContexts; 
@property (nonatomic,readonly) BOOL hasCompleteStoreItemMetadata;                                                          //@synthesize hasCompleteStoreItemMetadata=_hasCompleteStoreItemMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * JSDictionary;                                                           //@synthesize JSDictionary=_JSDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeID;                                                                    //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy,readonly) MPStoreItemMetadata * storeItemMetadata;                                               //@synthesize storeItemMetadata=_storeItemMetadata - In the implementation block
@property (getter=isStoreRestricted,nonatomic,readonly) BOOL storeRestricted; 
@property (getter=isCompilation,nonatomic,readonly) BOOL compilation; 
+(BOOL)supportsSecureCoding;
+(id)mediaLibrary;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isCompilation;
-(MPStoreItemMetadata *)storeItemMetadata;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(NSString *)storeID;
-(MPUContentItemIdentifierCollection *)MPU_contentItemIdentifierCollection;
-(BOOL)isPlayable;
-(id)representativeMediaEntityWithOptions:(unsigned long long)arg1 ;
-(void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1 ;
-(NSArray *)childrenStoreItemMetadataContexts;
-(BOOL)isStoreRestricted;
-(id)initWithJSDictionary:(id)arg1 ;
-(id)storeItemMetadataContextWithChildStoreItemMetadataContexts:(id)arg1 ;
-(BOOL)hasCompleteStoreItemMetadata;
-(id)initWithStoreItemMetadata:(id)arg1 hasCompleteStoreItemMetadata:(BOOL)arg2 ;
-(id)initWithStorePlatformDictionary:(id)arg1 hasCompleteStoreItemMetadata:(BOOL)arg2 ;
-(id)initWithStoreID:(id)arg1 ;
-(NSDictionary *)JSDictionary;
-(id)initWithStorePlatformDictionary:(id)arg1 storeID:(id)arg2 hasCompleteStoreItemMetadata:(BOOL)arg3 ;
-(void)_beginObservingMediaLibraryNotifications;
-(id)storeItemMetadataContextWithParentMetadata:(id)arg1 ;
-(void)_invalidateFromMediaLibraryChange;
@end

