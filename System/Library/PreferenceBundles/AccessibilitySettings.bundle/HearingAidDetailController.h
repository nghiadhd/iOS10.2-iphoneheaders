/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHearingDetailViewController.h>

@class NSTimer;

@interface HearingAidDetailController : AXHearingDetailViewController {

	NSTimer* _hysteresisTimer;

}

@property (nonatomic,retain) NSTimer * hysteresisTimer;              //@synthesize hysteresisTimer=_hysteresisTimer - In the implementation block
-(void)setShouldStream:(id)arg1 specifier:(id)arg2 ;
-(id)independentAids:(id)arg1 ;
-(void)setIndependentAids:(id)arg1 specifier:(id)arg2 ;
-(id)shouldStream:(id)arg1 ;
-(void)forgetAid:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)confirmationViewAcceptedForSpecifier:(id)arg1 ;
-(NSTimer *)hysteresisTimer;
-(void)setHysteresisTimer:(NSTimer *)arg1 ;
-(id)disconnectedSpecifiers;
-(id)specifiers;
@end

