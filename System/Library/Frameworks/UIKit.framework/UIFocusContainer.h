/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol UIFocusContainer <NSObject>
@property (nonatomic,readonly) id<UIFocusContainer> preferredFocusedItem; 
@property (nonatomic,readonly) UIView * focusedView; 
@required
-(void)setNeedsPreferredFocusedItemUpdate;
-(UIView *)focusedView;
-(void)updatePreferredFocusedItemIfNeeded;
-(BOOL)isAncestorOfItem:(id)arg1;
-(id<UIFocusContainer>)preferredFocusedItem;
-(BOOL)shouldChangeFocusedItem:(id)arg1 heading:(unsigned long long)arg2;
-(void)focusedViewWillChange;
-(void)focusedViewDidChange;
-(BOOL)shouldChangeFocusedItem:(id)arg1;

@end

