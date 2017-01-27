/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SBHardwareButtonActionList : NSObject {

	long long _performQueueNestCount;
	BOOL _buttonDown;
	NSMutableArray* _actionBlocks;

}

@property (nonatomic,retain) NSMutableArray * actionBlocks;                    //@synthesize actionBlocks=_actionBlocks - In the implementation block
@property (assign,getter=isButtonDown,nonatomic) BOOL buttonDown;              //@synthesize buttonDown=_buttonDown - In the implementation block
-(BOOL)isButtonDown;
-(void)performQueuedButtonUpActions;
-(void)scheduleButtonUpActionBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)actionBlocks;
-(void)setActionBlocks:(NSMutableArray *)arg1 ;
-(void)setButtonDown:(BOOL)arg1 ;
@end

