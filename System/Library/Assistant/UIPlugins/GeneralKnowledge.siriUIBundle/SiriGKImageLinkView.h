/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKView.h>

@class UIImageView, UIView, SAGKImageLinkedAnswer;

@interface SiriGKImageLinkView : SiriGKView {

	UIImageView* _imageView;
	UIImageView* _playIconImageView;
	UIView* _backgroundTintView;
	UIView* _placeholderView;
	BOOL _isVideoResult;
	SAGKImageLinkedAnswer* _imageLinkedAnswer;

}
-(id)initWithImageLinkedAnswer:(id)arg1 safariBackURL:(id)arg2 isVideoResult:(BOOL)arg3 usingPersistentStore:(id)arg4 ;
-(void)_configureWithImage:(id)arg1 asVideoResult:(BOOL)arg2 ;
-(id)_applyBlurredPlayIconToImage:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isSelectable;
-(BOOL)isFullWidth;
-(id)imageResource;
@end

