/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView, UIImageView, AXRemoteHearingAidDevice, UILabel;

@interface HearingAidConnectionTableCell : PSTableCell {

	UIActivityIndicatorView* _spinnerView;
	UIImageView* _checkedView;
	BOOL _showSpinner;
	AXRemoteHearingAidDevice* _device;
	UILabel* _availabilityLabel;

}

@property (nonatomic,retain) UILabel * availabilityLabel;                    //@synthesize availabilityLabel=_availabilityLabel - In the implementation block
@property (nonatomic,retain) AXRemoteHearingAidDevice * device;              //@synthesize device=_device - In the implementation block
+(double)heightRequiredForDevice:(id)arg1 ;
-(UILabel *)availabilityLabel;
-(void)setAvailabilityLabel:(UILabel *)arg1 ;
-(id)detailString;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setChecked:(BOOL)arg1 ;
-(id)accessibilityHint;
-(BOOL)cellEnabled;
-(void)showSpinner:(BOOL)arg1 ;
-(void)updateAvailability;
-(BOOL)_accessibilityIsScannerElement;
-(AXRemoteHearingAidDevice *)device;
-(void)setDevice:(AXRemoteHearingAidDevice *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

