/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/HUSliderValueTableViewCellDelegate.h>

@protocol HUPrototypeLayoutOptionsEditorViewControllerDelegate;
@class HUGridLayoutOptions, NSArray, NSString;

@interface HUPrototypeLayoutOptionsEditorViewController : UITableViewController <HUSliderValueTableViewCellDelegate> {

	HUGridLayoutOptions* _layoutOptions;
	id<HUPrototypeLayoutOptionsEditorViewControllerDelegate> _delegate;
	NSArray* _layoutOptionsKeys;

}

@property (nonatomic,retain) NSArray * layoutOptionsKeys;                                                           //@synthesize layoutOptionsKeys=_layoutOptionsKeys - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions;                                                   //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (assign,nonatomic,__weak) id<HUPrototypeLayoutOptionsEditorViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<HUPrototypeLayoutOptionsEditorViewControllerDelegate>)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<HUPrototypeLayoutOptionsEditorViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)sliderValueTableViewCell:(id)arg1 didChangeValue:(double)arg2 ;
-(HUGridLayoutOptions *)layoutOptions;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(void)setLayoutOptionsKeys:(NSArray *)arg1 ;
-(id)_viewSizeSubclassDescription;
-(NSArray *)layoutOptionsKeys;
-(void)_done:(id)arg1 ;
@end

