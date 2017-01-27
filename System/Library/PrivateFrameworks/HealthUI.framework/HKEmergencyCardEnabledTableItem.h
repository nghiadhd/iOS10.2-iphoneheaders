/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKEmergencyCardTableItem.h>

@class UITableViewCell, UISwitch;

@interface HKEmergencyCardEnabledTableItem : HKEmergencyCardTableItem {

	UITableViewCell* _cell;
	UISwitch* _switch;

}
-(UIEdgeInsets)separatorInset;
-(id)_cell;
-(id)initInEditMode:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(id)titleForHeader;
-(id)titleForFooter;
-(void)_switchSwitched:(id)arg1 ;
@end

