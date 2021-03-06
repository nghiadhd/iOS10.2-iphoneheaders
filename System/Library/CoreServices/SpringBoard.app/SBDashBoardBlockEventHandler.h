/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDashBoardEventHandling.h>

@class NSString;

@interface SBDashBoardBlockEventHandler : NSObject <SBDashBoardEventHandling> {

	/*^block*/id _buttonPredicate;
	/*^block*/id _eventBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(id)initWithButtonPredicate:(/*^block*/id)arg1 eventBlock:(/*^block*/id)arg2 ;
-(id)init;
-(BOOL)handleEvent:(id)arg1 ;
@end

