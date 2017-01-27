/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class CUICatalog, CUIStyleEffectConfiguration;

@interface NSLineFragmentRenderingContext : NSObject {

	void* _runs;
	long long _numRuns;
	unsigned short* _glyphs;
	CGSize* _advancements;
	double _leftSideDelta;
	double _lineWidth;
	double _leftControlWidth;
	double _rightControlWidth;
	double _elasticWidth;
	CGRect _imageBounds;
	struct {
		unsigned _isRTL : 1;
		unsigned _vAdvance : 1;
		unsigned _flipped : 1;
		unsigned _usesSimpleTextEffects : 1;
		unsigned _reserved : 28;
	}  _flags;
	long long _resolvedDirection;
	long long _resolvedAlignment;
	CUICatalog* _catalog;
	CUIStyleEffectConfiguration* _styleEffects;

}

@property (assign) long long resolvedTextAlignment;                                                                                   //@synthesize resolvedAlignment=_resolvedAlignment - In the implementation block
@property (assign) long long resolvedBaseWritingDirection;                                                                            //@synthesize resolvedDirection=_resolvedDirection - In the implementation block
@property (nonatomic,retain) CUICatalog * cuiCatalog;                                                                                 //@synthesize catalog=_catalog - In the implementation block
@property (nonatomic,retain) CUIStyleEffectConfiguration * cuiStyleEffects;                                                           //@synthesize styleEffects=_styleEffects - In the implementation block
@property (assign,setter=_setUsesSimpleTextEffects:,getter=_usesSimpleTextEffects,nonatomic) BOOL usesSimpleTextEffects; 
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
-(CUICatalog *)cuiCatalog;
-(id)initWithRuns:(CFArrayRef)arg1 glyphOrigin:(double)arg2 lineFragmentWidth:(double)arg3 elasticWidth:(double)arg4 usesScreenFonts:(BOOL)arg5 isRTL:(BOOL)arg6 ;
-(void)drawAtPoint:(CGPoint)arg1 inContext:(CGContextRef)arg2 ;
-(CGSize)sizeWithBehavior:(long long)arg1 usesFontLeading:(BOOL)arg2 baselineDelta:(double*)arg3 ;
-(void)getMaximumAscender:(double*)arg1 minimumDescender:(double*)arg2 ;
-(double)lineFragmentWidth;
-(double)elasticWidth;
-(long long)resolvedBaseWritingDirection;
-(void)setResolvedBaseWritingDirection:(long long)arg1 ;
-(long long)resolvedTextAlignment;
-(void)setResolvedTextAlignment:(long long)arg1 ;
-(CUIStyleEffectConfiguration *)cuiStyleEffects;
-(void)dealloc;
-(oneway void)release;
-(BOOL)_isDeallocating;
-(void)setCuiCatalog:(CUICatalog *)arg1 ;
-(void)setCuiStyleEffects:(CUIStyleEffectConfiguration *)arg1 ;
-(void)_setUsesSimpleTextEffects:(BOOL)arg1 ;
-(BOOL)_usesSimpleTextEffects;
-(BOOL)_tryRetain;
-(BOOL)isRTL;
-(void)finalize;
-(CGRect)imageBounds;
@end

