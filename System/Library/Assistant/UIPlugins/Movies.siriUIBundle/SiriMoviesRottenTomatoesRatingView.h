/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, NSNumber;

@interface SiriMoviesRottenTomatoesRatingView : UIView {

	UIImageView* _tomatoImageView;
	UILabel* _percentageLabel;
	double _tomatoImageViewRightPadding;
	NSNumber* _tomatoRating;

}
-(BOOL)_isFresh;
-(id)initWithRating:(id)arg1 viewSize:(long long)arg2 showProviderName:(BOOL)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)baselineOffsetFromTopOfFrame;
@end

