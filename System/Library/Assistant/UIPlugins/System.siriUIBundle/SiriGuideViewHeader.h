/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <UIKit/UICollectionReusableView.h>
#import <libobjc.A.dylib/SiriUIReusableView.h>

@class SiriUISnippetViewController, UILabel, NSString;

@interface SiriGuideViewHeader : UICollectionReusableView <SiriUIReusableView> {

	UILabel* _headerLabel;
	NSString* _title;

}

@property (nonatomic,copy) NSString * title;                                                          //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController; 
+(double)defaultHeight;
+(id)reuseIdentifier;
+(id)elementKind;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

