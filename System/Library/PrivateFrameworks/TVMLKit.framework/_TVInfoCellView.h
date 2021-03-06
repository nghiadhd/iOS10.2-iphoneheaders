/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIView.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class UIView, NSArray, NSString;

@interface _TVInfoCellView : UIView <TVAppTemplateImpressionable> {

	BOOL _headerOnLeft;
	UIView* _headerContentView;
	NSArray* _dataViews;
	double _headerWidth;
	double _headerMaxWidth;
	double _headerMinWidth;
	double _normalizedHeaderWidth;
	UIEdgeInsets _headerMargin;

}

@property (nonatomic,retain) UIView * headerContentView;                //@synthesize headerContentView=_headerContentView - In the implementation block
@property (nonatomic,retain) NSArray * dataViews;                       //@synthesize dataViews=_dataViews - In the implementation block
@property (assign,nonatomic) BOOL headerOnLeft;                         //@synthesize headerOnLeft=_headerOnLeft - In the implementation block
@property (assign,nonatomic) double headerWidth;                        //@synthesize headerWidth=_headerWidth - In the implementation block
@property (assign,nonatomic) double headerMaxWidth;                     //@synthesize headerMaxWidth=_headerMaxWidth - In the implementation block
@property (assign,nonatomic) double headerMinWidth;                     //@synthesize headerMinWidth=_headerMinWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets headerMargin;                 //@synthesize headerMargin=_headerMargin - In the implementation block
@property (assign,nonatomic) double normalizedHeaderWidth;              //@synthesize normalizedHeaderWidth=_normalizedHeaderWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)infoCellViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)headerMargin;
-(void)setHeaderMargin:(UIEdgeInsets)arg1 ;
-(UIView *)headerContentView;
-(void)setHeaderContentView:(UIView *)arg1 ;
-(NSArray *)dataViews;
-(void)setDataViews:(NSArray *)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(BOOL)headerOnLeft;
-(CGSize)sizeThatFits:(CGSize)arg1 withHeaderWidth:(double)arg2 ;
-(void)setNormalizedHeaderWidth:(double)arg1 ;
-(double)minimumHeaderWidth;
-(void)setHeaderWidth:(double)arg1 ;
-(void)setHeaderMaxWidth:(double)arg1 ;
-(void)setHeaderMinWidth:(double)arg1 ;
-(void)setHeaderOnLeft:(BOOL)arg1 ;
-(double)headerWidth;
-(double)headerMaxWidth;
-(double)headerMinWidth;
-(double)normalizedHeaderWidth;
@end

