/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _NAObserverProxy : NSObject {

	BOOL _valid;
	id _weakObserver;

}

@property (nonatomic,__weak,readonly) id weakObserver;                 //@synthesize weakObserver=_weakObserver - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;              //@synthesize valid=_valid - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(id)initWithWeakObserver:(id)arg1 ;
-(id)weakObserver;
@end

