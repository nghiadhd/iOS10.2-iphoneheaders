/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class AXRemoteHearingAidDevice, UILabel, UIView, UIActivityIndicatorView, NSNumberFormatter;

@interface AXHearingAidDetailCell : PSTableCell {

	AXRemoteHearingAidDevice* _device;
	UILabel* _leftLabel;
	UIView* _leftStatusIndicator;
	UILabel* _rightLabel;
	UIView* _rightStatusIndicator;
	UIActivityIndicatorView* _loadingIndicator;
	NSNumberFormatter* _numberFormatter;
	BOOL _bluetoothAvailable;

}

@property (nonatomic,retain) AXRemoteHearingAidDevice * device;              //@synthesize device=_device - In the implementation block
+(double)heightRequiredForDevice:(id)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(void)updateDetails;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 andDevice:(id)arg3 ;
-(void)bluetoothAvailabilityDidChange:(id)arg1 ;
-(void)updateAvailability;
-(id)imageForBatteryLevel:(double)arg1 ;
-(AXRemoteHearingAidDevice *)device;
-(void)setDevice:(AXRemoteHearingAidDevice *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

