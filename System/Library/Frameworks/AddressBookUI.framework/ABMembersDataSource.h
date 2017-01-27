/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol ABMembersDataSourceDelegate, ABStyleProvider;
@class ABModel, NSMutableArray, ABBannerView, ABUIPerson, NSString;

@interface ABMembersDataSource : NSObject <UITableViewDelegate, UITableViewDataSource> {

	id<ABMembersDataSourceDelegate> _delegate;
	id<ABStyleProvider> _styleProvider;
	void* _addressBook;
	ABModel* _model;
	NSMutableArray* _sectionIndexTitles;
	CFDictionaryRef _sectionHeaderToSortingIndex;
	CFDictionaryRef _displayableSectionHeaderToSectionHeader;
	CFDictionaryRef _sectionHeaderToDisplayableSectionHeader;
	CFDictionaryRef _displayableSectionIndexToSectionIndex;
	CFDictionaryRef _sectionIndexToDisplayableSectionIndex;
	ABBannerView* _bannerView;
	ABUIPerson* _meCard;

}

@property (assign,nonatomic) id<ABMembersDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<ABStyleProvider> styleProvider;                     //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) ABModel * model;                                       //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) void* addressBook;                                     //@synthesize addressBook=_addressBook - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<ABMembersDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(id<ABMembersDataSourceDelegate>)delegate;
-(CGRect)tableView:(id)arg1 frameForSectionIndexGivenProposedFrame:(CGRect)arg2 ;
-(id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(ABModel *)model;
-(long long)globalRowForDisplayedMemberIndex:(unsigned long long)arg1 ;
-(BOOL)shouldShowGroups;
-(void)setBannerView:(id)arg1 inTableView:(id)arg2 ;
-(void)_invalidateMeCard;
-(void)createAllDisplayableSectionIndexAndHeaderCaches;
-(id)displayableSectionHeaderFromSectionHeader:(id)arg1 ;
-(id)displayableSectionIndexFromSectionIndex:(id)arg1 ;
-(id)sectionIndexFromDisplayableSectionIndex:(id)arg1 ;
-(CFDictionaryRef)sectionHeaderSortingIndices;
-(long long)globalRowForBanner;
-(unsigned long long)displayedMemberIndexForIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(id)indexPathForDisplayedMemberIndex:(unsigned long long)arg1 inTableView:(id)arg2 ;
-(id<ABStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
-(id)bannerView;
-(void)setModel:(ABModel *)arg1 ;
-(void)setAddressBook:(void*)arg1 ;
-(void*)addressBook;
-(id)titleForHeaderInSection:(long long)arg1 ;
@end

