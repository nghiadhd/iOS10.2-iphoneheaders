/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBTransaction.h>
#import <SpringBoard/SBStartupTransition.h>

@class SBStartupTransitionContext, SBMainWorkspace;

@interface SBBaseStartupTransition : SBTransaction <SBStartupTransition> {

	unsigned long long _destination;
	SBStartupTransitionContext* _context;
	SBMainWorkspace* _mainWorkspace;

}

@property (nonatomic,readonly) SBMainWorkspace * mainWorkspace;                   //@synthesize mainWorkspace=_mainWorkspace - In the implementation block
@property (nonatomic,readonly) SBStartupTransitionContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) unsigned long long destination;                    //@synthesize destination=_destination - In the implementation block
-(SBMainWorkspace *)mainWorkspace;
-(void)performTransitionWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithDestination:(unsigned long long)arg1 context:(id)arg2 ;
-(SBStartupTransitionContext *)context;
-(unsigned long long)destination;
-(void)_begin;
@end

