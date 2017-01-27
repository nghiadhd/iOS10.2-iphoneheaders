/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKUtilityImageAndLabelsComplicationView.h>
#import <libobjc.A.dylib/NTKStopwatchComplicationDisplay.h>

@class NSString;

@interface NTKLongStopwatchUtilityComplicationView : NTKUtilityImageAndLabelsComplicationView <NTKStopwatchComplicationDisplay>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
+(id)_preferredAdditionalFontSettings;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTime:(double)arg1 ;
@end

