/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NCNotificationSectionList.h>

@protocol NCNotificationSectionListDelegate;
@class NSMutableArray, NCNotificationHiddenRequestsList, NSString;

@interface NCNotificationChronologicalList : NSObject <BSDescriptionProviding, NCNotificationSectionList> {

	id<NCNotificationSectionListDelegate> _delegate;
	NSMutableArray* _sections;
	NCNotificationHiddenRequestsList* _hiddenRequestsList;

}

@property (nonatomic,retain) NSMutableArray * sections;                                          //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NCNotificationHiddenRequestsList * hiddenRequestsList;              //@synthesize hiddenRequestsList=_hiddenRequestsList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NCNotificationSectionListDelegate> delegate; 
@property (nonatomic,readonly) unsigned long long sectionCount; 
-(id)init;
-(void)setDelegate:(id<NCNotificationSectionListDelegate>)arg1 ;
-(NSString *)debugDescription;
-(id<NCNotificationSectionListDelegate>)delegate;
-(void)setSections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sections;
-(unsigned long long)sectionCount;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_handleLocaleChange;
-(void)_handleTimeZoneChange;
-(id)allNotificationRequests;
-(id)insertNotificationRequest:(id)arg1 ;
-(id)modifyNotificationRequest:(id)arg1 ;
-(id)removeNotificationRequest:(id)arg1 ;
-(id)notificationRequestAtIndexPath:(id)arg1 ;
-(void)hideRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2 ;
-(void)showRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2 ;
-(void)_updateListForDateChange;
-(NCNotificationHiddenRequestsList *)hiddenRequestsList;
-(id)_sectionContainingNotificationRequest:(id)arg1 ;
-(id)_existingSectionForNotificationRequest:(id)arg1 ;
-(id)_newSectionForNotificationRequest:(id)arg1 ;
-(unsigned long long)_insertionIndexForSection:(id)arg1 ;
-(id)_targetIndexPathForNotificationRequest:(id)arg1 ;
-(long long)sectionIndexForListSectionIdentifier:(id)arg1 ;
-(void)_reloadSectionHeaders;
-(void)_rebuildSectionsList;
-(id)_titleForDate:(id)arg1 ;
-(id)_allNotificationRequestsFromSectionIndex:(unsigned long long)arg1 ;
-(id)_simpleDateFromDate:(id)arg1 ;
-(id)_identifierForDate:(id)arg1 ;
-(id)_newSectionForDate:(id)arg1 ;
-(id)_existingSectionForDate:(id)arg1 ;
-(id)titleForSectionIndex:(unsigned long long)arg1 ;
-(id)identifierForSectionIndex:(unsigned long long)arg1 ;
-(unsigned long long)rowCountForSectionIndex:(unsigned long long)arg1 ;
-(id)notificationRequestsForSectionIdentifier:(id)arg1 ;
-(id)dateForSectionIdentifier:(id)arg1 ;
-(id)requestsIndexPathsPassingTest:(/*^block*/id)arg1 ;
-(id)notificationRequestsAtIndexPaths:(id)arg1 ;
-(void)clearAllSections;
-(void)clearSectionWithIdentifier:(id)arg1 ;
-(id)_completeIndexSet;
-(void)setHiddenRequestsList:(NCNotificationHiddenRequestsList *)arg1 ;
@end

