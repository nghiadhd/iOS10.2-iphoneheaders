/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NTKComplicationDisplay.h>
#import <libobjc.A.dylib/NTKZeusLowerComplicationDisplay.h>

@protocol NTKComplicationDisplayObserver;
@class UIView, NSString;

@interface NTKZeusComplicationView : UIView <NTKComplicationDisplay, NTKZeusLowerComplicationDisplay> {

	UIView* _highlightView;
	BOOL _highlighted;
	id<NTKComplicationDisplayObserver> displayObserver;
	unsigned long long _style;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                  //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
@property (assign,nonatomic) unsigned long long style;                                               //@synthesize style=_style - In the implementation block
+(id)viewForComplicationType:(unsigned long long)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(CGRect)contentFrame;
-(id<NTKComplicationDisplayObserver>)displayObserver;
-(void)setDisplayObserver:(id<NTKComplicationDisplayObserver>)arg1 ;
@end

