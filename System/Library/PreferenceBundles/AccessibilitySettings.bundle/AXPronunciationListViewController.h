/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>

@class NSDictionary;

@interface AXPronunciationListViewController : AccessibilityBaseListController {

	NSDictionary* _pronunciationsByLetter;

}

@property (nonatomic,retain) NSDictionary * pronunciationsByLetter;              //@synthesize pronunciationsByLetter=_pronunciationsByLetter - In the implementation block
-(NSDictionary *)pronunciationsByLetter;
-(void)_handleAddButtonTapped:(id)arg1 ;
-(id)_replacementString:(id)arg1 ;
-(void)setPronunciationsByLetter:(NSDictionary *)arg1 ;
-(void)updatePronunciationList;
-(void)_handleEditButtonTapped:(id)arg1 ;
-(void)_handleDoneButtonTapped:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_updateEditButton;
-(long long)tableViewStyle;
-(void)reloadSpecifiers;
-(id)editButton;
-(id)_speechAssetUpdaterClient;
-(id)specifiers;
@end

