/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKLegibilityLabel.h>
#import <libobjc.A.dylib/NTKColoringView.h>
#import <libobjc.A.dylib/CLKUILabel.h>
#import <libobjc.A.dylib/NTKTimeTravelState.h>

@class UIColor, UIFont, NSString, NSAttributedString, _NTKColorManager, CLKFont, CLKTextProvider, NSParagraphStyle;

@interface NTKColoringLabel : NTKLegibilityLabel <NTKColoringView, CLKUILabel, NTKTimeTravelState> {

	unsigned long long _options;
	_NTKColorManager* _colorManager;
	CGSize _cachedSingleLineSize;
	BOOL _cachedSizeIsValid;
	UIEdgeInsets _cachedOpticalEdgeInsets;
	BOOL _cachedOpticalEdgeInsetsIsValid;
	NSNumber* _updateToken;
	BOOL _updatedAfterTimeTravelStateChange;
	CLKFont* _preTimeTravelFont;
	BOOL _inTimeTravel;
	BOOL _uppercase;
	UIColor* _overrideColor;
	CLKTextProvider* _textProvider;
	CLKFont* _textProviderFont;
	CLKFont* _textProviderSmallCapsBaseFont;
	double _maxWidth;
	NSParagraphStyle* _paragraphStyle;
	/*^block*/id _nowProvider;
	/*^block*/id _needsResizeHandler;

}

@property (nonatomic,readonly) unsigned long long options;                         //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) CLKTextProvider * textProvider;                       //@synthesize textProvider=_textProvider - In the implementation block
@property (nonatomic,retain) CLKFont * textProviderFont;                           //@synthesize textProviderFont=_textProviderFont - In the implementation block
@property (nonatomic,retain) CLKFont * textProviderSmallCapsBaseFont;              //@synthesize textProviderSmallCapsBaseFont=_textProviderSmallCapsBaseFont - In the implementation block
@property (assign,nonatomic) double maxWidth;                                      //@synthesize maxWidth=_maxWidth - In the implementation block
@property (assign,nonatomic) BOOL uppercase;                                       //@synthesize uppercase=_uppercase - In the implementation block
@property (nonatomic,copy) NSParagraphStyle * paragraphStyle;                      //@synthesize paragraphStyle=_paragraphStyle - In the implementation block
@property (nonatomic,copy) id nowProvider;                                         //@synthesize nowProvider=_nowProvider - In the implementation block
@property (nonatomic,copy) id needsResizeHandler;                                  //@synthesize needsResizeHandler=_needsResizeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) BOOL usesLegibility; 
@property (nonatomic,retain) UIColor * overrideColor;                              //@synthesize overrideColor=_overrideColor - In the implementation block
@property (nonatomic,readonly) UIColor * contentColor; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,readonly) double _lastLineBaseline; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,readonly) UIEdgeInsets opticalInsets; 
@property (assign,nonatomic) BOOL inTimeTravel;                                    //@synthesize inTimeTravel=_inTimeTravel - In the implementation block
+(id)labelWithOptions:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)_font;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)sizeToFit;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(unsigned long long)options;
-(double)_lastLineBaseline;
-(void)setUppercase:(BOOL)arg1 ;
-(double)maxWidth;
-(void)setMaxWidth:(double)arg1 ;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)textProvider;
-(void)setUsesLegibility:(BOOL)arg1 ;
-(UIColor *)overrideColor;
-(void)setTextProviderFont:(CLKFont *)arg1 ;
-(double)widthForMaxWidth:(double)arg1 withFont:(id)arg2 ;
-(void)setInTimeTravel:(BOOL)arg1 ;
-(void)setNowProvider:(id)arg1 ;
-(void)setNeedsResizeHandler:(id)arg1 ;
-(BOOL)uppercase;
-(id)initWithFrame:(CGRect)arg1 options:(unsigned long long)arg2 ;
-(id)_activeFont;
-(void)invalidateCachedSize;
-(void)_requeryTextProviderAndNotify:(BOOL)arg1 ;
-(BOOL)inTimeTravel;
-(double)widthForMaxWidth:(double)arg1 withFont:(id)arg2 smallCapsBaseFont:(id)arg3 ;
-(id)_fontWithMonospaceNumbers:(id)arg1 ;
-(BOOL)_wantsDynamicTracking;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(UIEdgeInsets)opticalInsets;
-(BOOL)usesLegibility:(BOOL)arg1 ;
-(double)widthForMaxWidth:(double)arg1 ;
-(void)setTextProviderSmallCapsBaseFont:(CLKFont *)arg1 ;
-(CLKFont *)textProviderFont;
-(CLKFont *)textProviderSmallCapsBaseFont;
-(NSParagraphStyle *)paragraphStyle;
-(void)setParagraphStyle:(NSParagraphStyle *)arg1 ;
-(id)nowProvider;
-(id)needsResizeHandler;
@end
