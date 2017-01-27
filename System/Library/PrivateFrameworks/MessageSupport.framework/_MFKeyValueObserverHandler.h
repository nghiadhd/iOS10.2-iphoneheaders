/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MessageSupport.framework/MessageSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFKVOObservation.h>

@class NSString;

@interface _MFKeyValueObserverHandler : NSObject <MFKVOObservation> {

	id _object;
	NSString* _keyPath;
	/*^block*/id _block;
	BOOL _observing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)startObservingWithOptions:(unsigned long long)arg1 ;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)stopObserving;
@end

