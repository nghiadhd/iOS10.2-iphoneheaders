/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/AirQuality.siriUIBundle/AirQuality
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirQuality/AirQuality-Structs.h>
#import <UIKit/UIView.h>

@class SiriAirQualitySummaryView, NSMutableArray, UIImageView;

@interface SiriAirQualitySnippetView : UIView {

	SiriAirQualitySummaryView* _summaryView;
	NSMutableArray* _pollutantCells;
	NSMutableArray* _keylines;
	UIImageView* _attributionView;
	CGSize _logoSize;

}
-(id)_colorForAirQualityCategory:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithSnippet:(id)arg1 ;
@end

