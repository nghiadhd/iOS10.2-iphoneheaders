/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCellLayoutOptions.h>

@interface HUGridHeadlineCellLayoutOptions : HUGridCellLayoutOptions {

	BOOL _editing;
	double _topOfScreenToHeadlineBaselinePercentage;
	double _minimumFontSize;
	double _editingBackgroundHeight;
	long long _viewSizeSubclass;
	double _containerLeadingMargin;
	double _containerTrailingMargin;
	CGSize _viewSize;

}

@property (nonatomic,readonly) long long viewSizeSubclass;                                //@synthesize viewSizeSubclass=_viewSizeSubclass - In the implementation block
@property (nonatomic,readonly) CGSize viewSize;                                           //@synthesize viewSize=_viewSize - In the implementation block
@property (nonatomic,readonly) double containerLeadingMargin;                             //@synthesize containerLeadingMargin=_containerLeadingMargin - In the implementation block
@property (nonatomic,readonly) double containerTrailingMargin;                            //@synthesize containerTrailingMargin=_containerTrailingMargin - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                               //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) double topOfScreenToHeadlineBaselinePercentage;              //@synthesize topOfScreenToHeadlineBaselinePercentage=_topOfScreenToHeadlineBaselinePercentage - In the implementation block
@property (assign,nonatomic) double minimumFontSize;                                      //@synthesize minimumFontSize=_minimumFontSize - In the implementation block
@property (assign,nonatomic) double editingBackgroundHeight;                              //@synthesize editingBackgroundHeight=_editingBackgroundHeight - In the implementation block
@property (nonatomic,readonly) double topOfScreenToHeadlineBaselineDistance; 
@property (nonatomic,readonly) double editingBackgroundMinimumWidth; 
+(id)defaultOptionsForCellSizeSubclass:(long long)arg1 ;
+(id)defaultOptionsForCellSizeSubclass:(long long)arg1 viewSizeSubclass:(long long)arg2 viewSize:(CGSize)arg3 containerLeadingMargin:(double)arg4 containerTrailingMargin:(double)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(void)setMinimumFontSize:(double)arg1 ;
-(double)minimumFontSize;
-(CGSize)viewSize;
-(long long)viewSizeSubclass;
-(double)cellInnerMargin;
-(double)topOfScreenToHeadlineBaselineDistance;
-(double)editingBackgroundMinimumWidth;
-(double)editingBackgroundHeight;
-(void)setTopOfScreenToHeadlineBaselinePercentage:(double)arg1 ;
-(void)setEditingBackgroundHeight:(double)arg1 ;
-(double)containerLeadingMargin;
-(double)containerTrailingMargin;
-(double)topOfScreenToHeadlineBaselinePercentage;
@end

