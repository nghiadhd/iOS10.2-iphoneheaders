/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/UsageBundles/NanoBackupUsage.bundle/NanoBackupUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSUsageBundleDetailController.h>

@class UIAlertController, NSArray;

@interface NBUsageDetailController : PSUsageBundleDetailController {

	UIAlertController* _deleteAllAlertController;
	NSArray* _deleteButtonSpecifiers;

}

@property (nonatomic,retain) UIAlertController * deleteAllAlertController;              //@synthesize deleteAllAlertController=_deleteAllAlertController - In the implementation block
@property (nonatomic,retain) NSArray * deleteButtonSpecifiers;                          //@synthesize deleteButtonSpecifiers=_deleteButtonSpecifiers - In the implementation block
-(void)setDeleteButtonSpecifiers:(NSArray *)arg1 ;
-(void)deleteAllBackups;
-(void)setDeleteAllAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)deleteAllAlertController;
-(void)showDeleteAllAlert;
-(NSArray *)deleteButtonSpecifiers;
-(void)loadView;
-(void)setEditable:(BOOL)arg1 ;
-(id)specifiers;
@end

