/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKBCacheableView.h>

@class CALayer, NSString;

@interface UIKBThemedView : UIView <UIKBCacheableView> {

	CALayer* _rightBorder;
	CALayer* _leftBorder;
	CALayer* _background;
	BOOL _lightKeyboard;
	BOOL _active;
	BOOL _usePersistentCaching;
	BOOL _showsLeftBorder;
	BOOL _showsRightBorder;
	int _style;
	UIEdgeInsets _cacheInsets;

}

@property (assign,nonatomic) BOOL active;                            //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) int style;                              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) UIEdgeInsets cacheInsets;               //@synthesize cacheInsets=_cacheInsets - In the implementation block
@property (assign,nonatomic) BOOL usePersistentCaching;              //@synthesize usePersistentCaching=_usePersistentCaching - In the implementation block
@property (assign,nonatomic) BOOL showsLeftBorder;                   //@synthesize showsLeftBorder=_showsLeftBorder - In the implementation block
@property (assign,nonatomic) BOOL showsRightBorder;                  //@synthesize showsRightBorder=_showsRightBorder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) BOOL cacheDeferable; 
@property (nonatomic,readonly) double cachedWidth; 
@property (nonatomic,readonly) BOOL keepNonPersistent; 
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(int)style;
-(BOOL)_canDrawContent;
-(void)displayLayer:(id)arg1 ;
-(void)setStyle:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(NSString *)cacheKey;
-(double)cachedWidth;
-(id)cacheKeysForRenderFlags:(id)arg1 ;
-(void)drawContentsOfRenderers:(id)arg1 ;
-(BOOL)cacheDeferable;
-(BOOL)keepNonPersistent;
-(void)setShowsLeftBorder:(BOOL)arg1 ;
-(void)setShowsRightBorder:(BOOL)arg1 ;
-(void)setCacheInsets:(UIEdgeInsets)arg1 ;
-(void)setUsePersistentCaching:(BOOL)arg1 ;
-(UIEdgeInsets)cacheInsets;
-(BOOL)showsRightBorder;
-(BOOL)showsLeftBorder;
-(void)_populateLayer:(id)arg1 withContents:(id)arg2 ;
-(id)borderFilterTypeForCurrentStyle;
-(BOOL)_hasInsets;
-(id)traitsForCurrentStyle;
-(BOOL)usePersistentCaching;
@end

