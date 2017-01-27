/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUICachedLayout.h>

@class NSAttributedString, NSStringDrawingContext, NSShadow, NSString;

@interface SKUIAttributedStringLayout : NSObject <SKUICachedLayout> {

	NSAttributedString* _attributedString;
	CGSize _boundingSize;
	NSStringDrawingContext* _context;
	double _topInset;
	BOOL _usesTallCharacterSet;
	UIEdgeInsets _edgeInsetsForShadow;
	NSShadow* _shadow;

}

@property (nonatomic,readonly) NSAttributedString * attributedString;                      //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) double baselineOffset; 
@property (nonatomic,readonly) double firstBaselineOffset; 
@property (nonatomic,readonly) CGSize boundingSize;                                        //@synthesize boundingSize=_boundingSize - In the implementation block
@property (nonatomic,readonly) long long numberOfLines; 
@property (nonatomic,readonly) NSStringDrawingContext * stringDrawingContext;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) double topInset;                                            //@synthesize topInset=_topInset - In the implementation block
@property (nonatomic,readonly) BOOL usesTallCharacterSet;                                  //@synthesize usesTallCharacterSet=_usesTallCharacterSet - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets edgeInsetsForShadow;                           //@synthesize edgeInsetsForShadow=_edgeInsetsForShadow - In the implementation block
@property (nonatomic,readonly) NSShadow * shadow;                                          //@synthesize shadow=_shadow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)topInset;
-(NSAttributedString *)attributedString;
-(double)baselineOffset;
-(double)firstBaselineOffset;
-(long long)numberOfLines;
-(NSShadow *)shadow;
-(id)initWithLayoutRequest:(id)arg1 ;
-(CGSize)boundingSize;
-(UIEdgeInsets)edgeInsetsForShadow;
-(NSStringDrawingContext *)stringDrawingContext;
-(BOOL)usesTallCharacterSet;
@end

