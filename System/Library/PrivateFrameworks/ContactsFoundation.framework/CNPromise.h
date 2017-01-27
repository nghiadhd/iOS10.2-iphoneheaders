/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNPromise.h>

@class CNFuture, NSString;

@interface CNPromise : NSObject <CNPromise> {

	CNFuture* _future;

}

@property (readonly) CNFuture * future;                             //@synthesize future=_future - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(/*^block*/id)completionHandlerAdapterWithDefaultValue:(id)arg1 ;
-(/*^block*/id)boolErrorCompletionHandlerAdapter;
-(BOOL)finishWithResult:(id)arg1 ;
-(CNFuture *)future;
-(/*^block*/id)completionHandlerAdapter;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)finishWithError:(id)arg1 ;
@end

