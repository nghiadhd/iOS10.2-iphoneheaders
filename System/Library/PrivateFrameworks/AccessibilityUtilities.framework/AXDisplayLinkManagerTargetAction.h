/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXDisplayLinkManagerTargetAction : NSObject {

	id _target;
	SEL _actionSelector;
	unsigned long long _displayDidRefreshCount;

}

@property (nonatomic,retain) id target;                                              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL actionSelector;                                     //@synthesize actionSelector=_actionSelector - In the implementation block
@property (assign,nonatomic) unsigned long long displayDidRefreshCount;              //@synthesize displayDidRefreshCount=_displayDidRefreshCount - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setActionSelector:(SEL)arg1 ;
-(SEL)actionSelector;
-(unsigned long long)displayDidRefreshCount;
-(void)setDisplayDidRefreshCount:(unsigned long long)arg1 ;
-(id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2 ;
-(void)displayDidRefresh:(id)arg1 ;
@end

