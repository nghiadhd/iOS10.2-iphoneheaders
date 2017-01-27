/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MusicControlTargetAction : NSObject {

	id _target;
	SEL _action;
	unsigned long long _controlEvents;

}

@property (assign,nonatomic,__weak) id target;                              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                    //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) unsigned long long controlEvents;              //@synthesize controlEvents=_controlEvents - In the implementation block
-(SEL)action;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(unsigned long long)controlEvents;
-(void)setControlEvents:(unsigned long long)arg1 ;
@end

