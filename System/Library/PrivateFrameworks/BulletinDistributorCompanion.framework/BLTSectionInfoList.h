/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <libobjc.A.dylib/BLTSectionInfoListProviderDelegate.h>

@protocol BLTSectionInfoListDelegate, BLTSectionInfoListProvider;
@class NSMutableDictionary, NSMutableArray, NSString;

@interface BLTSectionInfoList : NSObject <BLTSectionInfoListProviderDelegate> {

	NSMutableDictionary* _sectionInfoListItemsBySectionID;
	opaque_pthread_mutex_t _lock;
	NSMutableArray* _loadingCompletionHandlers;
	BOOL _loading;
	BOOL _loaded;
	id<BLTSectionInfoListDelegate> _delegate;
	id<BLTSectionInfoListProvider> _overrideProvider;
	id<BLTSectionInfoListProvider> _sectionInfoProvider;

}

@property (assign,nonatomic,__weak) id<BLTSectionInfoListDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<BLTSectionInfoListProvider> overrideProvider;                 //@synthesize overrideProvider=_overrideProvider - In the implementation block
@property (nonatomic,retain) id<BLTSectionInfoListProvider> sectionInfoProvider;              //@synthesize sectionInfoProvider=_sectionInfoProvider - In the implementation block
@property (getter=hasLoaded,nonatomic,readonly) BOOL loaded;                                  //@synthesize loaded=_loaded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<BLTSectionInfoListDelegate>)arg1 ;
-(void)dealloc;
-(id<BLTSectionInfoListDelegate>)delegate;
-(id)overrides;
-(id)universalSectionIDForSectionID:(id)arg1 ;
-(BOOL)hasLoaded;
-(void)reloadWithCompletion:(/*^block*/id)arg1 ;
-(void)updateSectionInfo:(id)arg1 withUniversalSectionID:(id)arg2 displayName:(id)arg3 ;
-(void)removedSectionWithSectionID:(id)arg1 ;
-(void)updateOverrides:(id)arg1 forSectionID:(id)arg2 ;
-(id)originalSettings;
-(id)overriddenSettings;
-(void)_migrateFromExternalDeviceSwitchToOverrides:(id)arg1 ;
-(id)overriddenSectionInfoForSectionID:(id)arg1 ;
-(void)setSectionInfoProvider:(id<BLTSectionInfoListProvider>)arg1 ;
-(void)setOverrideProvider:(id<BLTSectionInfoListProvider>)arg1 ;
-(id)effectiveSectionInfoForSectionID:(id)arg1 ;
-(id<BLTSectionInfoListProvider>)overrideProvider;
-(id<BLTSectionInfoListProvider>)sectionInfoProvider;
-(id)sectionIDs;
@end

