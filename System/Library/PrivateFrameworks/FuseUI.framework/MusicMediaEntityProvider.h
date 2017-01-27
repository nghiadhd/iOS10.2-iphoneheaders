/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MusicEntityProviding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, MusicMediaQueryDataSource, NSSet, MPMediaQuery, NSString;

@interface MusicMediaEntityProvider : NSObject <MusicEntityProviding, NSCoding> {

	NSArray* _localizedSectionIndexTitles;
	MusicMediaQueryDataSource* _mediaQueryDataSource;
	NSSet* _requiredVisibilityPrioritySectionIndexTitles;
	long long _maximumItemCount;

}

@property (assign,nonatomic) long long maximumItemCount;                                      //@synthesize maximumItemCount=_maximumItemCount - In the implementation block
@property (nonatomic,readonly) MusicMediaQueryDataSource * mediaQueryDataSource;              //@synthesize mediaQueryDataSource=_mediaQueryDataSource - In the implementation block
@property (nonatomic,retain) MPMediaQuery * mediaQuery; 
@property (nonatomic,readonly) unsigned long long totalEntityCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)numberOfSections;
-(BOOL)setEditing:(BOOL)arg1 ;
-(MPMediaQuery *)mediaQuery;
-(BOOL)hasEntities;
-(BOOL)hasExplicitContent;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1 ;
-(unsigned long long)numberOfIndexBarEntries;
-(unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1 ;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned long long)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(id)additionalPropertiesToFetchSynchronouslyForEntityValueContext:(id)arg1 ;
-(BOOL)hasEntitiesNotInLibrary;
-(BOOL)hasMultipleEntitiesIncludingStoreContent;
-(id)initWithMediaQuery:(id)arg1 ;
-(void)_handleMediaQueryDataSourceDidInvalidate;
-(id)initWithMediaQueryDataSource:(id)arg1 ;
-(void)_configureEntityValueContextOutput:(id)arg1 forGlobalIndex:(unsigned long long)arg2 ;
-(void)handleDeleteChangeRecord:(id)arg1 ;
-(MusicMediaQueryDataSource *)mediaQueryDataSource;
-(void)setMediaQuery:(MPMediaQuery *)arg1 ;
-(void)_dataSourceWasInvalidated:(id)arg1 ;
-(id)_localizedSectionIndexTitles;
-(id)_requiredVisibilityPrioritySectionIndexTitles;
-(void)_loadSectionIndexTitleDataIfNeeded;
-(unsigned long long)totalEntityCount;
-(long long)maximumItemCount;
-(void)setMaximumItemCount:(long long)arg1 ;
@end

