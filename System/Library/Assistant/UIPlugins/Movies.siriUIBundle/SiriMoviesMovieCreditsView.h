/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSMutableArray;

@interface SiriMoviesMovieCreditsView : UIView {

	UILabel* _directorLabel;
	NSMutableArray* _directorNameLabelsArray;
	UILabel* _starringLabel;
	NSMutableArray* _starNameLabelsArray;

}
-(id)initWithFrame:(CGRect)arg1 movieDetailSnippet:(id)arg2 ;
-(double)_creditsViewWidth;
-(CGSize)_calculateLayoutForSize:(CGSize)arg1 setFrame:(BOOL)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

