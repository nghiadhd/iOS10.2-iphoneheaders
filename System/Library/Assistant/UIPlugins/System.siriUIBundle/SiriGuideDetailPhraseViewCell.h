/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class SiriUIContentLabel, NSString;

@interface SiriGuideDetailPhraseViewCell : SiriUIContentCollectionViewCell {

	SiriUIContentLabel* _phraseLabel;
	NSString* _phrase;

}

@property (nonatomic,copy) NSString * phrase;              //@synthesize phrase=_phrase - In the implementation block
+(double)heightForPhrase:(id)arg1 withWidth:(double)arg2 ;
+(void)_configureLabel:(id)arg1 withPhrase:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(NSString *)phrase;
-(void)setPhrase:(NSString *)arg1 ;
@end

