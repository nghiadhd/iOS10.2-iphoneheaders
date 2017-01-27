/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVGridView.h>
#import <TVMLKit/TVRowHosting.h>

@class UIView, NSString;

@interface _TVMLGridView : _TVGridView <TVRowHosting> {

	BOOL _configureForListTemplate;
	UIView* _headerView;

}

@property (assign,nonatomic) BOOL configureForListTemplate;              //@synthesize configureForListTemplate=_configureForListTemplate - In the implementation block
@property (nonatomic,retain) UIView * headerView;                        //@synthesize headerView=_headerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldBindRowsTogether; 
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2 ;
-(BOOL)configureForListTemplate;
-(void)setConfigureForListTemplate:(BOOL)arg1 ;
@end

