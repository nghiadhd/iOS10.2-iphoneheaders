/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TKTonePickerTableViewControllerHelper <NSObject>
@required
-(id)selectedTonePickerItem;
-(void)tonePickerTableViewControllerWillBeDeallocated:(id)arg1;
-(void)loadViewForTonePickerTableViewController:(id)arg1;
-(void)updateCell:(id)arg1 withCheckedStatus:(BOOL)arg2 forPickerRowItem:(id)arg3;
-(void)tableView:(id)arg1 updateCell:(id)arg2 withSeparatorForPickerRowItem:(id)arg3;
-(void)updateDividerContentColorToMatchSeparatorColorInTableView:(id)arg1;
-(id)tableView:(id)arg1 cellForPickerRowItem:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 forPickerRowItem:(id)arg3;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forPickerRowItem:(id)arg3;
-(void)updateCell:(id)arg1 withDetailText:(id)arg2;
-(void)tonePickerTableViewWillDisappear:(BOOL)arg1;

@end

