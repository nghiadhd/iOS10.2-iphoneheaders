/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MusicClientContextConsuming.h>
#import <libobjc.A.dylib/MusicEntityProviding.h>

@class NSArray, MusicClientContext, NSString;

@interface MusicInterleavedEntityProvider : NSObject <MusicClientContextConsuming, MusicEntityProviding> {

	NSArray* _dynamicPageSectionIndexMappers;
	NSArray* _entityProviders;
	NSArray* _sortedMergeInformation;
	BOOL _didRequireMerging;
	MusicClientContext* _clientContext;
	/*^block*/id _entityUniqueIdentifierMergeInformationBlock;

}

@property (nonatomic,retain) MusicClientContext * clientContext;                        //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) BOOL didRequireMerging;                                  //@synthesize didRequireMerging=_didRequireMerging - In the implementation block
@property (nonatomic,copy) NSArray * entityProviders;                                   //@synthesize entityProviders=_entityProviders - In the implementation block
@property (nonatomic,copy) id entityUniqueIdentifierMergeInformationBlock;              //@synthesize entityUniqueIdentifierMergeInformationBlock=_entityUniqueIdentifierMergeInformationBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)numberOfSections;
-(BOOL)hasEntities;
-(BOOL)hasExplicitContent;
-(void)setClientContext:(MusicClientContext *)arg1 ;
-(MusicClientContext *)clientContext;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1 ;
-(void)_unregisterForNotificationsForEntityProvider:(id)arg1 ;
-(void)_entityProviderDidInvalidateNotification:(id)arg1 ;
-(void)_registerForNotificationsForEntityProvider:(id)arg1 ;
-(unsigned long long)numberOfIndexBarEntries;
-(unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1 ;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned long long)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(BOOL)hasEntitiesNotInLibrary;
-(void)setEntityUniqueIdentifierMergeInformationBlock:(id)arg1 ;
-(BOOL)doEntityProvidersRequireMerging:(id)arg1 ;
-(void)setEntityProviders:(NSArray *)arg1 ;
-(id)_dynamicPageSectionIndexMapperForEntityProvider:(id)arg1 ;
-(void)_reloadIndexMap;
-(void)_getSortedMergeInformation:(id*)arg1 requiresMerging:(BOOL*)arg2 forEntityProviders:(id)arg3 ;
-(void)_didRequireMergingDidChange;
-(BOOL)didRequireMerging;
-(NSArray *)entityProviders;
-(id)entityUniqueIdentifierMergeInformationBlock;
@end

