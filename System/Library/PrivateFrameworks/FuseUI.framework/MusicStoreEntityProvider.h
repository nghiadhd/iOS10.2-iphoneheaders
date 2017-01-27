/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/MusicEntityProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MPSparseArray, NSArray, NSString;

@interface MusicStoreEntityProvider : NSObject <MusicEntityProviding, NSCopying, NSSecureCoding> {

	long long _entityType;
	MPSparseArray* _storeEntityValueProviders;
	BOOL _shouldReloadEntityValueProvidersForInvalidation;
	BOOL _shouldIncludeUnplayableContent;
	BOOL _shouldRespectSystemContentRestrictions;
	NSArray* _storeItemMetadataContexts;
	NSArray* _filteredPlayableItemMetadataContexts;

}

@property (nonatomic,copy,readonly) NSArray * filteredPlayableItemMetadataContexts;              //@synthesize filteredPlayableItemMetadataContexts=_filteredPlayableItemMetadataContexts - In the implementation block
@property (nonatomic,readonly) long long entityType;                                             //@synthesize entityType=_entityType - In the implementation block
@property (assign,nonatomic) BOOL shouldReloadEntityValueProvidersForInvalidation;               //@synthesize shouldReloadEntityValueProvidersForInvalidation=_shouldReloadEntityValueProvidersForInvalidation - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeUnplayableContent;                                //@synthesize shouldIncludeUnplayableContent=_shouldIncludeUnplayableContent - In the implementation block
@property (assign,nonatomic) BOOL shouldRespectSystemContentRestrictions;                        //@synthesize shouldRespectSystemContentRestrictions=_shouldRespectSystemContentRestrictions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * storeItemMetadataContexts;                         //@synthesize storeItemMetadataContexts=_storeItemMetadataContexts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)numberOfSections;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasEntities;
-(BOOL)hasExplicitContent;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1 ;
-(unsigned long long)numberOfIndexBarEntries;
-(unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1 ;
-(long long)entityType;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned long long)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(BOOL)hasEntitiesNotInLibrary;
-(BOOL)hasMultipleEntitiesIncludingStoreContent;
-(long long)_entityType;
-(void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1 ;
-(unsigned long long)_entityCount;
-(void)_configureEntityValueContextOutput:(id)arg1 forGlobalIndex:(unsigned long long)arg2 ;
-(id)_storeEntityValueProviderAtIndex:(unsigned long long)arg1 ;
-(void)setStoreItemMetadataContexts:(id)arg1 entityType:(long long)arg2 ;
-(void)setShouldIncludeUnplayableContent:(BOOL)arg1 ;
-(void)setShouldRespectSystemContentRestrictions:(BOOL)arg1 ;
-(void)_setStoreItemMetadataContexts:(id)arg1 entityType:(long long)arg2 allowingInvalidationNotification:(BOOL)arg3 ;
-(void)_reloadFilteredPlayableItemMetadataContextsAllowingInvalidationNotification:(BOOL)arg1 ;
-(void)_restrictionMonitorAllowsExplicitContentDidChangeNotification:(id)arg1 ;
-(void)_postInvalidationNotification;
-(id)_filteredPlayableItemMetadataContextsWithItems:(id)arg1 ;
-(id)indexPathForStoreItemMetadataContext:(id)arg1 ;
-(id)storeItemMetadataContextAtIndexPath:(id)arg1 ;
-(BOOL)shouldReloadEntityValueProvidersForInvalidation;
-(void)setShouldReloadEntityValueProvidersForInvalidation:(BOOL)arg1 ;
-(BOOL)shouldIncludeUnplayableContent;
-(BOOL)shouldRespectSystemContentRestrictions;
-(NSArray *)storeItemMetadataContexts;
-(NSArray *)filteredPlayableItemMetadataContexts;
@end

