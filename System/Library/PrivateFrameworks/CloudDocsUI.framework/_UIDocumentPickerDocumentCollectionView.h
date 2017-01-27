/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <UIKit/UICollectionView.h>

@interface _UIDocumentPickerDocumentCollectionView : UICollectionView {

	BOOL _avoidNegativeContentOffset;
	double _contentSizeAdjustment;

}

@property (assign,nonatomic) double contentSizeAdjustment;              //@synthesize contentSizeAdjustment=_contentSizeAdjustment - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(double)contentSizeAdjustment;
-(void)setContentSizeAdjustment:(double)arg1 ;
-(void)setAdjustedContentSize:(CGSize)arg1 withFrameSize:(CGSize)arg2 ;
-(void)_performWhileAvoidingNegativeContentOffset:(/*^block*/id)arg1 ;
-(CGPoint)_updatedContentOffsetForOffset:(CGPoint)arg1 avoidNegativeContentOffset:(BOOL)arg2 ;
@end

