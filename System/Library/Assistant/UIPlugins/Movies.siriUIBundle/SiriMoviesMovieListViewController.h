/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/SiriUIActionableFooterViewDelegate.h>

@class UICollectionView, UICollectionViewFlowLayout, NSArray, NSDictionary, SAMovieV2MovieListSnippet, NSString;

@interface SiriMoviesMovieListViewController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SiriUIActionableFooterViewDelegate> {

	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;
	NSArray* _movieListCells;
	long long _itemsPerRow;
	NSDictionary* _cellSizeByRow;

}

@property (nonatomic,retain) SAMovieV2MovieListSnippet * snippet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMovieListSnippet:(id)arg1 ;
-(void)_calculateLayoutOfCollectionViewContents;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)footerViewTapped:(id)arg1 ;
-(Class)footerViewClass;
-(void)configureReusableFooterView:(id)arg1 ;
@end
