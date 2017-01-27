/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKTableViewController.h>

@protocol _HKEmergencyContactRelationshipPickerDelegate;
@class NSArray;

@interface _HKEmergencyContactRelationshipPicker : HKTableViewController {

	NSArray* _tokens;
	NSArray* _labels;
	id<_HKEmergencyContactRelationshipPickerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_HKEmergencyContactRelationshipPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)setDelegate:(id<_HKEmergencyContactRelationshipPickerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<_HKEmergencyContactRelationshipPickerDelegate>)delegate;
-(void)viewDidLoad;
-(void)_cancelTapped:(id)arg1 ;
@end

