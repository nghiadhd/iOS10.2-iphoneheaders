/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVCollectionView.h>

@class _TVCollectionViewFlowLayout;

@interface _TVGridView : _TVCollectionView {

	BOOL _delegateRespondsToIndexPathForPreferredFocusedView;
	_TVCollectionViewFlowLayout* _gridFlowLayout;

}

@property (nonatomic,retain) _TVCollectionViewFlowLayout * gridFlowLayout;              //@synthesize gridFlowLayout=_gridFlowLayout - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGRect)_visibleBounds;
-(_TVCollectionViewFlowLayout *)gridFlowLayout;
-(void)setGridFlowLayout:(_TVCollectionViewFlowLayout *)arg1 ;
@end

