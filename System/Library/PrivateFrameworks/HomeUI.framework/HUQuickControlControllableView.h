/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HUQuickControlViewProfile;


@protocol HUQuickControlControllableView <HUQuickControlPresentableView>
@property (nonatomic,retain) id value; 
@property (nonatomic,copy) HUQuickControlViewProfile * profile; 
@property (nonatomic,retain) id secondaryValue; 
@optional
-(id)secondaryValue;
-(void)setSecondaryValue:(id)arg1;

@required
-(id)value;
-(void)setValue:(id)arg1;
-(id)initWithProfile:(id)arg1;
-(HUQuickControlViewProfile *)profile;
-(void)setProfile:(id)arg1;

@end

