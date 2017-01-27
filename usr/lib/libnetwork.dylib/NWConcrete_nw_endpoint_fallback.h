/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_endpoint_fallback.h>

@protocol OS_nw_interface;
@class NWConcrete_nw_endpoint_handler, NSObject, NSString;

@interface NWConcrete_nw_endpoint_fallback : NSObject <OS_nw_endpoint_fallback> {

	NWConcrete_nw_endpoint_handler* primary_child;
	NWConcrete_nw_endpoint_handler* fallback_child;
	int result;
	BOOL weak_fallback;
	NSObject*<OS_nw_interface> primary_interface;
	NSObject*<OS_nw_interface> fallback_interface;
	BOOL fallback_based_on_interface_type;
	void* fallback_timer;
	BOOL started_fallback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)applyWithHandler:(id)arg1 toChildren:(/*^block*/id)arg2 ;
-(void)startWithHandler:(id)arg1 ;
-(void)cancelWithHandler:(id)arg1 forced:(BOOL)arg2 ;
-(void)updatePathWithHandler:(id)arg1 ;
@end

