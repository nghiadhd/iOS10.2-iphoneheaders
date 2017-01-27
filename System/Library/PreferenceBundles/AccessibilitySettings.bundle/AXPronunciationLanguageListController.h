/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>

@protocol AXPronunciationLanguageListControllerDelegate;
@class NSMutableSet;

@interface AXPronunciationLanguageListController : AccessibilityBaseListController {

	id<AXPronunciationLanguageListControllerDelegate> _delegate;
	NSMutableSet* _selectedLanguages;

}

@property (nonatomic,retain) NSMutableSet * selectedLanguages;                                        //@synthesize selectedLanguages=_selectedLanguages - In the implementation block
@property (assign,nonatomic) id<AXPronunciationLanguageListControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSMutableSet *)selectedLanguages;
-(void)setSelectedLanguages:(NSMutableSet *)arg1 ;
-(void)setDelegate:(id<AXPronunciationLanguageListControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<AXPronunciationLanguageListControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
@end

