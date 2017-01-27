/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKModuleView.h>
#import <libobjc.A.dylib/NTKTimeView.h>

@protocol NTKTimeModuleViewTapClient;
@class CLKUITimeLabelStyle, CLKFont, NTKDigitalTimeLabel, NSString;

@interface NTKTimeModuleView : NTKModuleView <NTKTimeView> {

	CLKUITimeLabelStyle* _defaultStyle;
	CLKFont* _timeTravelFont;
	BOOL _usesTimeTravelStyle;
	BOOL _frozen;
	NTKDigitalTimeLabel* _timeLabel;
	id<NTKTimeModuleViewTapClient> _tapDelegate;

}

@property (assign,nonatomic) BOOL pausedForZooming; 
@property (readonly) NTKDigitalTimeLabel * timeLabel;                                        //@synthesize timeLabel=_timeLabel - In the implementation block
@property (assign,nonatomic,__weak) id<NTKTimeModuleViewTapClient> tapDelegate;              //@synthesize tapDelegate=_tapDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isFrozen,nonatomic) BOOL frozen;                                    //@synthesize frozen=_frozen - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(void)setTapDelegate:(id<NTKTimeModuleViewTapClient>)arg1 ;
-(id<NTKTimeModuleViewTapClient>)tapDelegate;
-(BOOL)isFrozen;
-(void)setFrozen:(BOOL)arg1 ;
-(NTKDigitalTimeLabel *)timeLabel;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(void)_layoutContentView;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(id)_defaultStyle;
-(CGRect)_idealTimeLabelFrame;
-(id)_timeTravelFont;
-(void)setUsesTimeTravelStyle:(BOOL)arg1 ;
-(BOOL)pausedForZooming;
-(void)setPausedForZooming:(BOOL)arg1 ;
@end

