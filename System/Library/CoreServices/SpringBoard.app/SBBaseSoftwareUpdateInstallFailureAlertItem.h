/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBBaseSoftwareUpdateAlertItem.h>

@interface SBBaseSoftwareUpdateInstallFailureAlertItem : SBBaseSoftwareUpdateAlertItem {

	BOOL _actionTaken;

}

@property (assign,nonatomic) BOOL actionTaken;              //@synthesize actionTaken=_actionTaken - In the implementation block
-(BOOL)actionTaken;
-(void)setActionTaken:(BOOL)arg1 ;
-(void)willDeactivateForReason:(int)arg1 ;
-(BOOL)allowInSetup;
@end

