/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKit/UIView.h>

@protocol MiroPassthroughViewDelegate;
@interface MiroPassthroughView : UIView {

	id<MiroPassthroughViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MiroPassthroughViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<MiroPassthroughViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<MiroPassthroughViewDelegate>)delegate;
@end

