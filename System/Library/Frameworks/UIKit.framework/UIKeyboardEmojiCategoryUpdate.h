/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIKeyboardEmojiKeyDisplayController;


@protocol UIKeyboardEmojiCategoryUpdate <NSObject>
@property (assign,nonatomic) UIKeyboardEmojiKeyDisplayController * emojiKeyManager; 
@optional
-(long long)updateToCategoryWithOffsetPercentage:(double)arg1;

@required
-(UIKeyboardEmojiKeyDisplayController *)emojiKeyManager;
-(void)updateToCategory:(long long)arg1;
-(void)setEmojiKeyManager:(id)arg1;

@end
