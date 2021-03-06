/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/MSMessageExtensionBalloonPlugin.bundle/MSMessageExtensionBalloonPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MSMessageExtensionBalloonPlugin/MSMessageExtensionBalloonPlugin-Structs.h>
#import <UIKit/UIView.h>
#import <DigitalTouchBalloonProvider/CKTranscriptPluginView.h>

@protocol LPLinkPresentationPropertyProvider;
@class UIImageView, IMPluginPayload, LPLinkView, NSString;

@interface MSMessageExtensionBalloonView : UIView <CKTranscriptPluginView> {

	BOOL _isInShelf;
	BOOL _fromMe;
	UIImageView* _imageView;
	IMPluginPayload* _payload;
	LPLinkView* _linkView;
	UIImageView* _iconView;
	id<LPLinkPresentationPropertyProvider> _propertyProvider;

}

@property (nonatomic,retain) LPLinkView * linkView;                                                //@synthesize linkView=_linkView - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                               //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) BOOL fromMe;                                                          //@synthesize fromMe=_fromMe - In the implementation block
@property (nonatomic,retain) id<LPLinkPresentationPropertyProvider> propertyProvider;              //@synthesize propertyProvider=_propertyProvider - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) IMPluginPayload * payload;                                            //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) BOOL isInShelf;                                                       //@synthesize isInShelf=_isInShelf - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsOutline; 
-(id<LPLinkPresentationPropertyProvider>)propertyProvider;
-(id)initWithFrame:(CGRect)arg1 payload:(id)arg2 fromMe:(BOOL)arg3 ;
-(void)setPropertyProvider:(id<LPLinkPresentationPropertyProvider>)arg1 ;
-(void)setLinkView:(LPLinkView *)arg1 ;
-(BOOL)isInShelf;
-(void)setFromMe:(BOOL)arg1 ;
-(void)setIsInShelf:(BOOL)arg1 ;
-(LPLinkView *)linkView;
-(void)layoutSubviews;
-(void)reloadData;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(IMPluginPayload *)payload;
-(UIImageView *)imageView;
-(void)setPayload:(IMPluginPayload *)arg1 ;
-(BOOL)fromMe;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
@end

